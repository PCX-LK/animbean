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
typedef struct tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyTuple__BUNQL5x2cKJaBSzOn5pwkg tyTuple__BUNQL5x2cKJaBSzOn5pwkg;
typedef struct tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w;
typedef struct tyObject_Table__OxRqfkudSQS6aNVHuUx9bSg tyObject_Table__OxRqfkudSQS6aNVHuUx9bSg;
typedef struct tySequence__v87TdQ9b9cLCVESucM9cmtTyg tySequence__v87TdQ9b9cLCVESucM9cmtTyg;
typedef struct tySequence__v87TdQ9b9cLCVESucM9cmtTyg_Content tySequence__v87TdQ9b9cLCVESucM9cmtTyg_Content;
typedef struct tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A;
typedef struct tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg;
typedef struct tyObject_SoundcolonObjectType___vM2lye3lId9akjCHDtEDu0w tyObject_SoundcolonObjectType___vM2lye3lId9akjCHDtEDu0w;
typedef struct tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ;
typedef struct tyObject_SaveState__JG21xxTUaJxQnXwaK3dMWw tyObject_SaveState__JG21xxTUaJxQnXwaK3dMWw;
typedef struct tySequence__1G1c1pZ4AzoGz9awoII9a5sA tySequence__1G1c1pZ4AzoGz9awoII9a5sA;
typedef struct tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content;
typedef struct tySequence__qwqHTkRvwhrRyENtudHQ7g tySequence__qwqHTkRvwhrRyENtudHQ7g;
typedef struct tySequence__qwqHTkRvwhrRyENtudHQ7g_Content tySequence__qwqHTkRvwhrRyENtudHQ7g_Content;
typedef struct tyObject_Table__i55W8RrwGKsG9cl0sAKxgkQ tyObject_Table__i55W8RrwGKsG9cl0sAKxgkQ;
typedef struct tySequence__pUxI6Ljo6IKKHXKOZkQ7Og tySequence__pUxI6Ljo6IKKHXKOZkQ7Og;
typedef struct tySequence__pUxI6Ljo6IKKHXKOZkQ7Og_Content tySequence__pUxI6Ljo6IKKHXKOZkQ7Og_Content;
typedef struct tyObject_GameState__uSXW8u7k2xElIJTKmtB4ig tyObject_GameState__uSXW8u7k2xElIJTKmtB4ig;
typedef struct tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ;
typedef struct tyTuple__DtYz89aEFgC8CcjjapPJ8Rg tyTuple__DtYz89aEFgC8CcjjapPJ8Rg;
typedef struct tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ;
typedef struct tyTuple__sr3s7uVHpu9cEbbDnCSg8yQ tyTuple__sr3s7uVHpu9cEbbDnCSg8yQ;
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
};
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyTuple__BUNQL5x2cKJaBSzOn5pwkg unit, NI moves, void* ClE_0);
void* ClE_0;
} tyProc__ojNDjFK5r5ivRd8Rxp6ZuA;
typedef N_NIMCALL_PTR(void, tyProc__cMnJRgMxnPy9bYjqfhi18yg) (tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* unit, tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w pos);
struct tySequence__v87TdQ9b9cLCVESucM9cmtTyg {
  NI len; tySequence__v87TdQ9b9cLCVESucM9cmtTyg_Content* p;
};
struct tyObject_Table__OxRqfkudSQS6aNVHuUx9bSg {
tySequence__v87TdQ9b9cLCVESucM9cmtTyg data;
NI counter;
};
struct tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ {
NimStringV2 name;
NimStringV2 title;
NimStringV2 subtitle;
NimStringV2 ability;
NI abilityReload;
tyProc__ojNDjFK5r5ivRd8Rxp6ZuA abilityProc;
tyProc__cMnJRgMxnPy9bYjqfhi18yg draw;
tyObject_Table__OxRqfkudSQS6aNVHuUx9bSg textures;
NIM_BOOL unmoving;
NIM_BOOL unobtainable;
NIM_BOOL wasOver;
NF32 fade;
NF32 jump;
NIM_BOOL jumping;
NF32 clickTime;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg {
NU8 rv;
NU8 gv;
NU8 bv;
NU8 av;
};
struct tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A {
NimStringV2 name;
NimStringV2 songName;
tyProc__HzVCwACFYM9cx9aV62PdjtuA drawPixel;
tyProc__HzVCwACFYM9cx9aV62PdjtuA draw;
tyProc__HzVCwACFYM9cx9aV62PdjtuA update;
tyObject_Color__OSWJq3HNkIl1V7S3GsYvBg fadeColor;
tyObject_SoundcolonObjectType___vM2lye3lId9akjCHDtEDu0w* sound;
NF bpm;
NF beatOffset;
NI maxHits;
tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* preview;
NI copperAmount;
};
struct tySequence__1G1c1pZ4AzoGz9awoII9a5sA {
  NI len; tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content* p;
};
struct tySequence__qwqHTkRvwhrRyENtudHQ7g {
  NI len; tySequence__qwqHTkRvwhrRyENtudHQ7g_Content* p;
};
struct tySequence__pUxI6Ljo6IKKHXKOZkQ7Og {
  NI len; tySequence__pUxI6Ljo6IKKHXKOZkQ7Og_Content* p;
};
struct tyObject_Table__i55W8RrwGKsG9cl0sAKxgkQ {
tySequence__pUxI6Ljo6IKKHXKOZkQ7Og data;
NI counter;
};
struct tyObject_SaveState__JG21xxTUaJxQnXwaK3dMWw {
NIM_BOOL introDone;
tySequence__1G1c1pZ4AzoGz9awoII9a5sA units;
NI copper;
NI rolls;
tySequence__qwqHTkRvwhrRyENtudHQ7g scores;
tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* lastUnit;
tyObject_Table__i55W8RrwGKsG9cl0sAKxgkQ duplicates;
};
struct tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ {
NI x;
NI y;
};
struct tyObject_GameState__uSXW8u7k2xElIJTKmtB4ig {
tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A* map;
unsigned int voice;
NF secs;
NF lastSecs;
NF32 time;
tyObject_Vec2i__Vb00liq4ISM4Oc07yydBJQ playerPos;
NF rawBeat;
NF32 moveBeat;
NIM_BOOL newTurn;
NF32 hitTime;
NF32 healTime;
NI points;
NI turn;
NI copperReceived;
NI hits;
NI totalHits;
NI misses;
NimStringV2 beatStats;
};
struct tyTuple__BUNQL5x2cKJaBSzOn5pwkg {
NI32 Field0;
NI32 Field1;
};
struct tyObject_Vec2__207B9cwFjt9a8ydWqYFfZZ2w {
NF32 x;
NF32 y;
};
struct tyTuple__DtYz89aEFgC8CcjjapPJ8Rg {
NI Field0;
NimStringV2 Field1;
tyObject_TextureObj__cVmPWt9bHJAYuqtGMTQozzQ* Field2;
};


#ifndef tySequence__v87TdQ9b9cLCVESucM9cmtTyg_Content_PP
#define tySequence__v87TdQ9b9cLCVESucM9cmtTyg_Content_PP
struct tySequence__v87TdQ9b9cLCVESucM9cmtTyg_Content { NI cap; tyTuple__DtYz89aEFgC8CcjjapPJ8Rg data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__v87TdQ9b9cLCVESucM9cmtTyg_Content_PP
#define tySequence__v87TdQ9b9cLCVESucM9cmtTyg_Content_PP
struct tySequence__v87TdQ9b9cLCVESucM9cmtTyg_Content { NI cap; tyTuple__DtYz89aEFgC8CcjjapPJ8Rg data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content_PP
#define tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content_PP
struct tySequence__1G1c1pZ4AzoGz9awoII9a5sA_Content { NI cap; tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__qwqHTkRvwhrRyENtudHQ7g_Content_PP
#define tySequence__qwqHTkRvwhrRyENtudHQ7g_Content_PP
struct tySequence__qwqHTkRvwhrRyENtudHQ7g_Content { NI cap; NI data[SEQ_DECL_SIZE];};
#endif

