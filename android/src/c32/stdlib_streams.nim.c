/* Generated by Nim Compiler v1.6.4 */
#define NIM_INTBITS 32
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
typedef struct tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
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
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
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
typedef N_NIMCALL_PTR(void, tyProc__JQrsH08b4uPTH9cyFPlVOZg) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__9bmhFrLahRsL2hltfRDVtlQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(void, tyProc__3svSoGIUJIsHkaBL7q4DAQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc__xflqkf2D1uVClg70czEDHA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NI, tyProc__c9c0f59ak4YGQ6neEym8LPKw) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__7jFfqMk9ajToCz6Hv9atCA4A) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* line);
typedef N_NIMCALL_PTR(NI, tyProc__2VVzVL9bOnKhj1eZKkf9cEuA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ {
  RootObj Sup;
tyProc__JQrsH08b4uPTH9cyFPlVOZg closeImpl;
tyProc__9bmhFrLahRsL2hltfRDVtlQ atEndImpl;
tyProc__3svSoGIUJIsHkaBL7q4DAQ setPositionImpl;
tyProc__xflqkf2D1uVClg70czEDHA getPositionImpl;
tyProc__c9c0f59ak4YGQ6neEym8LPKw readDataStrImpl;
tyProc__7jFfqMk9ajToCz6Hv9atCA4A readLineImpl;
tyProc__2VVzVL9bOnKhj1eZKkf9cEuA readDataImpl;
tyProc__2VVzVL9bOnKhj1eZKkf9cEuA peekDataImpl;
tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ writeDataImpl;
tyProc__JQrsH08b4uPTH9cyFPlVOZg flushImpl;
};
struct tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw {
  tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ Sup;
NimStringV2 data;
NI pos;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
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
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
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

      N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_623)(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw** dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_632)(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_2592)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___system_2598)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, ssClose__pureZstreams_760)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZstreams_649)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ** dest, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* src);
