/**
*
*    @file TStr.h
*    @date April 8, 2016
*    @author Derek Page
*
*    � 2016 
*
*
*/
#pragma once
#ifndef __TSTR_14601721932770311964_H__
#define __TSTR_14601721932770311964_H__

#include "../base/TypeConv.h"

namespace Game {

//t_string CONCATENATION SIMPLIFICATION
//****THESE CONTENTS ARE GENERATED***

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
// String Shorthand concatenators. (add if necessary)
// NOTE: These were compiled with the template utility.  Search dslayer\dev\src.c

template<
    typename Ta0
>
FORCE_INLINE t_string TStr(
    Ta0 a0
){
return
    tstr(a0)
;
}
template<
    typename Ta0
,typename Ta1
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
){
return
    tstr(a0)
    +tstr(a1)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
,typename Ta89
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
,Ta89 a89
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
    +tstr(a89)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
,typename Ta89
,typename Ta90
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
,Ta89 a89
,Ta90 a90
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
    +tstr(a89)
    +tstr(a90)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
,typename Ta89
,typename Ta90
,typename Ta91
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
,Ta89 a89
,Ta90 a90
,Ta91 a91
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
    +tstr(a89)
    +tstr(a90)
    +tstr(a91)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
,typename Ta89
,typename Ta90
,typename Ta91
,typename Ta92
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
,Ta89 a89
,Ta90 a90
,Ta91 a91
,Ta92 a92
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
    +tstr(a89)
    +tstr(a90)
    +tstr(a91)
    +tstr(a92)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
,typename Ta89
,typename Ta90
,typename Ta91
,typename Ta92
,typename Ta93
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
,Ta89 a89
,Ta90 a90
,Ta91 a91
,Ta92 a92
,Ta93 a93
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
    +tstr(a89)
    +tstr(a90)
    +tstr(a91)
    +tstr(a92)
    +tstr(a93)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
,typename Ta89
,typename Ta90
,typename Ta91
,typename Ta92
,typename Ta93
,typename Ta94
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
,Ta89 a89
,Ta90 a90
,Ta91 a91
,Ta92 a92
,Ta93 a93
,Ta94 a94
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
    +tstr(a89)
    +tstr(a90)
    +tstr(a91)
    +tstr(a92)
    +tstr(a93)
    +tstr(a94)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
,typename Ta89
,typename Ta90
,typename Ta91
,typename Ta92
,typename Ta93
,typename Ta94
,typename Ta95
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
,Ta89 a89
,Ta90 a90
,Ta91 a91
,Ta92 a92
,Ta93 a93
,Ta94 a94
,Ta95 a95
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
    +tstr(a89)
    +tstr(a90)
    +tstr(a91)
    +tstr(a92)
    +tstr(a93)
    +tstr(a94)
    +tstr(a95)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
,typename Ta89
,typename Ta90
,typename Ta91
,typename Ta92
,typename Ta93
,typename Ta94
,typename Ta95
,typename Ta96
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
,Ta89 a89
,Ta90 a90
,Ta91 a91
,Ta92 a92
,Ta93 a93
,Ta94 a94
,Ta95 a95
,Ta96 a96
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
    +tstr(a89)
    +tstr(a90)
    +tstr(a91)
    +tstr(a92)
    +tstr(a93)
    +tstr(a94)
    +tstr(a95)
    +tstr(a96)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
,typename Ta89
,typename Ta90
,typename Ta91
,typename Ta92
,typename Ta93
,typename Ta94
,typename Ta95
,typename Ta96
,typename Ta97
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
,Ta89 a89
,Ta90 a90
,Ta91 a91
,Ta92 a92
,Ta93 a93
,Ta94 a94
,Ta95 a95
,Ta96 a96
,Ta97 a97
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
    +tstr(a89)
    +tstr(a90)
    +tstr(a91)
    +tstr(a92)
    +tstr(a93)
    +tstr(a94)
    +tstr(a95)
    +tstr(a96)
    +tstr(a97)
;
}
template<
    typename Ta0
