/**
*  @file ObjectFile.h
*  @date May 9, 2016
*  @author MetalMario971
*/
#pragma once
#ifndef __OBJECTFILE_1462849533491139354_H__
#define __OBJECTFILE_1462849533491139354_H__

#include "../base/BaseHeader.h"
#include "../base/BinaryFile.h"
#include "../model/ModelHeader.h"
#include "../math/MathAll.h"
namespace BR2 {
/**
*    @class ObjectFile
*    @brief Imports OBJ files STRICTLY FOR BRO.
*       Simpler version of ObjFile
*           Imports only Vertex, Normal, TCoord
*           Exported from blender with export script
*       For more generic .OBJ importing use ObjFile.
*       Note - that's kind of messed up right now
*
*   This time we load directly into mesh specs, and compile a mesh spec hierarchy.
*   No need for the conversion overhead.
*/
class ObjFile : public VirtualMemoryShared<ObjFile> {
  string_t c_strVersion = "0.03";
public:
  ObjFile(std::shared_ptr<GLContext> ctx);
  virtual ~ObjFile() override;

  void load(string_t& strFilePath, bool flipWinding);
  std::vector<std::shared_ptr<MeshSpec>>& getMeshSpecs() { return _vecMeshes; }

private:
  enum {
    MissingIndexValue = -1
  };

  std::vector<std::shared_ptr<MeshSpec>> _vecMeshes;
  std::shared_ptr<MeshSpec> _pCurrentSpec = nullptr;
  std::shared_ptr<GLContext> _pContext = nullptr;

  mat4 _matLocalMatrix;
  std::vector<vec3> _vecVerts;
  std::vector<vec3> _vecNormals;
  std::vector<vec2> _vecTCoords;

  int32_t _iCurrentLine = 0;

  bool _bDebugDisableVertexCompression;
  string_t _sFileName;
  std::map<ivec3*, int32_t, ivec3::Vec3xCompLess> _mapVertexCache;

  //Box3f _boundBoxObject;

  std::vector<ModelVertexType> _vecMeshVerts;
  std::vector<v_index32> _vecMeshIndexes;
  bool _bFlipWinding = false;

  int32_t findCachedVertex(int32_t vi, int32_t xi, int32_t ni);
  void addCachedVertex(int32_t newIndex, int32_t vi, int32_t xi, int32_t ni);
  void clearVertexCache();
  vec3 readVec3(BinaryFile& pBufFile);
  vec2 readVec2(BinaryFile& pBufFile);
  void loadObjFileContents(BinaryFile& pBufferedFile);
  void parseGeom(BinaryFile& pBufferedFile, string_t& tok);
  void parseFace(BinaryFile& pBufferedFile, string_t& tok);
  int32_t parseFaceComponent(string_t& tok, int32_t& strlind, int32_t iComponent);
  void addFaceVertex(int32_t iVertex, int32_t iTCoord, int32_t iNormal);
  void addCurrentSpec();
  void copySpecFragments(std::shared_ptr<MeshSpec> pSpec);
  int32_t addNewMeshVertex(int32_t vi, int32_t xi, int32_t ni);
  mat4 parseMat4(BinaryFile& bf);



};

}//ns Game



#endif
