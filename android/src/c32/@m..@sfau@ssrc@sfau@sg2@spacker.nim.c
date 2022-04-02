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
typedef struct tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg;
typedef struct tySequence__N2Gv7NwuJGk9c07BsmK1yOA tySequence__N2Gv7NwuJGk9c07BsmK1yOA;
typedef struct tySequence__N2Gv7NwuJGk9c07BsmK1yOA_Content tySequence__N2Gv7NwuJGk9c07BsmK1yOA_Content;
typedef struct tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
struct tySequence__N2Gv7NwuJGk9c07BsmK1yOA {
  NI len; tySequence__N2Gv7NwuJGk9c07BsmK1yOA_Content* p;
};
struct tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg {
NI w;
NI h;
tySequence__N2Gv7NwuJGk9c07BsmK1yOA nodes;
};
struct tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ {
NI16 x;
NI16 y;
NI16 w;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};


#ifndef tySequence__N2Gv7NwuJGk9c07BsmK1yOA_Content_PP
#define tySequence__N2Gv7NwuJGk9c07BsmK1yOA_Content_PP
struct tySequence__N2Gv7NwuJGk9c07BsmK1yOA_Content { NI cap; tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__N2Gv7NwuJGk9c07BsmK1yOA_Content_PP
#define tySequence__N2Gv7NwuJGk9c07BsmK1yOA_Content_PP
struct tySequence__N2Gv7NwuJGk9c07BsmK1yOA_Content { NI cap; tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, resize__OOZfauZsrcZfauZg50Zpacker_10)(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* packer, NI width, NI height);
N_LIB_PRIVATE N_NIMCALL(void, add__OOZfauZsrcZfauZg50Zpacker_14)(tySequence__N2Gv7NwuJGk9c07BsmK1yOA* x, tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ value);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, packInternal__OOZfauZsrcZfauZg50Zpacker_333)(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* atlas, NI width, NI height);
N_LIB_PRIVATE N_NIMCALL(NI16, rectFits__OOZfauZsrcZfauZg50Zpacker_153)(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* atlas, NI32 idx, NI16 w, NI16 h);
N_LIB_PRIVATE N_NIMCALL(void, addNode__OOZfauZsrcZfauZg50Zpacker_173)(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* atlas, NI32 idx, NI16 x, NI16 y, NI16 w, NI16 h);
N_LIB_PRIVATE N_NIMCALL(void, insert__OOZfauZsrcZfauZg50Zpacker_180)(tySequence__N2Gv7NwuJGk9c07BsmK1yOA* x, tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ item, NI i);
N_LIB_PRIVATE N_NIMCALL(void, delete__OOZfauZsrcZfauZg50Zpacker_243)(tySequence__N2Gv7NwuJGk9c07BsmK1yOA* x, NI i);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZfauZsrcZfauZg50Zpacker_88)(tySequence__N2Gv7NwuJGk9c07BsmK1yOA* dest);
N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p, NI align);
extern NIM_BOOL nimInErrorMode__system_3443;
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
N_LIB_PRIVATE N_NIMCALL(void, resize__OOZfauZsrcZfauZg50Zpacker_10)(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* packer, NI width, NI height) {
	NI16 colontmpD_;
	NI16 colontmpD__2;
	tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ T1_;
	colontmpD_ = (NI16)0;
	colontmpD__2 = (NI16)0;
	nimZeroMem((void*)(&T1_), sizeof(tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ));
	colontmpD_ = ((NI16) ((*packer).w));
	T1_.x = colontmpD_;
	T1_.y = ((NI16) 0);
	colontmpD__2 = ((NI16) ((NI)(width - (*packer).w)));
	T1_.w = colontmpD__2;
	add__OOZfauZsrcZfauZg50Zpacker_14((&(*packer).nodes), T1_);
	(*packer).w = width;
	(*packer).h = height;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg*, newPacker__OOZfauZsrcZfauZg50Zpacker_75)(NI width, NI height) {
	tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* result;
	tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = (tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg*) nimNewObj(sizeof(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg), NIM_ALIGNOF(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg));
	result = T1_;
	resize__OOZfauZsrcZfauZg50Zpacker_10(result, width, height);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI16, rectFits__OOZfauZsrcZfauZg50Zpacker_153)(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* atlas, NI32 idx, NI16 w, NI16 h) {
	NI16 result;
	NI16 y;
	NI16 spaceLeft;
	NI32 i;
{	result = (NI16)0;
	{
		if (!((*atlas).w < ((NI) ((NI16)((*atlas).nodes.p->data[idx].x + w))))) goto LA3_;
		result = ((NI16) -1);
		goto BeforeRet_;
	}
	LA3_: ;
	y = (*atlas).nodes.p->data[idx].y;
	spaceLeft = w;
	i = idx;
	{
		while (1) {
			if (!(((NI16) 0) < spaceLeft)) goto LA6;
			{
				NI T9_;
				T9_ = (*atlas).nodes.len;
				if (!(((NI) (i)) == T9_)) goto LA10_;
				result = ((NI16) -1);
				goto BeforeRet_;
			}
			LA10_: ;
			y = ((y >= (*atlas).nodes.p->data[i].y) ? y : (*atlas).nodes.p->data[i].y);
			{
				if (!((*atlas).h < ((NI) ((NI16)(y + h))))) goto LA14_;
				result = ((NI16) -1);
				goto BeforeRet_;
			}
			LA14_: ;
			spaceLeft -= (*atlas).nodes.p->data[i].w;
			i += ((NI) 1);
		} LA6: ;
	}
	result = y;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addNode__OOZfauZsrcZfauZg50Zpacker_173)(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* atlas, NI32 idx, NI16 x, NI16 y, NI16 w, NI16 h) {
	NI16 colontmpD_;
	NI16 colontmpD__2;
	tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ T1_;
	NI32 i;
	colontmpD_ = (NI16)0;
	colontmpD__2 = (NI16)0;
	nimZeroMem((void*)(&T1_), sizeof(tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ));
	colontmpD_ = x;
	T1_.x = colontmpD_;
	T1_.y = (NI16)(y + h);
	colontmpD__2 = w;
	T1_.w = colontmpD__2;
	insert__OOZfauZsrcZfauZg50Zpacker_180((&(*atlas).nodes), T1_, ((NI) (idx)));
	i = (NI32)(idx + ((NI32) 1));
	{
		while (1) {
			NI T4_;
			tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ* pnode;
			tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ* inode;
			T4_ = (*atlas).nodes.len;
			if (!(((NI) (i)) < T4_)) goto LA3;
			pnode = (&(*atlas).nodes.p->data[(NI32)(i - ((NI32) 1))]);
			inode = (&(*atlas).nodes.p->data[i]);
			{
				NI16 shrink;
				if (!((*inode).x < (NI16)((*pnode).x + (*pnode).w))) goto LA7_;
				shrink = (NI16)((NI16)((*pnode).x - (*inode).x) + (*pnode).w);
				(*inode).x += shrink;
				(*inode).w -= shrink;
				{
					if (!((*inode).w <= ((NI16) 0))) goto LA11_;
					delete__OOZfauZsrcZfauZg50Zpacker_243((&(*atlas).nodes), ((NI) (i)));
					i -= ((NI) 1);
				}
				goto LA9_;
				LA11_: ;
				{
					goto LA2;
				}
				LA9_: ;
			}
			goto LA5_;
			LA7_: ;
			{
				goto LA2;
			}
			LA5_: ;
			i += ((NI) 1);
		} LA3: ;
	} LA2: ;
	i = ((NI32) 0);
	{
		while (1) {
			NI T17_;
			tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ* nnode;
			tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ* inode_2;
			T17_ = ((*atlas).nodes.len-1);
			if (!(((NI) (i)) < T17_)) goto LA16;
			nnode = (&(*atlas).nodes.p->data[(NI32)(i + ((NI32) 1))]);
			inode_2 = (&(*atlas).nodes.p->data[i]);
			{
				if (!((*inode_2).y == (*nnode).y)) goto LA20_;
				(*inode_2).w += (*nnode).w;
				delete__OOZfauZsrcZfauZg50Zpacker_243((&(*atlas).nodes), ((NI) ((NI32)(i + ((NI32) 1)))));
				i -= ((NI) 1);
			}
			LA20_: ;
			i += ((NI) 1);
		} LA16: ;
	}
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, packInternal__OOZfauZsrcZfauZg50Zpacker_333)(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* atlas, NI width, NI height) {
	tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ result;
	NI16 w;
	NI16 h;
	NI32 bestIDX;
	NI16 bestX;
	NI16 bestY;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ));
	w = ((NI16) (width));
	h = ((NI16) (height));
	bestIDX = ((NI32) -1);
	bestX = ((NI16) -1);
	bestY = ((NI16) -1);
	{
		NI bestH;
		NI bestW;
		NI32 i;
		bestH = (*atlas).h;
		bestW = (*atlas).w;
		i = ((NI32) 0);
		{
			while (1) {
				NI T4_;
				NI16 y;
				T4_ = (*atlas).nodes.len;
				if (!(((NI) (i)) < T4_)) goto LA3;
				y = rectFits__OOZfauZsrcZfauZg50Zpacker_153(atlas, i, w, h);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				{
					tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ* node;
					if (!!((y == ((NI16) -1)))) goto LA7_;
					node = (&(*atlas).nodes.p->data[i]);
					{
						NIM_BOOL T11_;
						NIM_BOOL T13_;
						T11_ = (NIM_BOOL)0;
						T11_ = (((NI) ((NI16)(y + h))) < bestH);
						if (T11_) goto LA12_;
						T13_ = (NIM_BOOL)0;
						T13_ = (((NI) ((NI16)(y + h))) == bestH);
						if (!(T13_)) goto LA14_;
						T13_ = (((NI) ((*node).w)) < bestW);
						LA14_: ;
						T11_ = T13_;
						LA12_: ;
						if (!T11_) goto LA15_;
						bestIDX = i;
						bestW = ((NI) ((*node).w));
						bestH = ((NI) ((NI16)(y + h)));
						bestX = (*node).x;
						bestY = y;
					}
					LA15_: ;
				}
				LA7_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
	{
		if (!!((bestIDX == ((NI32) -1)))) goto LA19_;
		addNode__OOZfauZsrcZfauZg50Zpacker_173(atlas, bestIDX, bestX, bestY, w, h);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result.Field0 = ((NI) (bestX));
		result.Field1 = ((NI) (bestY));
	}
	goto LA17_;
	LA19_: ;
	{
		NI colontmp_;
		NI colontmp__2;
		colontmp_ = ((NI) -1);
		colontmp__2 = ((NI) -1);
		result.Field0 = colontmp_;
		result.Field1 = colontmp__2;
	}
	LA17_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, pack__OOZfauZsrcZfauZg50Zpacker_357)(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* atlas, NI width, NI height, NI padding) {
	tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ));
	result = packInternal__OOZfauZsrcZfauZg50Zpacker_333(atlas, (NI)(width + (NI)(padding * ((NI) 2))), (NI)(height + (NI)(padding * ((NI) 2))));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!!((result.Field0 == ((NI) -1)))) goto LA3_;
		result.Field0 += padding;
		result.Field1 += padding;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZfauZsrcZfauZg50Zpacker_88)(tySequence__N2Gv7NwuJGk9c07BsmK1yOA* dest) {
	if ((*dest).p && !((*dest).p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc((*dest).p, NIM_ALIGNOF(tyObject_Node__Xvy9c2WDed0HmEWKa7NnReQ));
}
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___OOZfauZsrcZfauZg50Zpacker_79)(tyObject_PackercolonObjectType___1jXecyUQAAraI7UPAcWMyg* dest) {
	eqdestroy___OOZfauZsrcZfauZg50Zpacker_88((&(*dest).nodes));
}