static N_INLINE(void, nimIncRef)(void* p);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, ssAtEnd__pureZstreams_619)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, ssSetPosition__pureZstreams_668)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
N_LIB_PRIVATE N_NIMCALL(NI, clamp__OOZfauZsrcZfauZfmath_707)(NI x, NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NI, ssGetPosition__pureZstreams_677)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NI, ssReadDataStr__pureZstreams_681)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
static N_INLINE(void, copyMem__system_1709)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, ssReadData__pureZstreams_735)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(NI, ssPeekData__pureZstreams_745)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(void, ssWriteData__pureZstreams_751)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, read__pureZstreams_324)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI32* result);
N_LIB_PRIVATE N_NIMCALL(NI, readData__pureZstreams_75)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*, newEIO__pureZstreams_2)(NimStringV2 msg);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___systemZio_119)(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw** dest);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___system_2595)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, read__pureZstreams_289)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI16* result);
N_NIMCALL(NimStringV2, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, readStrPrivate__pureZstreams_535)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI length, NimStringV2* str);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(void, read__pureZstreams_236)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NU8* result);
N_LIB_PRIVATE TNimTypeV2 NTIv2__Olau5FPRehZBBEB77FHnfw_;
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__Ue7tnBcsL67VCiRfvt8q0A_2 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__Ue7tnBcsL67VCiRfvt8q0A_3 = {0, (NimStrPayload*)&TM__Ue7tnBcsL67VCiRfvt8q0A_2};
extern TNimTypeV2 NTIv2__iLZrPn9anoh9ad1MmO0RczFw_;
static const struct {
  NI cap; NIM_CHAR data[23+1];
} TM__Ue7tnBcsL67VCiRfvt8q0A_4 = { 23 | NIM_STRLIT_FLAG, "cannot read from stream" };
static const NimStringV2 TM__Ue7tnBcsL67VCiRfvt8q0A_5 = {23, (NimStrPayload*)&TM__Ue7tnBcsL67VCiRfvt8q0A_4};
static const NimStringV2 TM__Ue7tnBcsL67VCiRfvt8q0A_6 = {23, (NimStrPayload*)&TM__Ue7tnBcsL67VCiRfvt8q0A_4};
static const NimStringV2 TM__Ue7tnBcsL67VCiRfvt8q0A_7 = {23, (NimStrPayload*)&TM__Ue7tnBcsL67VCiRfvt8q0A_4};
extern NIM_BOOL nimInErrorMode__system_3443;
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_716(((NI) (ptrdiff_t) (p)), ((NI) 4));
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
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_623)(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_632)(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* dest) {
	eqdestroy___system_2592((&(*dest).data));
}
static N_INLINE(void, nimIncRef)(void* p) {
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_716(((NI) (ptrdiff_t) (p)), ((NI) 4));
	(*((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_))).rc += ((NI) 8);
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZstreams_649)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ** dest, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* src) {
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
		nimDestroyAndDispose((*dest));
	}
	LA8_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(void, ssClose__pureZstreams_760)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmpD_;
	s_2 = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___pureZstreams_649(&colontmpD_, s);
	s_2 = (*((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw**) (&(colontmpD_))));
	eqsink___system_2598((&(*s_2).data), TM__Ue7tnBcsL67VCiRfvt8q0A_3);
	eqdestroy___pureZstreams_623(&s_2);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, ssAtEnd__pureZstreams_619)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NIM_BOOL result;
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
{	result = (NIM_BOOL)0;
	s_2 = NIM_NIL;
	s_2 = ((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw*) (s));
	result = ((*s_2).data.len <= (*s_2).pos);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, ssSetPosition__pureZstreams_668)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos) {
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmpD_;
	s_2 = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___pureZstreams_649(&colontmpD_, s);
	s_2 = (*((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw**) (&(colontmpD_))));
	(*s_2).pos = clamp__OOZfauZsrcZfauZfmath_707(pos, ((NI) 0), (*s_2).data.len);
	eqdestroy___pureZstreams_623(&s_2);
}
N_LIB_PRIVATE N_NIMCALL(NI, ssGetPosition__pureZstreams_677)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NI result;
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
{	result = (NI)0;
	s_2 = NIM_NIL;
	s_2 = ((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw*) (s));
	result = (*s_2).pos;
	goto BeforeRet_;
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
N_LIB_PRIVATE N_NIMCALL(NI, ssReadDataStr__pureZstreams_681)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice) {
	NI result;
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmpD_;
	result = (NI)0;
	s_2 = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___pureZstreams_649(&colontmpD_, s);
	s_2 = (*((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw**) (&(colontmpD_))));
	result = (((NI)((NI)(slice.b + ((NI) 1)) - slice.a) <= (NI)((*s_2).data.len - (*s_2).pos)) ? (NI)((NI)(slice.b + ((NI) 1)) - slice.a) : (NI)((*s_2).data.len - (*s_2).pos));
	{
		if (!(((NI) 0) < result)) goto LA3_;
		{
			copyMem__system_1709(((void*) ((&(*buffer).p->data[slice.a]))), ((void*) ((&(*s_2).data.p->data[(*s_2).pos]))), ((NI) (result)));
		}
		(*s_2).pos += result;
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NI) 0);
	}
	LA1_: ;
	eqdestroy___pureZstreams_623(&s_2);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, ssReadData__pureZstreams_735)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmpD_;
	result = (NI)0;
	s_2 = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___pureZstreams_649(&colontmpD_, s);
	s_2 = (*((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw**) (&(colontmpD_))));
	result = ((bufLen <= (NI)((*s_2).data.len - (*s_2).pos)) ? bufLen : (NI)((*s_2).data.len - (*s_2).pos));
	{
		if (!(((NI) 0) < result)) goto LA3_;
		copyMem__system_1709(buffer, ((void*) ((&(*s_2).data.p->data[(*s_2).pos]))), ((NI) (result)));
		(*s_2).pos += result;
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NI) 0);
	}
	LA1_: ;
	eqdestroy___pureZstreams_623(&s_2);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, ssPeekData__pureZstreams_745)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	result = (NI)0;
	s_2 = NIM_NIL;
	s_2 = ((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw*) (s));
	result = ((bufLen <= (NI)((*s_2).data.len - (*s_2).pos)) ? bufLen : (NI)((*s_2).data.len - (*s_2).pos));
	{
		if (!(((NI) 0) < result)) goto LA3_;
		copyMem__system_1709(buffer, ((void*) ((&(*s_2).data.p->data[(*s_2).pos]))), ((NI) (result)));
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NI) 0);
	}
	LA1_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3443);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, ssWriteData__pureZstreams_751)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmpD_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	s_2 = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___pureZstreams_649(&colontmpD_, s);
	s_2 = (*((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw**) (&(colontmpD_))));
	{
		if (!(bufLen <= ((NI) 0))) goto LA4_;
		eqdestroy___pureZstreams_623(&s_2);
		goto BeforeRet_;
	}
	LA4_: ;
	{
		if (!((*s_2).data.len < (NI)((*s_2).pos + bufLen))) goto LA8_;
		setLengthStrV2((&(*s_2).data), ((NI) ((NI)((*s_2).pos + bufLen))));
	}
	LA8_: ;
	copyMem__system_1709(((void*) ((&(*s_2).data.p->data[(*s_2).pos]))), buffer, ((NI) (bufLen)));
	(*s_2).pos += bufLen;
	{
		LA1_:;
	}
	{
		eqdestroy___pureZstreams_623(&s_2);
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw*, newStringStream__pureZstreams_763)(NimStringV2 s) {
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* result;
	result = NIM_NIL;
	eqdestroy___pureZstreams_623(&result);
	result = (tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw*) nimNewObj(sizeof(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw), NIM_ALIGNOF(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw));
	(*result).Sup.Sup.m_type = (&NTIv2__Olau5FPRehZBBEB77FHnfw_);
	eqsink___system_2598((&(*result).data), s);
	(*result).pos = ((NI) 0);
	(*result).Sup.closeImpl = ssClose__pureZstreams_760;
	(*result).Sup.atEndImpl = ssAtEnd__pureZstreams_619;
	(*result).Sup.setPositionImpl = ssSetPosition__pureZstreams_668;
	(*result).Sup.getPositionImpl = ssGetPosition__pureZstreams_677;
	(*result).Sup.readDataStrImpl = ssReadDataStr__pureZstreams_681;
	(*result).Sup.readDataImpl = ssReadData__pureZstreams_735;
	(*result).Sup.peekDataImpl = ssPeekData__pureZstreams_745;
	(*result).Sup.writeDataImpl = ssWriteData__pureZstreams_751;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readData__pureZstreams_75)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = (*s).readDataImpl(s, buffer, bufLen);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*, newEIO__pureZstreams_2)(NimStringV2 msg) {
	tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	eqdestroy___systemZio_119(&result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) nimNewObj(sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw), NIM_ALIGNOF(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
	(*result).Sup.Sup.Sup.m_type = (&NTIv2__iLZrPn9anoh9ad1MmO0RczFw_);
	(*result).Sup.Sup.name = "IOError";
	eqcopy___system_2595((&(*result).Sup.Sup.message), msg);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, read__pureZstreams_324)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI32* result) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI T3_;
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T6_;
		T3_ = (NI)0;
		T3_ = readData__pureZstreams_75(s, ((void*) (result)), ((NI) 4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!((T3_ == ((NI) 4)))) goto LA4_;
		T6_ = NIM_NIL;
		T6_ = newEIO__pureZstreams_2(TM__Ue7tnBcsL67VCiRfvt8q0A_5);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseExceptionEx((Exception*)T6_, "IOError", "read", "streams.nim", 409);
		goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI32, readInt32__pureZstreams_321)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NI32 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI32)0;
	read__pureZstreams_324(s, (&result));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, read__pureZstreams_289)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI16* result) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI T3_;
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T6_;
		T3_ = (NI)0;
		T3_ = readData__pureZstreams_75(s, ((void*) (result)), ((NI) 2));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!((T3_ == ((NI) 2)))) goto LA4_;
		T6_ = NIM_NIL;
		T6_ = newEIO__pureZstreams_2(TM__Ue7tnBcsL67VCiRfvt8q0A_6);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseExceptionEx((Exception*)T6_, "IOError", "read", "streams.nim", 409);
		goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI16, readInt16__pureZstreams_286)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NI16 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI16)0;
	read__pureZstreams_289(s, (&result));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		if (!(s.len == ((NI) 0))) goto LA3_;
		result = "";
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NCSTRING) ((*s.p).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, readStrPrivate__pureZstreams_535)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI length, NimStringV2* str) {
	NI L;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!((*str).len < length)) goto LA3_;
		setLengthStrV2((&(*str)), ((NI) (length)));
	}
	LA3_: ;
	L = readData__pureZstreams_75(s, ((void*) (nimToCStringConv((*str)))), length);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!!((L == (*str).len))) goto LA7_;
		setLengthStrV2((&(*str)), ((NI) (L)));
	}
	LA7_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, readStr__pureZstreams_548)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI length) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = mnewString(((NI) (length)));
	readStrPrivate__pureZstreams_535(s, length, (&result));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, read__pureZstreams_236)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NU8* result) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI T3_;
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T6_;
		T3_ = (NI)0;
		T3_ = readData__pureZstreams_75(s, ((void*) (result)), ((NI) 1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!((T3_ == ((NI) 1)))) goto LA4_;
		T6_ = NIM_NIL;
		T6_ = newEIO__pureZstreams_2(TM__Ue7tnBcsL67VCiRfvt8q0A_7);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseExceptionEx((Exception*)T6_, "IOError", "read", "streams.nim", 409);
		goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readBool__pureZstreams_232)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NIM_BOOL result;
	NU8 t;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	t = (NU8)0;
	read__pureZstreams_236(s, (&t));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = !((t == ((NU8) 0)));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__pureZstreams_57)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!!(((*s).closeImpl == 0))) goto LA3_;
		(*s).closeImpl(s);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_streamsDatInit000)(void) {
NTIv2__Olau5FPRehZBBEB77FHnfw_.destructor = (void*)eqdestroy___pureZstreams_632; NTIv2__Olau5FPRehZBBEB77FHnfw_.size = sizeof(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw); NTIv2__Olau5FPRehZBBEB77FHnfw_.align = NIM_ALIGNOF(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw); NTIv2__Olau5FPRehZBBEB77FHnfw_.name = "|stdlib.streams.StringStreamObj|stdlib.streams.StreamObj|RootObj|";
; NTIv2__Olau5FPRehZBBEB77FHnfw_.traceImpl = (void*)NIM_NIL; NTIv2__Olau5FPRehZBBEB77FHnfw_.flags = 0;}

