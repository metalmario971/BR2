/**
*  @file HashMap.h
*  @date February 13, 2015
*  @author MetalMario971
*/
#pragma once
#ifndef __HASHMAP_2256332660273822544327474_H__
#define __HASHMAP_2256332660273822544327474_H__

#include "../base/BaseHeader.h"
#include "../base/Hash.h"
namespace Game {
/**
*    @class HashMap
*    @brief Maps strings to items.  This allows you to use
*            strings in a lookup table.
*/
template < class Tx, class TKey>
class _HashMap : public VirtualMemory {
public:
  template < class Ta >
  struct HashMapItem {
    Ta* _val;
    bool hasValue() { return _val != nullptr; }
    Ta value() { return _val ? (*_val) : nullptr; }
    HashMapItem(Ta* t) : _val(t) {}
  };
  typedef std::map<TKey, Tx> HashMapType;
  typedef typename HashMapType::iterator iterator;
  typedef typename HashMapType::const_iterator const_iterator;

public:
  _HashMap();
  virtual ~_HashMap() override;

  iterator begin() { return _map.begin(); }
  iterator end() { return _map.end(); }
  void add(string_t key, Tx& x);//Can't be const
  bool remove(string_t key);
  HashMapItem<Tx> find(string_t key);
  size_t size() { return _map.size(); }
  void erase(const_iterator _Where) { _map.erase(_Where); }
  void clear() { _map.clear(); }
  bool contains(string_t key);


protected:
  HashMapType _map;
  virtual int32_t getNumAlgorithms() = 0;
  virtual TKey computeHash(string_t str, int32_t iAlgorithm) = 0;


};
template < class Tx, class TKey >
_HashMap<Tx, TKey>::_HashMap() {
}
template < class Tx, class TKey >
_HashMap<Tx, TKey>::~_HashMap() {
  _map.clear();
}
template < class Tx, class TKey >
void _HashMap<Tx, TKey>::add(string_t str, Tx& x) {
  TKey nHashVal;
  int i;
  for (i = 0; i < getNumAlgorithms(); ++i) {
    nHashVal = computeHash(str, i);
    if (_map.find(nHashVal) != _map.end()) {
      BroLogWarn("Hash Map collision using algorithm " + i);
      str.setHashAlgorithmIndex(i + 1);
    }
    else {
      break;
    }
  }

#ifdef _DEBUG
  //We had a collision and ran out of algorithms.
  if (i == getNumAlgorithms() - 1) {
    DebugHelper::debugBreak();
  }
#endif

  _map.insert(nHashVal, x);
}
// - Returns false if remove failed.
template < class Tx, class TKey >
bool _HashMap<Tx, TKey>::remove(string_t key) {
  TKey n = computeHash(key, key.getHashAlgorithmIndex());
  bool b = _map.remove(n, true);

  if (b == false) {
    BroLogWarn(" [Hm] Failed to remove hashed string");
  }

  return b;
}
/**
*   @fn find()
*   @brief finds a string.  Returns a nullptr RefItem if not found.
*/
template < class Tx, class TKey >
_HashMap<Tx, TKey>::HashMapItem<Tx> _HashMap<Tx, TKey>::find(string_t key) {
  TKey n = computeHash(key, key.getHashAlgorithmIndex());

  typename HashMapType::iterator ite = _map.find(n);
  if (ite == _map.end()) {
    return HashMapItem<Tx>(nullptr);
  }

  return HashMapItem<Tx>(&(ite->second));
}
template < class Tx, class TKey >
bool _HashMap<Tx, TKey>::contains(string_t key) {
  HashMapItem<Tx> ri = find(str);
  if (ri._val == nullptr) {
    return false;
  }
  return true;
}

/**
*   @class HashMap32
*   @brief Implementation of _HashMap for 32-bit hash.
*/
template < class Tx >
class HashMap32 : public _HashMap<Tx, uint32_t> {
public:
  HashMap32() {}
  virtual ~HashMap32() override {}

  int32_t getNumAlgorithms() override {
    return FNV_MAX_ALGORITHMS_32;
  }
  uint32_t computeHash(string_t str, int32_t iAlgorithm) override {
    return Hash::computeStringHash32bit(str, iAlgorithm);
  }

};
/**
*   @class HashMap32
*   @brief Implementation of _HashMap for 64-bit hash.
*/
template < class Tx >
class HashMap64 : public _HashMap<Tx, uint64_t> {
public:
  HashMap64() {}
  virtual ~HashMap64() override {}

  int32_t getNumAlgorithms() override {
    return FNV_MAX_ALGORITHMS_64;
  }
  uint64_t computeHash(string_t str, int32_t iAlgorithm) override {
    return Hash::computeStringHash64bit(str, iAlgorithm);
  }

};
/**
*   @class HashMap
*   @brief Hash map with 32-bit hash.
*/
template < class Tx >
class HashMap : public HashMap32<Tx> {
public:
  HashMap() {}
  virtual ~HashMap() override {}
};





}//ns game



#endif
