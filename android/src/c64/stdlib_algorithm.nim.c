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
typedef struct tyObject_Req__H68QjrbUnFwaMhvhofU5EQ tyObject_Req__H68QjrbUnFwaMhvhofU5EQ;
typedef struct tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ;
typedef struct tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ_Content tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ_Content;
typedef struct tyObject_Blending__hsAju9cB1hd79a6H4b5CoxVQ tyObject_Blending__hsAju9cB1hd79a6H4b5CoxVQ;
typedef struct tyObject_ShaderObj__KFmcUvp7lIrtBdspoRxLXw tyObject_ShaderObj__KFmcUvp7lIrtBdspoRxLXw;
typedef struct tyObject_Vert2__9cgwF8BmjkvAg9czRZkuIhqQ tyObject_Vert2__9cgwF8BmjkvAg9czRZkuIhqQ;
typedef struct tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w;
typedef struct tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg;
typedef struct tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ;
typedef struct tyObject_Patch__8QaUwC1IkZpFffoZ7KEkFA tyObject_Patch__8QaUwC1IkZpFffoZ7KEkFA;
typedef struct tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ;
typedef struct tySequence__1G1c1pZ4AzoGz9awoII9a5sA tySequence__1G1c1pZ4AzoGz9awoII9a5sA;
typedef struct tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* x, tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* y, void* ClE_0);
void* ClE_0;
} tyProc__Fx2AFifABb7WhUUegOH7wA;
typedef NU8 tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA;
struct tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ {
  NI len; tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ_Content* p;
};
struct tyObject_Blending__hsAju9cB1hd79a6H4b5CoxVQ {
NU32 src;
NU32 dst;
};
typedef NU8 tyEnum_ReqKind__9bS5jOf2QF9cteaMf32Tvmxg;
struct tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w {
NF32 x;
NF32 y;
};
struct tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg {
NU8 rv;
NU8 gv;
NU8 bv;
NU8 av;
};
struct tyObject_Vert2__9cgwF8BmjkvAg9czRZkuIhqQ {
tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w pos;
tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w uv;
tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg color;
tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg mixcolor;
};
typedef tyObject_Vert2__9cgwF8BmjkvAg9czRZkuIhqQ tyArray__1wS2mKS0Tpo9aj1cMUR70bA[4];
struct tyObject_Patch__8QaUwC1IkZpFffoZ7KEkFA {
tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ* texture;
NF32 u;
NF32 v;
NF32 u2;
NF32 v2;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tyObject_Req__H68QjrbUnFwaMhvhofU5EQ {
tyObject_Blending__hsAju9cB1hd79a6H4b5CoxVQ blend;
tyObject_ShaderObj__KFmcUvp7lIrtBdspoRxLXw* shader;
NF32 z;
tyEnum_ReqKind__9bS5jOf2QF9cteaMf32Tvmxg kind;
union{
struct {tyArray__1wS2mKS0Tpo9aj1cMUR70bA verts;
tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ* tex;
} _kind_1;
struct {tyObject_Patch__8QaUwC1IkZpFffoZ7KEkFA patch;
tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w pos;
tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w origin;
tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w size;
NF32 rotation;
tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg color;
tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg mixColor;
} _kind_2;
struct {tyProc__HzVCwACFYM9cx9aV62PdjtuA draw;
} _kind_3;
};
};
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_2) (tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* x, tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_3) (tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* x, tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* y);
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* x, tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* y, void* ClE_0);
void* ClE_0;
} tyProc__Tgt49aumoP2TMuLqxzv7bFg;
struct tySequence__1G1c1pZ4AzoGz9awoII9a5sA {
  NI len; tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content* p;
};
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_4) (tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* x, tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_5) (tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* x, tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* y);