      struct tyTuple__sr3s7uVHpu9cEbbDnCSg8yQ {
NI Field0;
NimStringV2 Field1;
NI Field2;
};


#ifndef tySequence__pUxI6Ljo6IKKHXKOZkQ7Og_Content_PP
#define tySequence__pUxI6Ljo6IKKHXKOZkQ7Og_Content_PP
struct tySequence__pUxI6Ljo6IKKHXKOZkQ7Og_Content { NI cap; tyTuple__sr3s7uVHpu9cEbbDnCSg8yQ data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__qwqHTkRvwhrRyENtudHQ7g_Content_PP
#define tySequence__qwqHTkRvwhrRyENtudHQ7g_Content_PP
struct tySequence__qwqHTkRvwhrRyENtudHQ7g_Content { NI cap; NI data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__pUxI6Ljo6IKKHXKOZkQ7Og_Content_PP
#define tySequence__pUxI6Ljo6IKKHXKOZkQ7Og_Content_PP
struct tySequence__pUxI6Ljo6IKKHXKOZkQ7Og_Content { NI cap; tyTuple__sr3s7uVHpu9cEbbDnCSg8yQ data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(void, nimIncRef)(void* p);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vars_614)(tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_2592)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vars_624)(tySequence__v87TdQ9b9cLCVESucM9cmtTyg* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vars_447)(tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZfauZsrcZfauZaudio_80)(tyObject_SoundcolonObjectType___vM2lye3lId9akjCHDtEDu0w* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZfauZsrcZfauZframebuffer_14)(tyObject_FramebufferObj__1pPqnr9cylF8gi9bULYcALCQ* buffer);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vars_603)(tySequence__1G1c1pZ4AzoGz9awoII9a5sA* dest);
N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p, NI align);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZOOZOOZOnimbleZpkgsZpolymorph4548O51O48ZpolymorphZprivateZutils_894)(tySequence__qwqHTkRvwhrRyENtudHQ7g* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZfauZsrcZfauZshader_178)(tySequence__pUxI6Ljo6IKKHXKOZkQ7Og* dest);
N_LIB_PRIVATE N_NIMCALL(void, setLen__vars_753)(tySequence__1G1c1pZ4AzoGz9awoII9a5sA* s, NI newlen);
extern NIM_BOOL nimInErrorMode__system_3443;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3443);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vars_614)(tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqdestroy___system_2592((&(*dest).name));
	eqdestroy___system_2592((&(*dest).title));
	eqdestroy___system_2592((&(*dest).subtitle));
	eqdestroy___system_2592((&(*dest).ability));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).abilityProc.ClE_0);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).abilityProc.ClE_0);
	}
	LA4_: ;
	eqdestroy___vars_624((&(*dest).textures.data));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___vars_792)(tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ** dest, tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* src) {
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
		eqdestroy___vars_614((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI) 8));
	}
	LA8_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vars_447)(tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A* dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqdestroy___system_2592((&(*dest).name));
	eqdestroy___system_2592((&(*dest).songName));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).drawPixel.ClE_0);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).drawPixel.ClE_0);
	}
	LA4_: ;
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLast((*dest).draw.ClE_0);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).draw.ClE_0);
	}
	LA9_: ;
	{
		NIM_BOOL T13_;
		T13_ = (NIM_BOOL)0;
		T13_ = nimDecRefIsLast((*dest).update.ClE_0);
		if (!T13_) goto LA14_;
		nimDestroyAndDispose((*dest).update.ClE_0);
	}
	LA14_: ;
	{
		NIM_BOOL T18_;
		T18_ = (NIM_BOOL)0;
		T18_ = nimDecRefIsLast((*dest).sound);
		if (!T18_) goto LA19_;
		eqdestroy___OOZfauZsrcZfauZaudio_80((*dest).sound);
		nimRawDispose((*dest).sound, ((NI) 8));
	}
	LA19_: ;
	{
		NIM_BOOL T23_;
		T23_ = (NIM_BOOL)0;
		T23_ = nimDecRefIsLast((*dest).preview);
		if (!T23_) goto LA24_;
		eqdestroy___OOZfauZsrcZfauZframebuffer_14((*dest).preview);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).preview, ((NI) 8));
	}
	LA24_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vars_522)(tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A** dest, tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___vars_447((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI) 8));
	}
	LA4_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___vars_519)(tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A** dest, tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A* src) {
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
		eqdestroy___vars_447((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI) 8));
	}
	LA8_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___main_249657)(tyProc__ojNDjFK5r5ivRd8Rxp6ZuA* dest, tyProc__ojNDjFK5r5ivRd8Rxp6ZuA src) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).ClE_0);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).ClE_0);
	}
	LA4_: ;
	(*dest).ClE_0 = src.ClE_0;
	(*dest).ClP_0 = src.ClP_0;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vars_603)(tySequence__1G1c1pZ4AzoGz9awoII9a5sA* dest) {
	NI colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmp_ = ((NI) 0);
	{
		while (1) {
			NI T3_;
			T3_ = (*dest).len;
			if (!(colontmp_ < T3_)) goto LA2;
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = nimDecRefIsLast((*dest).p->data[colontmp_]);
				if (!T6_) goto LA7_;
				eqdestroy___vars_614((*dest).p->data[colontmp_]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimRawDispose((*dest).p->data[colontmp_], ((NI) 8));
			}
			LA7_: ;
			colontmp_ += ((NI) 1);
		} LA2: ;
	}
	if ((*dest).p && !((*dest).p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc((*dest).p, NIM_ALIGNOF(tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ*));
}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vars_600)(tyObject_SaveState__JG21xxTUaJxQnXwaK3dMWw* dest, tyObject_SaveState__JG21xxTUaJxQnXwaK3dMWw* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	(*dest).introDone = (*src).introDone;
	if ((*dest).units.p != (*src).units.p) {	eqdestroy___vars_603((&(*dest).units));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
(*dest).units.len = (*src).units.len; (*dest).units.p = (*src).units.p;
	(*dest).copper = (*src).copper;
	(*dest).rolls = (*src).rolls;
	if ((*dest).scores.p != (*src).scores.p) {	eqdestroy___OOZOOZOOZOnimbleZpkgsZpolymorph4548O51O48ZpolymorphZprivateZutils_894((&(*dest).scores));
	}
(*dest).scores.len = (*src).scores.len; (*dest).scores.p = (*src).scores.p;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).lastUnit);
		if (!T3_) goto LA4_;
		eqdestroy___vars_614((*dest).lastUnit);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).lastUnit, ((NI) 8));
	}
	LA4_: ;
	(*dest).lastUnit = (*src).lastUnit;
	if ((*dest).duplicates.data.p != (*src).duplicates.data.p) {	eqdestroy___OOZfauZsrcZfauZshader_178((&(*dest).duplicates.data));
	}
