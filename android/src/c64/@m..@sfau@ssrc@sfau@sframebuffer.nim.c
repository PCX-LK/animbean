/* Generated by Nim Compiler v1.6.4 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ;
typedef struct tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ;
typedef struct tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_GlError__g39bwzfxwc30p3p9cWy1gD9bw tyObject_GlError__g39bwzfxwc30p3p9cWy1gD9bw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg;
typedef struct tyTuple__8E3LsULUktH7z5GXZa5GHg tyTuple__8E3LsULUktH7z5GXZa5GHg;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ {
NI x;
NI y;
};
struct tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ {
NU32 handle;
tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ size;
tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ* texture;
NIM_BOOL isDefault;
NIM_BOOL hasDepth;
NU32 depthHandle;
};
typedef NU8 tyEnum_TextureFilter__zerQ3LMmc801hL4AG54gqg;
typedef NU8 tyEnum_TextureWrap__u5t9aRlFqNYWEA2nuqy9c2aw;
typedef N_CDECL_PTR(void, tyProc__D0XCEZcts9cN8zkp9bhnQ00A) (NU32 target, NU32 framebuffer);
typedef N_CDECL_PTR(void, tyProc__Yzx9a9btWmJF68PQKpunfsUw) (NU32 target, NU32 internalformat, NI32 width, NI32 height);
typedef NI tyArray__OYqzMMAeF9bf1yDDPNUyDgg[32];
struct tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ {
NU32 handle;
tyEnum_TextureWrap__u5t9aRlFqNYWEA2nuqy9c2aw uwrap;
tyEnum_TextureWrap__u5t9aRlFqNYWEA2nuqy9c2aw vwrap;
tyEnum_TextureFilter__zerQ3LMmc801hL4AG54gqg minfilter;
tyEnum_TextureFilter__zerQ3LMmc801hL4AG54gqg magfilter;
NU32 target;
tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ size;
};
typedef N_CDECL_PTR(void, tyProc__iMbbuwLy7Xty4C68mCS0bg) (NU32 target, NI32 level, NI32 internalformat, NI32 width, NI32 height, NI32 border, NU32 format, NU32 type_0, void* pixels);
typedef N_CDECL_PTR(void, tyProc__Stz6oN9ajkLoIELjuISjVsw) (NU32 target, NU32 attachment, NU32 renderbuffertarget, NU32 renderbuffer);
typedef N_CDECL_PTR(void, tyProc__Ji0FqnyPy7wrNl7IpZ9clzQ) (NU32 target, NU32 attachment, NU32 textarget, NU32 texture, NI32 level);
typedef N_CDECL_PTR(NU32, tyProc__G9c71BChV6aGr2sIMZA9akIg) (NU32 target);
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct TNimTypeV2 {
void* destructor;
NI size;
NI align;
NCSTRING name;
void* traceImpl;
void* typeInfoV1;
NI flags;
};
struct RootObj {
TNimTypeV2* m_type;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_GlError__g39bwzfxwc30p3p9cWy1gD9bw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg {
NU8 rv;
NU8 gv;
NU8 bv;
NU8 av;
};
typedef N_CDECL_PTR(void, tyProc__LV79aovrnL5TaAyDueiW6Zw) (NI32 x, NI32 y, NI32 width, NI32 height);
struct tyTuple__8E3LsULUktH7z5GXZa5GHg {
NI32 Field0;
NI32 Field1;
NI32 Field2;
NI32 Field3;
};
typedef N_CDECL_PTR(void, tyProc__BvZlW2Hgm7lcLz1a9aNt8bg) (NF32 red, NF32 green, NF32 blue, NF32 alpha);
typedef N_CDECL_PTR(void, tyProc__HkM9bhsP1jtZQqwOk14SmLg) (NIM_BOOL flag);
typedef N_CDECL_PTR(void, tyProc__CGFSM2Hc7U0HyNmEEh3xng) (NU32 mask);
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
};
struct tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w {
NF32 x;
NF32 y;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(void, glDeleteFramebuffer__OOZfauZsrcZfauZglZglproc_248)(NU32 framebuffer);
N_LIB_PRIVATE N_NIMCALL(void, glDeleteFramebuffer__OOZfauZsrcZfauZglZglad_1774)(NU32 framebuffer);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, glDeleteRenderbuffer__OOZfauZsrcZfauZglZglproc_256)(NU32 renderbuffer);
N_LIB_PRIVATE N_NIMCALL(void, glDeleteRenderbuffer__OOZfauZsrcZfauZglZglad_1777)(NU32 renderbuffer);
static N_INLINE(tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ, vec2i__OOZfauZsrcZfauZfmath_428)(NI x, NI y);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NU32, glGenFramebuffer__OOZfauZsrcZfauZglZglproc_359)(void);
N_LIB_PRIVATE N_NIMCALL(NU32, glGenFramebuffer__OOZfauZsrcZfauZglZglad_1786)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___OOZfauZsrcZfauZtexture_119)(tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ** dest, tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ*, newTexture__OOZfauZsrcZfauZtexture_102)(tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ size, tyEnum_TextureFilter__zerQ3LMmc801hL4AG54gqg filter, tyEnum_TextureWrap__u5t9aRlFqNYWEA2nuqy9c2aw wrap);
static N_INLINE(void, glBindFramebuffer__OOZfauZsrcZfauZglZglproc_109)(NU32 target, NU32 framebuffer);
static N_INLINE(NU32, glGenRenderbuffer__OOZfauZsrcZfauZglZglproc_363)(void);
N_LIB_PRIVATE N_NIMCALL(NU32, glGenRenderbuffer__OOZfauZsrcZfauZglZglad_1789)(void);
static N_INLINE(void, glBindRenderbuffer__OOZfauZsrcZfauZglZglproc_114)(NU32 target, NU32 renderbuffer);
static N_INLINE(void, glRenderbufferStorage__OOZfauZsrcZfauZglZglproc_522)(NU32 target, NU32 internalformat, NI32 width, NI32 height);
static N_INLINE(void, glBindTexture__OOZfauZsrcZfauZglZglproc_119)(NU32 target, NU32 texture);
static N_INLINE(void, glTexImage2D__OOZfauZsrcZfauZglZglproc_581)(NU32 target, NI32 level, NI32 internalformat, NI32 width, NI32 height, NI32 border, NU32 format, NU32 type_0, void* pixels);
static N_INLINE(void, glFramebufferRenderbuffer__OOZfauZsrcZfauZglZglproc_332)(NU32 target, NU32 attachment, NU32 renderbuffertarget, NU32 renderbuffer);
static N_INLINE(void, glFramebufferTexture2D__OOZfauZsrcZfauZglZglproc_339)(NU32 target, NU32 attachment, NU32 textarget, NU32 texture, NI32 level);
static N_INLINE(NU32, glCheckFramebufferStatus__OOZfauZsrcZfauZglZglproc_174)(NU32 target);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1709)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_9)(NU64 x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_2592)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, use__OOZfauZsrcZfauZframebuffer_85)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* buffer);
static N_INLINE(void, glViewport__OOZfauZsrcZfauZglZglproc_813)(NI32 x, NI32 y, NI32 width, NI32 height);
static N_INLINE(void, glClearColor__OOZfauZsrcZfauZglZglproc_183)(NF32 red, NF32 green, NF32 blue, NF32 alpha);
static N_INLINE(NF32, r__OOZfauZsrcZfauZcolor_12)(tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg col);
static N_INLINE(NF32, g__OOZfauZsrcZfauZcolor_15)(tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg col);
static N_INLINE(NF32, b__OOZfauZsrcZfauZcolor_18)(tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg col);
static N_INLINE(NF32, a__OOZfauZsrcZfauZcolor_21)(tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg col);
static N_INLINE(void, glDepthMask__OOZfauZsrcZfauZglZglproc_277)(NIM_BOOL flag);
static N_INLINE(void, glClear__OOZfauZsrcZfauZglZglproc_179)(NU32 mask);
static N_INLINE(void, nimIncRef)(void* p);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZfauZsrcZfauZframebuffer_14)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* buffer);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p, NI alignment);
static N_INLINE(NI32, glGetIntegerv__OOZfauZsrcZfauZglZglproc_404)(NU32 pname);
N_LIB_PRIVATE N_NIMCALL(NI32, glGetIntegerv__OOZfauZsrcZfauZglZglad_1830)(NU32 pname);
N_LIB_PRIVATE N_NIMCALL(void, resize__OOZfauZsrcZfauZframebuffer_22)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* buffer, tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ size);
static N_INLINE(tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ, vec2i__OOZfauZsrcZfauZfmath_449)(tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w v);
static const struct {
  NI cap; NIM_CHAR data[40+1];
} TM__s0HsaSQx9csvhu0SetRa6Bg_2 = { 40 | NIM_STRLIT_FLAG, "Framebuffer error: incomplete attachment" };
static const NimStringV2 TM__s0HsaSQx9csvhu0SetRa6Bg_3 = {40, (NimStrPayload*)&TM__s0HsaSQx9csvhu0SetRa6Bg_2};
static const struct {
  NI cap; NIM_CHAR data[40+1];
} TM__s0HsaSQx9csvhu0SetRa6Bg_4 = { 40 | NIM_STRLIT_FLAG, "Framebuffer error: incomplete dimensions" };
static const NimStringV2 TM__s0HsaSQx9csvhu0SetRa6Bg_5 = {40, (NimStrPayload*)&TM__s0HsaSQx9csvhu0SetRa6Bg_4};
static const struct {
  NI cap; NIM_CHAR data[37+1];
} TM__s0HsaSQx9csvhu0SetRa6Bg_6 = { 37 | NIM_STRLIT_FLAG, "Framebuffer error: missing attachment" };
static const NimStringV2 TM__s0HsaSQx9csvhu0SetRa6Bg_7 = {37, (NimStrPayload*)&TM__s0HsaSQx9csvhu0SetRa6Bg_6};
static const struct {
  NI cap; NIM_CHAR data[53+1];
} TM__s0HsaSQx9csvhu0SetRa6Bg_8 = { 53 | NIM_STRLIT_FLAG, "Framebuffer error: unsupported combination of formats" };
static const NimStringV2 TM__s0HsaSQx9csvhu0SetRa6Bg_9 = {53, (NimStrPayload*)&TM__s0HsaSQx9csvhu0SetRa6Bg_8};
static const struct {
  NI cap; NIM_CHAR data[24+1];
} TM__s0HsaSQx9csvhu0SetRa6Bg_10 = { 24 | NIM_STRLIT_FLAG, "Framebuffer: Error code " };
static const NimStringV2 TM__s0HsaSQx9csvhu0SetRa6Bg_11 = {24, (NimStrPayload*)&TM__s0HsaSQx9csvhu0SetRa6Bg_10};
extern TNimTypeV2 NTIv2__g39bwzfxwc30p3p9cWy1gD9bw_;
extern NI lastFramebuffer__OOZfauZsrcZfauZglZglproc_13;
extern NIM_BOOL nimInErrorMode__system_3443;
extern tyProc__D0XCEZcts9cN8zkp9bhnQ00A glBindFramebuffer__OOZfauZsrcZfauZglZglad_32;
extern tyProc__D0XCEZcts9cN8zkp9bhnQ00A glBindRenderbuffer__OOZfauZsrcZfauZglZglad_36;
extern tyProc__Yzx9a9btWmJF68PQKpunfsUw glRenderbufferStorage__OOZfauZsrcZfauZglZglad_439;
extern NU32 lastActiveTextureUnit__OOZfauZsrcZfauZglZglproc_9;
extern tyArray__OYqzMMAeF9bf1yDDPNUyDgg lastBoundTextures__OOZfauZsrcZfauZglZglproc_10;
extern tyProc__D0XCEZcts9cN8zkp9bhnQ00A glBindTexture__OOZfauZsrcZfauZglZglad_40;
extern tyProc__iMbbuwLy7Xty4C68mCS0bg glTexImage2D__OOZfauZsrcZfauZglZglad_502;
extern tyProc__Stz6oN9ajkLoIELjuISjVsw glFramebufferRenderbuffer__OOZfauZsrcZfauZglZglad_220;
extern tyProc__Ji0FqnyPy7wrNl7IpZ9clzQ glFramebufferTexture2D__OOZfauZsrcZfauZglZglad_227;
extern tyProc__G9c71BChV6aGr2sIMZA9akIg glCheckFramebufferStatus__OOZfauZsrcZfauZglZglad_78;
extern NI lastViewX__OOZfauZsrcZfauZglZglproc_14;
extern NI lastViewY__OOZfauZsrcZfauZglZglproc_15;
extern NI lastViewW__OOZfauZsrcZfauZglZglproc_16;
extern NI lastViewH__OOZfauZsrcZfauZglZglproc_17;
extern tyProc__LV79aovrnL5TaAyDueiW6Zw glViewport__OOZfauZsrcZfauZglZglad_693;
extern tyProc__BvZlW2Hgm7lcLz1a9aNt8bg glClearColor__OOZfauZsrcZfauZglZglad_87;
extern NIM_BOOL lastDepthMask__OOZfauZsrcZfauZglZglproc_22;
extern tyProc__HkM9bhsP1jtZQqwOk14SmLg glDepthMask__OOZfauZsrcZfauZglZglad_179;
extern tyProc__CGFSM2Hc7U0HyNmEEh3xng glClear__OOZfauZsrcZfauZglZglad_81;
extern NIM_BOOL glInitialized__OOZfauZsrcZfauZglZglproc_8;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3443);
	return result;
}
static N_INLINE(void, glDeleteFramebuffer__OOZfauZsrcZfauZglZglproc_248)(NU32 framebuffer) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!(framebuffer == ((NU32) (lastFramebuffer__OOZfauZsrcZfauZglZglproc_13)))) goto LA3_;
		lastFramebuffer__OOZfauZsrcZfauZglZglproc_13 = ((NI) -1);
	}
	LA3_: ;
	glDeleteFramebuffer__OOZfauZsrcZfauZglZglad_1774(framebuffer);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, glDeleteRenderbuffer__OOZfauZsrcZfauZglZglproc_256)(NU32 renderbuffer) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	glDeleteRenderbuffer__OOZfauZsrcZfauZglZglad_1777(renderbuffer);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ, vec2i__OOZfauZsrcZfauZfmath_428)(NI x, NI y) {
	tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ result;
	NI colontmpD_;
	NI colontmpD__2;
	nimZeroMem((void*)(&result), sizeof(tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ));
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	nimZeroMem((void*)(&result), sizeof(tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ));
	colontmpD_ = x;
	result.x = colontmpD_;
	colontmpD__2 = y;
	result.y = colontmpD__2;
	return result;
}
static N_INLINE(NU32, glGenFramebuffer__OOZfauZsrcZfauZglZglproc_359)(void) {
	NU32 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NU32)0;
	result = glGenFramebuffer__OOZfauZsrcZfauZglZglad_1786();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, glBindFramebuffer__OOZfauZsrcZfauZglZglproc_109)(NU32 target, NU32 framebuffer) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!(lastFramebuffer__OOZfauZsrcZfauZglZglproc_13 == ((NI) (framebuffer)))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	glBindFramebuffer__OOZfauZsrcZfauZglZglad_32(target, framebuffer);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	lastFramebuffer__OOZfauZsrcZfauZglZglproc_13 = ((NI) (framebuffer));
	}BeforeRet_: ;
}
static N_INLINE(NU32, glGenRenderbuffer__OOZfauZsrcZfauZglZglproc_363)(void) {
	NU32 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NU32)0;
	result = glGenRenderbuffer__OOZfauZsrcZfauZglZglad_1789();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, glBindRenderbuffer__OOZfauZsrcZfauZglZglproc_114)(NU32 target, NU32 renderbuffer) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	glBindRenderbuffer__OOZfauZsrcZfauZglZglad_36(target, renderbuffer);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, glRenderbufferStorage__OOZfauZsrcZfauZglZglproc_522)(NU32 target, NU32 internalformat, NI32 width, NI32 height) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	glRenderbufferStorage__OOZfauZsrcZfauZglZglad_439(target, internalformat, width, height);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, glBindTexture__OOZfauZsrcZfauZglZglproc_119)(NU32 target, NU32 texture) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI index;
		if (!(target == ((NU32) 3553))) goto LA3_;
		index = (NI)(((NI) (lastActiveTextureUnit__OOZfauZsrcZfauZglZglproc_9)) - ((NI) 33984));
		{
			NIM_BOOL T7_;
			T7_ = (NIM_BOOL)0;
			T7_ = (((NI) 0) <= index);
			if (!(T7_)) goto LA8_;
			T7_ = (index < ((NI) 32));
			LA8_: ;
			if (!T7_) goto LA9_;
			{
				if (!(lastBoundTextures__OOZfauZsrcZfauZglZglproc_10[(index)- 0] == ((NI) (texture)))) goto LA13_;
				goto BeforeRet_;
			}
			LA13_: ;
			lastBoundTextures__OOZfauZsrcZfauZglZglproc_10[(index)- 0] = ((NI) (texture));
		}
		LA9_: ;
	}
	LA3_: ;
	glBindTexture__OOZfauZsrcZfauZglZglad_40(target, texture);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, glTexImage2D__OOZfauZsrcZfauZglZglproc_581)(NU32 target, NI32 level, NI32 internalformat, NI32 width, NI32 height, NI32 border, NU32 format, NU32 type_0, void* pixels) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	glTexImage2D__OOZfauZsrcZfauZglZglad_502(target, level, internalformat, width, height, border, format, type_0, pixels);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, glFramebufferRenderbuffer__OOZfauZsrcZfauZglZglproc_332)(NU32 target, NU32 attachment, NU32 renderbuffertarget, NU32 renderbuffer) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	glFramebufferRenderbuffer__OOZfauZsrcZfauZglZglad_220(target, attachment, renderbuffertarget, renderbuffer);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, glFramebufferTexture2D__OOZfauZsrcZfauZglZglproc_339)(NU32 target, NU32 attachment, NU32 textarget, NU32 texture, NI32 level) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	glFramebufferTexture2D__OOZfauZsrcZfauZglZglad_227(target, attachment, textarget, texture, level);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NU32, glCheckFramebufferStatus__OOZfauZsrcZfauZglZglproc_174)(NU32 target) {
	NU32 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NU32)0;
	result = glCheckFramebufferStatus__OOZfauZsrcZfauZglZglad_78(target);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1709)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {
	{
		if (!(((NI) 0) < src.len)) goto LA3_;
		copyMem__system_1709(((void*) ((&(*(*dest).p).data[(*dest).len]))), ((void*) ((&(*src.p).data[((NI) 0)]))), ((NI) ((NI)(src.len + ((NI) 1)))));
		(*dest).len += src.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, resize__OOZfauZsrcZfauZframebuffer_22)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* buffer, tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ size) {
	NI width;
	NI height;
	tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ T19_;
	NU32 T20_;
	tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ* T21_;
	NU32 status;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!(*buffer).isDefault) goto LA3_;
		(*buffer).size = size;
		goto BeforeRet_;
	}
	LA3_: ;
	width = ((size.x >= ((NI) 2)) ? size.x : ((NI) 2));
	height = ((size.y >= ((NI) 2)) ? size.y : ((NI) 2));
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (width == (*buffer).size.x);
		if (!(T7_)) goto LA8_;
		T7_ = (height == (*buffer).size.y);
		LA8_: ;
		if (!T7_) goto LA9_;
		goto BeforeRet_;
	}
	LA9_: ;
	{
		if (!!(((*buffer).handle == ((NU32) 0)))) goto LA13_;
		glDeleteFramebuffer__OOZfauZsrcZfauZglZglproc_248((*buffer).handle);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*buffer).handle = ((NU32) 0);
	}
	LA13_: ;
	{
		if (!!(((*buffer).depthHandle == ((NU32) 0)))) goto LA17_;
		glDeleteRenderbuffer__OOZfauZsrcZfauZglZglproc_256((*buffer).depthHandle);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*buffer).depthHandle = ((NU32) 0);
	}
	LA17_: ;
	nimZeroMem((void*)(&T19_), sizeof(tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ));
	T19_ = vec2i__OOZfauZsrcZfauZfmath_428(width, height);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*buffer).size = T19_;
	T20_ = (NU32)0;
	T20_ = glGenFramebuffer__OOZfauZsrcZfauZglZglproc_359();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*buffer).handle = T20_;
	T21_ = NIM_NIL;
	T21_ = newTexture__OOZfauZsrcZfauZtexture_102(size, ((tyEnum_TextureFilter__zerQ3LMmc801hL4AG54gqg) 0), ((tyEnum_TextureWrap__u5t9aRlFqNYWEA2nuqy9c2aw) 0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqsink___OOZfauZsrcZfauZtexture_119(&(*buffer).texture, T21_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	glBindFramebuffer__OOZfauZsrcZfauZglZglproc_109(((NU32) 36160), (*buffer).handle);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NU32 T26_;
		if (!(*buffer).hasDepth) goto LA24_;
		T26_ = (NU32)0;
		T26_ = glGenRenderbuffer__OOZfauZsrcZfauZglZglproc_363();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*buffer).depthHandle = T26_;
		glBindRenderbuffer__OOZfauZsrcZfauZglZglproc_114(((NU32) 36161), (*buffer).depthHandle);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		glRenderbufferStorage__OOZfauZsrcZfauZglZglproc_522(((NU32) 36161), ((NU32) 33189), ((NI32) (width)), ((NI32) (height)));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA24_: ;
	glBindTexture__OOZfauZsrcZfauZglZglproc_119(((NU32) 3553), (*(*buffer).texture).handle);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	glTexImage2D__OOZfauZsrcZfauZglZglproc_581(((NU32) 3553), ((NI32) 0), ((NI32) 6408), ((NI32) (width)), ((NI32) (height)), ((NI32) 0), ((NU32) 6408), ((NU32) 5121), NIM_NIL);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!(*buffer).hasDepth) goto LA29_;
		glFramebufferRenderbuffer__OOZfauZsrcZfauZglZglproc_332(((NU32) 36160), ((NU32) 36096), ((NU32) 36161), (*buffer).depthHandle);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA29_: ;
	glFramebufferTexture2D__OOZfauZsrcZfauZglZglproc_339(((NU32) 36160), ((NU32) 36064), ((NU32) 3553), (*(*buffer).texture).handle, ((NI32) 0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	status = glCheckFramebufferStatus__OOZfauZsrcZfauZglZglproc_174(((NU32) 36160));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NimStringV2 message;
		NimStringV2 T36_;
		tyObject_GlError__g39bwzfxwc30p3p9cWy1gD9bw* T43_;
		NimStringV2 blitTmp;
		if (!!((status == ((NU32) 36053)))) goto LA33_;
		message.len = 0; message.p = NIM_NIL;
		T36_.len = 0; T36_.p = NIM_NIL;
		switch (status) {
		case ((NU32) 36054):
		{
			message = TM__s0HsaSQx9csvhu0SetRa6Bg_3;
		}
		break;
		case ((NU32) 36057):
		{
			message = TM__s0HsaSQx9csvhu0SetRa6Bg_5;
		}
		break;
		case ((NU32) 36055):
		{
			message = TM__s0HsaSQx9csvhu0SetRa6Bg_7;
		}
		break;
		case ((NU32) 36061):
		{
			message = TM__s0HsaSQx9csvhu0SetRa6Bg_9;
		}
		break;
		default:
		{
			NimStringV2 colontmpD_;
			NimStringV2 T42_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			T42_.len = 0; T42_.p = NIM_NIL;
			colontmpD_ = dollar___systemZdollars_9(((NU64) (status)));
			if (NIM_UNLIKELY(*nimErr_)) goto LA35_;
			T42_ = rawNewString(colontmpD_.len + 24);
appendString((&T42_), TM__s0HsaSQx9csvhu0SetRa6Bg_11);
appendString((&T42_), colontmpD_);
			message = T42_;
			eqdestroy___system_2592((&colontmpD_));
		}
		break;
		}
		T43_ = NIM_NIL;
		T43_ = (tyObject_GlError__g39bwzfxwc30p3p9cWy1gD9bw*) nimNewObj(sizeof(tyObject_GlError__g39bwzfxwc30p3p9cWy1gD9bw), NIM_ALIGNOF(tyObject_GlError__g39bwzfxwc30p3p9cWy1gD9bw));
		(*T43_).Sup.Sup.Sup.m_type = (&NTIv2__g39bwzfxwc30p3p9cWy1gD9bw_);
		(*T43_).Sup.Sup.name = "GlError";
		blitTmp = message;
		message.len = 0; message.p = NIM_NIL;
		(*T43_).Sup.Sup.message = blitTmp;
		(*T43_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T43_, "GlError", "resize", "framebuffer.nim", 78);
		goto LA35_;
		{
			LA35_:;
		}
		{
			eqdestroy___system_2592((&message));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA33_: ;
	}BeforeRet_: ;
}
static N_INLINE(void, glViewport__OOZfauZsrcZfauZglZglproc_813)(NI32 x, NI32 y, NI32 width, NI32 height) {
	tyTuple__8E3LsULUktH7z5GXZa5GHg _;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NIM_BOOL T5_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T5_ = (NIM_BOOL)0;
		T5_ = (((NI) (x)) == lastViewX__OOZfauZsrcZfauZglZglproc_14);
		if (!(T5_)) goto LA6_;
		T5_ = (((NI) (y)) == lastViewY__OOZfauZsrcZfauZglZglproc_15);
		LA6_: ;
		T4_ = T5_;
		if (!(T4_)) goto LA7_;
		T4_ = (((NI) (width)) == lastViewW__OOZfauZsrcZfauZglZglproc_16);
		LA7_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA8_;
		T3_ = (((NI) (height)) == lastViewH__OOZfauZsrcZfauZglZglproc_17);
		LA8_: ;
		if (!T3_) goto LA9_;
		goto BeforeRet_;
	}
	LA9_: ;
	glViewport__OOZfauZsrcZfauZglZglad_693(x, y, width, height);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	_.Field0 = x;
	_.Field1 = y;
	_.Field2 = width;
	_.Field3 = height;
	lastViewX__OOZfauZsrcZfauZglZglproc_14 = ((NI) (_.Field0));
	lastViewY__OOZfauZsrcZfauZglZglproc_15 = ((NI) (_.Field1));
	lastViewW__OOZfauZsrcZfauZglZglproc_16 = ((NI) (_.Field2));
	lastViewH__OOZfauZsrcZfauZglZglproc_17 = ((NI) (_.Field3));
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, use__OOZfauZsrcZfauZframebuffer_85)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* buffer) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	glBindFramebuffer__OOZfauZsrcZfauZglZglproc_109(((NU32) 36160), (*buffer).handle);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	glViewport__OOZfauZsrcZfauZglZglproc_813(((NI32) 0), ((NI32) 0), ((NI32) ((*buffer).size.x)), ((NI32) ((*buffer).size.y)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, glClearColor__OOZfauZsrcZfauZglZglproc_183)(NF32 red, NF32 green, NF32 blue, NF32 alpha) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	glClearColor__OOZfauZsrcZfauZglZglad_87(red, green, blue, alpha);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NF32, r__OOZfauZsrcZfauZcolor_12)(tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg col) {
	NF32 result;
	result = (NF32)0;
	result = ((NF32)(((NF32) (col.rv))) / (NF32)(255.0f));
	return result;
}
static N_INLINE(NF32, g__OOZfauZsrcZfauZcolor_15)(tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg col) {
	NF32 result;
	result = (NF32)0;
	result = ((NF32)(((NF32) (col.gv))) / (NF32)(255.0f));
	return result;
}
static N_INLINE(NF32, b__OOZfauZsrcZfauZcolor_18)(tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg col) {
	NF32 result;
	result = (NF32)0;
	result = ((NF32)(((NF32) (col.bv))) / (NF32)(255.0f));
	return result;
}
static N_INLINE(NF32, a__OOZfauZsrcZfauZcolor_21)(tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg col) {
	NF32 result;
	result = (NF32)0;
	result = ((NF32)(((NF32) (col.av))) / (NF32)(255.0f));
	return result;
}
static N_INLINE(void, glDepthMask__OOZfauZsrcZfauZglZglproc_277)(NIM_BOOL flag) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!(lastDepthMask__OOZfauZsrcZfauZglZglproc_22 == flag)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	lastDepthMask__OOZfauZsrcZfauZglZglproc_22 = flag;
	glDepthMask__OOZfauZsrcZfauZglZglad_179(flag);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, glClear__OOZfauZsrcZfauZglZglproc_179)(NU32 mask) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	glClear__OOZfauZsrcZfauZglZglad_81(mask);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, clear__OOZfauZsrcZfauZframebuffer_87)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* buffer, tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg color) {
	NF32 T1_;
	NF32 T2_;
	NF32 T3_;
	NF32 T4_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	use__OOZfauZsrcZfauZframebuffer_85(buffer);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T1_ = (NF32)0;
	T1_ = r__OOZfauZsrcZfauZcolor_12(color);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NF32)0;
	T2_ = g__OOZfauZsrcZfauZcolor_15(color);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T3_ = (NF32)0;
	T3_ = b__OOZfauZsrcZfauZcolor_18(color);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T4_ = (NF32)0;
	T4_ = a__OOZfauZsrcZfauZcolor_21(color);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	glClearColor__OOZfauZsrcZfauZglZglproc_183(T1_, T2_, T3_, T4_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!(*buffer).hasDepth) goto LA7_;
		glDepthMask__OOZfauZsrcZfauZglZglproc_277(NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		glClear__OOZfauZsrcZfauZglZglproc_179(((NU32) 16640));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA5_;
	LA7_: ;
	{
		glClear__OOZfauZsrcZfauZglZglproc_179(((NU32) 16384));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA5_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZfauZsrcZfauZframebuffer_14)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* buffer) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*buffer).handle == ((NU32) 0)));
		if (!(T3_)) goto LA4_;
		T3_ = glInitialized__OOZfauZsrcZfauZglZglproc_8;
		LA4_: ;
		if (!T3_) goto LA5_;
		glDeleteFramebuffer__OOZfauZsrcZfauZglZglproc_248((*buffer).handle);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*buffer).handle = ((NU32) 0);
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = !(((*buffer).depthHandle == ((NU32) 0)));
		if (!(T9_)) goto LA10_;
		T9_ = glInitialized__OOZfauZsrcZfauZglZglproc_8;
		LA10_: ;
		if (!T9_) goto LA11_;
		glDeleteRenderbuffer__OOZfauZsrcZfauZglZglproc_256((*buffer).depthHandle);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*buffer).depthHandle = ((NU32) 0);
	}
	LA11_: ;
	}BeforeRet_: ;
}
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(void, nimIncRef)(void* p) {
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_716(((NI) (ptrdiff_t) (p)), ((NI) 8));
	(*((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_))).rc += ((NI) 8);
}
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_716(((NI) (ptrdiff_t) (p)), ((NI) 8));
		cell = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_));
		{
			if (!((NI)((*cell).rc & ((NI) -8)) == ((NI) 0))) goto LA8_;
			result = NIM_TRUE;
		}
		goto LA6_;
		LA8_: ;
		{
			(*cell).rc -= ((NI) 8);
		}
		LA6_: ;
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___OOZfauZsrcZfauZframebuffer_73)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ** dest, tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!src) goto LA3_;
		nimIncRef(src);
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLast((*dest));
		if (!T7_) goto LA8_;
		eqdestroy___OOZfauZsrcZfauZframebuffer_14((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI) 8));
	}
	LA8_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___OOZfauZsrcZfauZframebuffer_76)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ** dest, tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___OOZfauZsrcZfauZframebuffer_14((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI) 8));
	}
	LA4_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
static N_INLINE(NI32, glGetIntegerv__OOZfauZsrcZfauZglZglproc_404)(NU32 pname) {
	NI32 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI32)0;
	result = glGetIntegerv__OOZfauZsrcZfauZglZglad_1830(pname);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ*, newDefaultFramebuffer__OOZfauZsrcZfauZframebuffer_82)(NIM_BOOL windowDepth) {
	tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* result;
	NU32 colontmpD_;
	NIM_BOOL colontmpD__2;
	tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* T1_;
	NI32 T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	colontmpD_ = (NU32)0;
	colontmpD__2 = (NIM_BOOL)0;
	T1_ = NIM_NIL;
	T1_ = (tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ*) nimNewObj(sizeof(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ), NIM_ALIGNOF(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ));
	T2_ = (NI32)0;
	T2_ = glGetIntegerv__OOZfauZsrcZfauZglZglproc_404(((NU32) 36006));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	colontmpD_ = ((NU32) (T2_));
	(*T1_).handle = colontmpD_;
	(*T1_).isDefault = NIM_TRUE;
	colontmpD__2 = windowDepth;
	(*T1_).hasDepth = colontmpD__2;
	result = T1_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZfauZsrcZfauZframebuffer_70)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ** dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___OOZfauZsrcZfauZframebuffer_14((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI) 8));
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ*, newFramebuffer__OOZfauZsrcZfauZframebuffer_59)(tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ size, NIM_BOOL depth) {
	tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* result;
	NIM_BOOL colontmpD_;
	tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	colontmpD_ = (NIM_BOOL)0;
	T1_ = NIM_NIL;
	T1_ = (tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ*) nimNewObj(sizeof(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ), NIM_ALIGNOF(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ));
	colontmpD_ = depth;
	(*T1_).hasDepth = colontmpD_;
	result = T1_;
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = !((size.x == ((NI) 2)));
		if (T4_) goto LA5_;
		T4_ = !((size.y == ((NI) 2)));
		LA5_: ;
		if (!T4_) goto LA6_;
		resize__OOZfauZsrcZfauZframebuffer_22(result, size);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA6_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ, vec2i__OOZfauZsrcZfauZfmath_449)(tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w v) {
	tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ));
	result = vec2i__OOZfauZsrcZfauZfmath_428(((NI) (v.x)), ((NI) (v.y)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, resize__OOZfauZsrcZfauZframebuffer_54)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* buffer, tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w size) {
	tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = vec2i__OOZfauZsrcZfauZfmath_449(size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	resize__OOZfauZsrcZfauZframebuffer_22(buffer, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