#ifndef tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ_Content_PP
#define tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ_Content_PP
struct tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ_Content { NI cap; tyObject_Req__H68QjrbUnFwaMhvhofU5EQ data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ_Content_PP
#define tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ_Content_PP
struct tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ_Content { NI cap; tyObject_Req__H68QjrbUnFwaMhvhofU5EQ data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content_PP
#define tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content_PP
struct tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content { NI cap; tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content_PP
#define tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content_PP
struct tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content { NI cap; tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ, newSeq__OOZfauZsrcZfauZbatch_799)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, mergeAlt__OOZfauZsrcZfauZbatch_818)(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* a, NI aLen_0, tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* b, NI bLen_0, NI lo, NI m, NI hi, tyProc__Fx2AFifABb7WhUUegOH7wA cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
static N_INLINE(NI, star___pureZalgorithm_8)(NI x, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___OOZfauZsrcZfauZbatch_355)(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* dest, tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* src);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZfauZsrcZfauZbatch_626)(tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ* dest);
N_LIB_PRIVATE N_NIMCALL(tySequence__1G1c1pZ4AzoGz9awoII9a5sA, newSeq__main_4503)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, mergeAlt__main_4522)(tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ** a, NI aLen_0, tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ** b, NI bLen_0, NI lo, NI m, NI hi, tyProc__Tgt49aumoP2TMuLqxzv7bFg cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vars_795)(tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ** dest, tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* src);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vars_603)(tySequence__1G1c1pZ4AzoGz9awoII9a5sA* dest);
extern NIM_BOOL nimInErrorMode__system_3443;
N_LIB_PRIVATE N_NIMCALL(void, fill__pureZstrutils_1416)(NI* a, NI aLen_0, NI value) {
	NI xX60gensym164_;
	xX60gensym164_ = ((NI) 0);
	{
		while (1) {
			if (!(xX60gensym164_ <= (aLen_0-1))) goto LA2;
			a[xX60gensym164_] = value;
			xX60gensym164_ += ((NI) 1);
		} LA2: ;
	}
}
static N_INLINE(NI, star___pureZalgorithm_8)(NI x, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI result;
	NI y;
	result = (NI)0;
	y = (NI)(order - ((NI) 1));
	result = (NI)((NI)(x ^ y) - y);
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3443);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, mergeAlt__OOZfauZsrcZfauZbatch_818)(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* a, NI aLen_0, tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* b, NI bLen_0, NI lo, NI m, NI hi, tyProc__Fx2AFifABb7WhUUegOH7wA cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI j;
	NI bb;
	NI i;
	NI k;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0((&a[m]), (&a[(NI)(m + ((NI) 1))]), cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_2)(cmp.ClP_0))((&a[m]), (&a[(NI)(m + ((NI) 1))]));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T4_ = (NI)0;
		T4_ = star___pureZalgorithm_8(T3_, order);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			tyObject_Req__H68QjrbUnFwaMhvhofU5EQ T9_;
			if (!(j <= m)) goto LA8;
			nimZeroMem((void*)(&T9_), sizeof(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ));
			T9_ = a[j];
			nimZeroMem((void*)(&a[j]), sizeof(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ));
			eqsink___OOZfauZsrcZfauZbatch_355((&b[bb]), (&T9_));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T12_;
			T12_ = (NIM_BOOL)0;
			T12_ = (k < j);
			if (!(T12_)) goto LA13_;
			T12_ = (j <= hi);
			LA13_: ;
			if (!T12_) goto LA11;
			{
				NI T16_;
				NI T17_;
				tyObject_Req__H68QjrbUnFwaMhvhofU5EQ T20_;
				T16_ = (NI)0;
				T16_ = cmp.ClE_0? cmp.ClP_0((&b[i]), (&a[j]), cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_3)(cmp.ClP_0))((&b[i]), (&a[j]));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T17_ = (NI)0;
				T17_ = star___pureZalgorithm_8(T16_, order);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!(T17_ <= ((NI) 0))) goto LA18_;
				nimZeroMem((void*)(&T20_), sizeof(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ));
				T20_ = b[i];
				nimZeroMem((void*)(&b[i]), sizeof(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ));
				eqsink___OOZfauZsrcZfauZbatch_355((&a[k]), (&T20_));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i += ((NI) 1);
			}
			goto LA14_;
			LA18_: ;
			{
				tyObject_Req__H68QjrbUnFwaMhvhofU5EQ T22_;
				nimZeroMem((void*)(&T22_), sizeof(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ));
				T22_ = a[j];
				nimZeroMem((void*)(&a[j]), sizeof(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ));
				eqsink___OOZfauZsrcZfauZbatch_355((&a[k]), (&T22_));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				j += ((NI) 1);
			}
			LA14_: ;
			k += ((NI) 1);
		} LA11: ;
	}
	{
		while (1) {
			tyObject_Req__H68QjrbUnFwaMhvhofU5EQ T25_;
			if (!(k < j)) goto LA24;
			nimZeroMem((void*)(&T25_), sizeof(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ));
			T25_ = b[i];
			nimZeroMem((void*)(&b[i]), sizeof(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ));
			eqsink___OOZfauZsrcZfauZbatch_355((&a[k]), (&T25_));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			k += ((NI) 1);
			i += ((NI) 1);
		} LA24: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, sort__OOZfauZsrcZfauZbatch_787)(tyObject_Req__H68QjrbUnFwaMhvhofU5EQ* a, NI aLen_0, tyProc__Fx2AFifABb7WhUUegOH7wA cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {
	tySequence__SM9c8VrFxWOkIeeRsbw9bbeQ b;
	NI n;
	NI s;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	b.len = 0; b.p = NIM_NIL;
	n = aLen_0;
	b = newSeq__OOZfauZsrcZfauZbatch_799(((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					mergeAlt__OOZfauZsrcZfauZbatch_818(a, aLen_0, b.p->data, b.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
	eqdestroy___OOZfauZsrcZfauZbatch_626((&b));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, mergeAlt__main_4522)(tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ** a, NI aLen_0, tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ** b, NI bLen_0, NI lo, NI m, NI hi, tyProc__Tgt49aumoP2TMuLqxzv7bFg cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI j;
	NI bb;
	NI i;
	NI k;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0(a[m], a[(NI)(m + ((NI) 1))], cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_4)(cmp.ClP_0))(a[m], a[(NI)(m + ((NI) 1))]);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T4_ = (NI)0;
		T4_ = star___pureZalgorithm_8(T3_, order);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* T9_;
			if (!(j <= m)) goto LA8;
			T9_ = NIM_NIL;
			T9_ = a[j];
			a[j] = 0;
			eqsink___vars_795(&b[bb], T9_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T12_;
			T12_ = (NIM_BOOL)0;
			T12_ = (k < j);
			if (!(T12_)) goto LA13_;
			T12_ = (j <= hi);
			LA13_: ;
			if (!T12_) goto LA11;
			{
				NI T16_;
				NI T17_;
				tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* T20_;
				T16_ = (NI)0;
				T16_ = cmp.ClE_0? cmp.ClP_0(b[i], a[j], cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_5)(cmp.ClP_0))(b[i], a[j]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T17_ = (NI)0;
				T17_ = star___pureZalgorithm_8(T16_, order);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!(T17_ <= ((NI) 0))) goto LA18_;
				T20_ = NIM_NIL;
				T20_ = b[i];
				b[i] = 0;
				eqsink___vars_795(&a[k], T20_);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i += ((NI) 1);
			}
			goto LA14_;
			LA18_: ;
			{
				tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* T22_;
				T22_ = NIM_NIL;
				T22_ = a[j];
				a[j] = 0;
				eqsink___vars_795(&a[k], T22_);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				j += ((NI) 1);
			}
			LA14_: ;
			k += ((NI) 1);
		} LA11: ;
	}
	{
		while (1) {
			tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* T25_;
			if (!(k < j)) goto LA24;
			T25_ = NIM_NIL;
			T25_ = b[i];
			b[i] = 0;
			eqsink___vars_795(&a[k], T25_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			k += ((NI) 1);
			i += ((NI) 1);
		} LA24: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, sort__main_4491)(tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ** a, NI aLen_0, tyProc__Tgt49aumoP2TMuLqxzv7bFg cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {
	tySequence__1G1c1pZ4AzoGz9awoII9a5sA b;
	NI n;
	NI s;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	b.len = 0; b.p = NIM_NIL;
	n = aLen_0;
	b = newSeq__main_4503(((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					mergeAlt__main_4522(a, aLen_0, b.p->data, b.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
	eqdestroy___vars_603((&b));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