,typename Ta1
,typename Ta2
,typename Ta3
,typename Ta4
,typename Ta5
,typename Ta6
,typename Ta7
,typename Ta8
,typename Ta9
,typename Ta10
,typename Ta11
,typename Ta12
,typename Ta13
,typename Ta14
,typename Ta15
,typename Ta16
,typename Ta17
,typename Ta18
,typename Ta19
,typename Ta20
,typename Ta21
,typename Ta22
,typename Ta23
,typename Ta24
,typename Ta25
,typename Ta26
,typename Ta27
,typename Ta28
,typename Ta29
,typename Ta30
,typename Ta31
,typename Ta32
,typename Ta33
,typename Ta34
,typename Ta35
,typename Ta36
,typename Ta37
,typename Ta38
,typename Ta39
,typename Ta40
,typename Ta41
,typename Ta42
,typename Ta43
,typename Ta44
,typename Ta45
,typename Ta46
,typename Ta47
,typename Ta48
,typename Ta49
,typename Ta50
,typename Ta51
,typename Ta52
,typename Ta53
,typename Ta54
,typename Ta55
,typename Ta56
,typename Ta57
,typename Ta58
,typename Ta59
,typename Ta60
,typename Ta61
,typename Ta62
,typename Ta63
,typename Ta64
,typename Ta65
,typename Ta66
,typename Ta67
,typename Ta68
,typename Ta69
,typename Ta70
,typename Ta71
,typename Ta72
,typename Ta73
,typename Ta74
,typename Ta75
,typename Ta76
,typename Ta77
,typename Ta78
,typename Ta79
,typename Ta80
,typename Ta81
,typename Ta82
,typename Ta83
,typename Ta84
,typename Ta85
,typename Ta86
,typename Ta87
,typename Ta88
,typename Ta89
,typename Ta90
,typename Ta91
,typename Ta92
,typename Ta93
,typename Ta94
,typename Ta95
,typename Ta96
,typename Ta97
,typename Ta98
>
FORCE_INLINE t_string TStr(
    Ta0 a0
,Ta1 a1
,Ta2 a2
,Ta3 a3
,Ta4 a4
,Ta5 a5
,Ta6 a6
,Ta7 a7
,Ta8 a8
,Ta9 a9
,Ta10 a10
,Ta11 a11
,Ta12 a12
,Ta13 a13
,Ta14 a14
,Ta15 a15
,Ta16 a16
,Ta17 a17
,Ta18 a18
,Ta19 a19
,Ta20 a20
,Ta21 a21
,Ta22 a22
,Ta23 a23
,Ta24 a24
,Ta25 a25
,Ta26 a26
,Ta27 a27
,Ta28 a28
,Ta29 a29
,Ta30 a30
,Ta31 a31
,Ta32 a32
,Ta33 a33
,Ta34 a34
,Ta35 a35
,Ta36 a36
,Ta37 a37
,Ta38 a38
,Ta39 a39
,Ta40 a40
,Ta41 a41
,Ta42 a42
,Ta43 a43
,Ta44 a44
,Ta45 a45
,Ta46 a46
,Ta47 a47
,Ta48 a48
,Ta49 a49
,Ta50 a50
,Ta51 a51
,Ta52 a52
,Ta53 a53
,Ta54 a54
,Ta55 a55
,Ta56 a56
,Ta57 a57
,Ta58 a58
,Ta59 a59
,Ta60 a60
,Ta61 a61
,Ta62 a62
,Ta63 a63
,Ta64 a64
,Ta65 a65
,Ta66 a66
,Ta67 a67
,Ta68 a68
,Ta69 a69
,Ta70 a70
,Ta71 a71
,Ta72 a72
,Ta73 a73
,Ta74 a74
,Ta75 a75
,Ta76 a76
,Ta77 a77
,Ta78 a78
,Ta79 a79
,Ta80 a80
,Ta81 a81
,Ta82 a82
,Ta83 a83
,Ta84 a84
,Ta85 a85
,Ta86 a86
,Ta87 a87
,Ta88 a88
,Ta89 a89
,Ta90 a90
,Ta91 a91
,Ta92 a92
,Ta93 a93
,Ta94 a94
,Ta95 a95
,Ta96 a96
,Ta97 a97
,Ta98 a98
){
return
    tstr(a0)
    +tstr(a1)
    +tstr(a2)
    +tstr(a3)
    +tstr(a4)
    +tstr(a5)
    +tstr(a6)
    +tstr(a7)
    +tstr(a8)
    +tstr(a9)
    +tstr(a10)
    +tstr(a11)
    +tstr(a12)
    +tstr(a13)
    +tstr(a14)
    +tstr(a15)
    +tstr(a16)
    +tstr(a17)
    +tstr(a18)
    +tstr(a19)
    +tstr(a20)
    +tstr(a21)
    +tstr(a22)
    +tstr(a23)
    +tstr(a24)
    +tstr(a25)
    +tstr(a26)
    +tstr(a27)
    +tstr(a28)
    +tstr(a29)
    +tstr(a30)
    +tstr(a31)
    +tstr(a32)
    +tstr(a33)
    +tstr(a34)
    +tstr(a35)
    +tstr(a36)
    +tstr(a37)
    +tstr(a38)
    +tstr(a39)
    +tstr(a40)
    +tstr(a41)
    +tstr(a42)
    +tstr(a43)
    +tstr(a44)
    +tstr(a45)
    +tstr(a46)
    +tstr(a47)
    +tstr(a48)
    +tstr(a49)
    +tstr(a50)
    +tstr(a51)
    +tstr(a52)
    +tstr(a53)
    +tstr(a54)
    +tstr(a55)
    +tstr(a56)
    +tstr(a57)
    +tstr(a58)
    +tstr(a59)
    +tstr(a60)
    +tstr(a61)
    +tstr(a62)
    +tstr(a63)
    +tstr(a64)
    +tstr(a65)
    +tstr(a66)
    +tstr(a67)
    +tstr(a68)
    +tstr(a69)
    +tstr(a70)
    +tstr(a71)
    +tstr(a72)
    +tstr(a73)
    +tstr(a74)
    +tstr(a75)
    +tstr(a76)
    +tstr(a77)
    +tstr(a78)
    +tstr(a79)
    +tstr(a80)
    +tstr(a81)
    +tstr(a82)
    +tstr(a83)
    +tstr(a84)
    +tstr(a85)
    +tstr(a86)
    +tstr(a87)
    +tstr(a88)
    +tstr(a89)
    +tstr(a90)
    +tstr(a91)
    +tstr(a92)
    +tstr(a93)
    +tstr(a94)
    +tstr(a95)
    +tstr(a96)
    +tstr(a97)
    +tstr(a98)
;
}


}//ns Game



#endif
