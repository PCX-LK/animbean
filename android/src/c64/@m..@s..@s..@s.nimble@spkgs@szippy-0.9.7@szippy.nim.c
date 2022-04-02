/* Generated by Nim Compiler v1.6.4 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NU8 tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw;
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
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ {
  tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw Sup;
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

      N_LIB_PRIVATE N_NIMCALL(NimStringV2, uncompress__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55Zzippy_93)(void* src, NI len, tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw dataFormat);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, uncompressGzip__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZgzip_5)(NimStringV2* dst, NU8* src, NI len, NIM_BOOL trustSize);
N_LIB_PRIVATE N_NIMCALL(void, inflate__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinflate_509)(NimStringV2* dst, NU8* src, NI len, NI pos);
static N_INLINE(NU32, adler32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_812)(NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NU32, adler32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_503)(void* src, NI len);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2312)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, deflate__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZdeflate_663)(NimStringV2* dst, NU8* src, NI len, NI level);
N_LIB_PRIVATE N_NIMCALL(NU32, crc32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZcrc_77)(void* src, NI len);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
extern TNimTypeV2 NTIv2__j2RCbV49bRvsx6N3fCdjSIQ_;
static const struct {
  NI cap; NIM_CHAR data[39+1];
} TM__UqbkX1qqvV1mfEv19avhonw_2 = { 39 | NIM_STRLIT_FLAG, "Unable to detect compressed data format" };
static const NimStringV2 TM__UqbkX1qqvV1mfEv19avhonw_3 = {39, (NimStrPayload*)&TM__UqbkX1qqvV1mfEv19avhonw_2};
static const struct {
  NI cap; NIM_CHAR data[36+1];
} TM__UqbkX1qqvV1mfEv19avhonw_4 = { 36 | NIM_STRLIT_FLAG, "Invalid buffer, unable to uncompress" };
static const NimStringV2 TM__UqbkX1qqvV1mfEv19avhonw_5 = {36, (NimStrPayload*)&TM__UqbkX1qqvV1mfEv19avhonw_4};
static const struct {
  NI cap; NIM_CHAR data[30+1];
} TM__UqbkX1qqvV1mfEv19avhonw_6 = { 30 | NIM_STRLIT_FLAG, "Unsupported compression method" };
static const NimStringV2 TM__UqbkX1qqvV1mfEv19avhonw_7 = {30, (NimStrPayload*)&TM__UqbkX1qqvV1mfEv19avhonw_6};
static const struct {
  NI cap; NIM_CHAR data[24+1];
} TM__UqbkX1qqvV1mfEv19avhonw_8 = { 24 | NIM_STRLIT_FLAG, "Invalid compression info" };
static const NimStringV2 TM__UqbkX1qqvV1mfEv19avhonw_9 = {24, (NimStrPayload*)&TM__UqbkX1qqvV1mfEv19avhonw_8};
static const struct {
  NI cap; NIM_CHAR data[14+1];
} TM__UqbkX1qqvV1mfEv19avhonw_10 = { 14 | NIM_STRLIT_FLAG, "Invalid header" };
static const NimStringV2 TM__UqbkX1qqvV1mfEv19avhonw_11 = {14, (NimStrPayload*)&TM__UqbkX1qqvV1mfEv19avhonw_10};
static const struct {
  NI cap; NIM_CHAR data[38+1];
} TM__UqbkX1qqvV1mfEv19avhonw_12 = { 38 | NIM_STRLIT_FLAG, "Preset dictionary is not yet supported" };
static const NimStringV2 TM__UqbkX1qqvV1mfEv19avhonw_13 = {38, (NimStrPayload*)&TM__UqbkX1qqvV1mfEv19avhonw_12};
static const struct {
  NI cap; NIM_CHAR data[28+1];
} TM__UqbkX1qqvV1mfEv19avhonw_14 = { 28 | NIM_STRLIT_FLAG, "Checksum verification failed" };
static const NimStringV2 TM__UqbkX1qqvV1mfEv19avhonw_15 = {28, (NimStrPayload*)&TM__UqbkX1qqvV1mfEv19avhonw_14};
static const struct {
  NI cap; NIM_CHAR data[28+1];
} TM__UqbkX1qqvV1mfEv19avhonw_16 = { 28 | NIM_STRLIT_FLAG, "Invalid data format dfDetect" };
static const NimStringV2 TM__UqbkX1qqvV1mfEv19avhonw_17 = {28, (NimStrPayload*)&TM__UqbkX1qqvV1mfEv19avhonw_16};
extern NIM_BOOL nimInErrorMode__system_3443;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3443);
	return result;
}
static N_INLINE(NU32, adler32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_812)(NimStringV2 src) {
	NU32 result;
	NU32 colontmpD_;
	NU32 colontmpD__2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NU32)0;
	colontmpD_ = (NU32)0;
	colontmpD__2 = (NU32)0;
	{
		if (!(((NI) 0) < src.len)) goto LA3_;
		colontmpD_ = adler32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_503(((void*) ((&src.p->data[((NI) 0)]))), src.len);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = adler32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_503(NIM_NIL, ((NI) 0));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = colontmpD__2;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, uncompress__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55Zzippy_93)(void* src, NI len, tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw dataFormat) {
	NimStringV2 result;
	NU8* src_2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	src_2 = ((NU8*) (src));
	switch (dataFormat) {
	case ((tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw) 0):
	{
		tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ* T24_;
		{
			NIM_BOOL T4_;
			NIM_BOOL T5_;
			NIM_BOOL T6_;
			NIM_BOOL T7_;
			T4_ = (NIM_BOOL)0;
			T5_ = (NIM_BOOL)0;
			T6_ = (NIM_BOOL)0;
			T7_ = (NIM_BOOL)0;
			T7_ = (((NI) 18) < len);
			if (!(T7_)) goto LA8_;
			T7_ = (src_2[((NI) 0)] == ((NU8) 31));
			LA8_: ;
			T6_ = T7_;
			if (!(T6_)) goto LA9_;
			T6_ = (src_2[((NI) 1)] == ((NU8) 139));
			LA9_: ;
			T5_ = T6_;
			if (!(T5_)) goto LA10_;
			T5_ = (src_2[((NI) 2)] == ((NU8) 8));
			LA10_: ;
			T4_ = T5_;
			if (!(T4_)) goto LA11_;
			T4_ = ((NU8)(src_2[((NI) 3)] & ((NU8) 224)) == ((NU8) 0));
			LA11_: ;
			if (!T4_) goto LA12_;
			result = uncompress__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55Zzippy_93(((void*) (src_2)), len, ((tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw) 2));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			goto BeforeRet_;
		}
		LA12_: ;
		{
			NIM_BOOL T16_;
			NIM_BOOL T17_;
			NIM_BOOL T18_;
			T16_ = (NIM_BOOL)0;
			T17_ = (NIM_BOOL)0;
			T18_ = (NIM_BOOL)0;
			T18_ = (((NI) 6) < len);
			if (!(T18_)) goto LA19_;
			T18_ = ((NU8)(src_2[((NI) 0)] & ((NU8) 15)) == ((NU8) 8));
			LA19_: ;
			T17_ = T18_;
			if (!(T17_)) goto LA20_;
			T17_ = ((NU8)((NU8)((NU8)(src_2[((NI) 0)]) >> (NU64)(((NI) 4)))) <= (NU8)(((NU8) 7)));
			LA20_: ;
			T16_ = T17_;
			if (!(T16_)) goto LA21_;
			T16_ = ((NU16)((NU16)((NU16)((NU16)((NU16)((NU16)(((NU16) (src_2[((NI) 0)]))) * (NU16)(((NU16) 256)))) + (NU16)(((NU16) (src_2[((NI) 1)]))))) % (NU16)(((NU16) 31))) == ((NU16) 0));
			LA21_: ;
			if (!T16_) goto LA22_;
			result = uncompress__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55Zzippy_93(((void*) (src_2)), len, ((tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw) 1));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			goto BeforeRet_;
		}
		LA22_: ;
		T24_ = NIM_NIL;
		T24_ = (tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ*) nimNewObj(sizeof(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ), NIM_ALIGNOF(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ));
		(*T24_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__j2RCbV49bRvsx6N3fCdjSIQ_);
		(*T24_).Sup.Sup.Sup.name = "ZippyError";
		(*T24_).Sup.Sup.Sup.message = TM__UqbkX1qqvV1mfEv19avhonw_3;
		(*T24_).Sup.Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T24_, "ZippyError", "uncompress", "zippy.nim", 108);
		goto BeforeRet_;
	}
	break;
	case ((tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw) 2):
	{
		uncompressGzip__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZgzip_5((&result), src_2, len, NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw) 1):
	{
		NU8 cmf;
		NU8 flg;
		NU8 cm;
		NU8 cinfo;
		NU32 checksum;
		{
			tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ* T31_;
			if (!(len < ((NI) 6))) goto LA29_;
			T31_ = NIM_NIL;
			T31_ = (tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ*) nimNewObj(sizeof(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ), NIM_ALIGNOF(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ));
			(*T31_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__j2RCbV49bRvsx6N3fCdjSIQ_);
			(*T31_).Sup.Sup.Sup.name = "ZippyError";
			(*T31_).Sup.Sup.Sup.message = TM__UqbkX1qqvV1mfEv19avhonw_5;
			(*T31_).Sup.Sup.Sup.parent = ((Exception*) NIM_NIL);
			raiseExceptionEx((Exception*)T31_, "ZippyError", "uncompress", "zippy.nim", 115);
			goto BeforeRet_;
		}
		LA29_: ;
		cmf = src_2[((NI) 0)];
		flg = src_2[((NI) 1)];
		cm = (NU8)(cmf & ((NU8) 15));
		cinfo = (NU8)((NU8)(cmf) >> (NU64)(((NI) 4)));
		{
			tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ* T36_;
			if (!!((cm == ((NU8) 8)))) goto LA34_;
			T36_ = NIM_NIL;
			T36_ = (tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ*) nimNewObj(sizeof(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ), NIM_ALIGNOF(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ));
			(*T36_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__j2RCbV49bRvsx6N3fCdjSIQ_);
			(*T36_).Sup.Sup.Sup.name = "ZippyError";
			(*T36_).Sup.Sup.Sup.message = TM__UqbkX1qqvV1mfEv19avhonw_7;
			(*T36_).Sup.Sup.Sup.parent = ((Exception*) NIM_NIL);
			raiseExceptionEx((Exception*)T36_, "ZippyError", "uncompress", "zippy.nim", 124);
			goto BeforeRet_;
		}
		LA34_: ;
		{
			tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ* T41_;
			if (!((NU8)(((NU8) 7)) < (NU8)(cinfo))) goto LA39_;
			T41_ = NIM_NIL;
			T41_ = (tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ*) nimNewObj(sizeof(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ), NIM_ALIGNOF(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ));
			(*T41_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__j2RCbV49bRvsx6N3fCdjSIQ_);
			(*T41_).Sup.Sup.Sup.name = "ZippyError";
			(*T41_).Sup.Sup.Sup.message = TM__UqbkX1qqvV1mfEv19avhonw_9;
			(*T41_).Sup.Sup.Sup.parent = ((Exception*) NIM_NIL);
			raiseExceptionEx((Exception*)T41_, "ZippyError", "uncompress", "zippy.nim", 127);
			goto BeforeRet_;
		}
		LA39_: ;
		{
			tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ* T46_;
			if (!!(((NU16)((NU16)((NU16)((NU16)((NU16)((NU16)(((NU16) (cmf))) * (NU16)(((NU16) 256)))) + (NU16)(((NU16) (flg))))) % (NU16)(((NU16) 31))) == ((NU16) 0)))) goto LA44_;
			T46_ = NIM_NIL;
			T46_ = (tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ*) nimNewObj(sizeof(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ), NIM_ALIGNOF(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ));
			(*T46_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__j2RCbV49bRvsx6N3fCdjSIQ_);
			(*T46_).Sup.Sup.Sup.name = "ZippyError";
			(*T46_).Sup.Sup.Sup.message = TM__UqbkX1qqvV1mfEv19avhonw_11;
			(*T46_).Sup.Sup.Sup.parent = ((Exception*) NIM_NIL);
			raiseExceptionEx((Exception*)T46_, "ZippyError", "uncompress", "zippy.nim", 130);
			goto BeforeRet_;
		}
		LA44_: ;
		{
			tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ* T51_;
			if (!!(((NU8)(flg & ((NU8) 32)) == ((NU8) 0)))) goto LA49_;
			T51_ = NIM_NIL;
			T51_ = (tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ*) nimNewObj(sizeof(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ), NIM_ALIGNOF(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ));
			(*T51_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__j2RCbV49bRvsx6N3fCdjSIQ_);
			(*T51_).Sup.Sup.Sup.name = "ZippyError";
			(*T51_).Sup.Sup.Sup.message = TM__UqbkX1qqvV1mfEv19avhonw_13;
			(*T51_).Sup.Sup.Sup.parent = ((Exception*) NIM_NIL);
			raiseExceptionEx((Exception*)T51_, "ZippyError", "uncompress", "zippy.nim", 133);
			goto BeforeRet_;
		}
		LA49_: ;
		inflate__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinflate_509((&result), src_2, len, ((NI) 2));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		checksum = (NU32)((NU32)((NU32)((NU32)((NU64)(((NU32) (src_2[(NI)(len - ((NI) 4))]))) << (NU64)(((NI) 24))) | (NU32)((NU64)(((NU32) (src_2[(NI)(len - ((NI) 3))]))) << (NU64)(((NI) 16)))) | (NU32)((NU64)(((NU32) (src_2[(NI)(len - ((NI) 2))]))) << (NU64)(((NI) 8)))) | ((NU32) (src_2[(NI)(len - ((NI) 1))])));
		{
			NU32 T54_;
			tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ* T57_;
			T54_ = (NU32)0;
			T54_ = adler32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_812(result);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!!((checksum == T54_))) goto LA55_;
			T57_ = NIM_NIL;
			T57_ = (tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ*) nimNewObj(sizeof(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ), NIM_ALIGNOF(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ));
			(*T57_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__j2RCbV49bRvsx6N3fCdjSIQ_);
			(*T57_).Sup.Sup.Sup.name = "ZippyError";
			(*T57_).Sup.Sup.Sup.message = TM__UqbkX1qqvV1mfEv19avhonw_15;
			(*T57_).Sup.Sup.Sup.parent = ((Exception*) NIM_NIL);
			raiseExceptionEx((Exception*)T57_, "ZippyError", "uncompress", "zippy.nim", 145);
			goto BeforeRet_;
		}
		LA55_: ;
	}
	break;
	case ((tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw) 3):
	{
		inflate__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinflate_509((&result), src_2, len, ((NI) 0));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s).p == ((NimStrPayload*) NIM_NIL)));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s).p).cap & ((NI) IL64(4611686018427387904))) == ((NI) IL64(4611686018427387904)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__system_2312(s);
	}
	LA5_: ;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI) 1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI) 1))] = 0;
	(*s).len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, compress__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55Zzippy_7)(void* src, NI len, NI level, tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw dataFormat) {
	NimStringV2 result;
	NU8* src_2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	src_2 = ((NU8*) (src));
	switch (dataFormat) {
	case ((tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw) 2):
	{
		NU32 checksum;
		NI isize;
		setLengthStrV2((&result), ((NI) 10));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI) 0)] = 31;
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI) 1)] = 139;
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI) 2)] = 8;
		deflate__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZdeflate_663((&result), src_2, len, level);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		checksum = crc32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZcrc_77(((void*) (src_2)), len);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		isize = len;
		nimAddCharV1((&result), ((NIM_CHAR) ((NU32)((NU32)((NU32)(checksum) >> (NU64)(((NI) 0))) & ((NU32) 255)))));
		nimAddCharV1((&result), ((NIM_CHAR) ((NU32)((NU32)((NU32)(checksum) >> (NU64)(((NI) 8))) & ((NU32) 255)))));
		nimAddCharV1((&result), ((NIM_CHAR) ((NU32)((NU32)((NU32)(checksum) >> (NU64)(((NI) 16))) & ((NU32) 255)))));
		nimAddCharV1((&result), ((NIM_CHAR) ((NU32)((NU32)((NU32)(checksum) >> (NU64)(((NI) 24))) & ((NU32) 255)))));
		nimAddCharV1((&result), ((NIM_CHAR) ((NI)((NI)((NI64)(isize) >> (NU64)(((NI) 0))) & ((NI) 255)))));
		nimAddCharV1((&result), ((NIM_CHAR) ((NI)((NI)((NI64)(isize) >> (NU64)(((NI) 8))) & ((NI) 255)))));
		nimAddCharV1((&result), ((NIM_CHAR) ((NI)((NI)((NI64)(isize) >> (NU64)(((NI) 16))) & ((NI) 255)))));
		nimAddCharV1((&result), ((NIM_CHAR) ((NI)((NI)((NI64)(isize) >> (NU64)(((NI) 24))) & ((NI) 255)))));
	}
	break;
	case ((tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw) 1):
	{
		NU32 checksum_2;
		setLengthStrV2((&result), ((NI) 2));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI) 0)] = 120;
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI) 1)] = 1;
		deflate__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZdeflate_663((&result), src_2, len, level);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		checksum_2 = adler32__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZinternal_503(((void*) (src_2)), len);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimAddCharV1((&result), ((NIM_CHAR) ((NU32)((NU32)((NU32)(checksum_2) >> (NU64)(((NI) 24))) & ((NU32) 255)))));
		nimAddCharV1((&result), ((NIM_CHAR) ((NU32)((NU32)((NU32)(checksum_2) >> (NU64)(((NI) 16))) & ((NU32) 255)))));
		nimAddCharV1((&result), ((NIM_CHAR) ((NU32)((NU32)((NU32)(checksum_2) >> (NU64)(((NI) 8))) & ((NU32) 255)))));
		nimAddCharV1((&result), ((NIM_CHAR) ((NU32)((NU32)((NU32)(checksum_2) >> (NU64)(((NI) 0))) & ((NU32) 255)))));
	}
	break;
	case ((tyEnum_CompressedDataFormat__hW3Jjtknic3hfPFuiaDRPw) 3):
	{
		deflate__OOZOOZOOZOnimbleZpkgsZzippy4548O57O55ZzippyZdeflate_663((&result), src_2, len, level);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	default:
	{
		tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ* T5_;
		T5_ = NIM_NIL;
		T5_ = (tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ*) nimNewObj(sizeof(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ), NIM_ALIGNOF(tyObject_ZippyError__j2RCbV49bRvsx6N3fCdjSIQ));
		(*T5_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__j2RCbV49bRvsx6N3fCdjSIQ_);
		(*T5_).Sup.Sup.Sup.name = "ZippyError";
		(*T5_).Sup.Sup.Sup.message = TM__UqbkX1qqvV1mfEv19avhonw_17;
		(*T5_).Sup.Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T5_, "ZippyError", "compress", "zippy.nim", 61);
		goto BeforeRet_;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