(*dest).duplicates.data.len = (*src).duplicates.data.len; (*dest).duplicates.data.p = (*src).duplicates.data.p;
	(*dest).duplicates.counter = (*src).duplicates.counter;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vars_789)(tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ** dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___vars_614((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI) 8));
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vars_795)(tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ** dest, tyObject_UnitcolonObjectType___SsZeRd6gcBu7cG15jQxSuQ* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___vars_614((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI) 8));
	}
	LA4_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___vars_606)(tySequence__1G1c1pZ4AzoGz9awoII9a5sA* dest, tySequence__1G1c1pZ4AzoGz9awoII9a5sA src) {
	NI T1_;
	NI colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = src.len;
	setLen__vars_753((&(*dest)), T1_);
	colontmp_ = ((NI) 0);
	{
		while (1) {
			NI T4_;
			T4_ = (*dest).len;
			if (!(colontmp_ < T4_)) goto LA3;
			{
				if (!src.p->data[colontmp_]) goto LA7_;
				nimIncRef(src.p->data[colontmp_]);
			}
			LA7_: ;
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				T11_ = nimDecRefIsLast((*dest).p->data[colontmp_]);
				if (!T11_) goto LA12_;
				eqdestroy___vars_614((*dest).p->data[colontmp_]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimRawDispose((*dest).p->data[colontmp_], ((NI) 8));
			}
			LA12_: ;
			(*dest).p->data[colontmp_] = src.p->data[colontmp_];
			colontmp_ += ((NI) 1);
		} LA3: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vars_609)(tySequence__1G1c1pZ4AzoGz9awoII9a5sA* dest, tySequence__1G1c1pZ4AzoGz9awoII9a5sA src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	if ((*dest).p != src.p) {	eqdestroy___vars_603(dest);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
(*dest).len = src.len; (*dest).p = src.p;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vars_587)(tyObject_GameState__uSXW8u7k2xElIJTKmtB4ig* dest, tyObject_GameState__uSXW8u7k2xElIJTKmtB4ig* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).map);
		if (!T3_) goto LA4_;
		eqdestroy___vars_447((*dest).map);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).map, ((NI) 8));
	}
	LA4_: ;
	(*dest).map = (*src).map;
	(*dest).voice = (*src).voice;
	(*dest).secs = (*src).secs;
	(*dest).lastSecs = (*src).lastSecs;
	(*dest).time = (*src).time;
	(*dest).playerPos.x = (*src).playerPos.x;
	(*dest).playerPos.y = (*src).playerPos.y;
	(*dest).rawBeat = (*src).rawBeat;
	(*dest).moveBeat = (*src).moveBeat;
	(*dest).newTurn = (*src).newTurn;
	(*dest).hitTime = (*src).hitTime;
	(*dest).healTime = (*src).healTime;
	(*dest).points = (*src).points;
	(*dest).turn = (*src).turn;
	(*dest).copperReceived = (*src).copperReceived;
	(*dest).hits = (*src).hits;
	(*dest).totalHits = (*src).totalHits;
	(*dest).misses = (*src).misses;
	if ((*dest).beatStats.p != (*src).beatStats.p) {	eqdestroy___system_2592((&(*dest).beatStats));
	}
(*dest).beatStats.len = (*src).beatStats.len; (*dest).beatStats.p = (*src).beatStats.p;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vars_516)(tyObject_BeatmapcolonObjectType___OhRxbYnKozXzEMOD6Waw7A** dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___vars_447((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI) 8));
	}
	LA4_: ;
	}BeforeRet_: ;
}
