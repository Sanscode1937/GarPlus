#include <hxcpp.h>

#ifndef INCLUDED_animateatlas__HelperEnums_SymbolType_Impl_
#include <animateatlas/_HelperEnums/SymbolType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_79b276fef1e2dd46_19_isValid,"animateatlas._HelperEnums.SymbolType_Impl_","isValid",0xd43c13fb,"animateatlas._HelperEnums.SymbolType_Impl_.isValid","animateatlas/HelperEnums.hx",19,0xb5dc3bff)
HX_LOCAL_STACK_FRAME(_hx_pos_79b276fef1e2dd46_14_boot,"animateatlas._HelperEnums.SymbolType_Impl_","boot",0x17979149,"animateatlas._HelperEnums.SymbolType_Impl_.boot","animateatlas/HelperEnums.hx",14,0xb5dc3bff)
HX_LOCAL_STACK_FRAME(_hx_pos_79b276fef1e2dd46_15_boot,"animateatlas._HelperEnums.SymbolType_Impl_","boot",0x17979149,"animateatlas._HelperEnums.SymbolType_Impl_.boot","animateatlas/HelperEnums.hx",15,0xb5dc3bff)
HX_LOCAL_STACK_FRAME(_hx_pos_79b276fef1e2dd46_16_boot,"animateatlas._HelperEnums.SymbolType_Impl_","boot",0x17979149,"animateatlas._HelperEnums.SymbolType_Impl_.boot","animateatlas/HelperEnums.hx",16,0xb5dc3bff)
namespace animateatlas{
namespace _HelperEnums{

void SymbolType_Impl__obj::__construct() { }

Dynamic SymbolType_Impl__obj::__CreateEmpty() { return new SymbolType_Impl__obj; }

void *SymbolType_Impl__obj::_hx_vtable = 0;

Dynamic SymbolType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SymbolType_Impl__obj > _hx_result = new SymbolType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SymbolType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3cfbbce1;
}

::String SymbolType_Impl__obj::GRAPHIC;

::String SymbolType_Impl__obj::MOVIE_CLIP;

::String SymbolType_Impl__obj::BUTTON;

bool SymbolType_Impl__obj::isValid(::String value){
            	HX_STACKFRAME(&_hx_pos_79b276fef1e2dd46_19_isValid)
HXDLIN(  19)		bool _hx_tmp;
HXDLIN(  19)		if ((value != HX_("graphic",a8,5a,07,74))) {
HXDLIN(  19)			_hx_tmp = (value == HX_("movieclip",80,d6,41,2d));
            		}
            		else {
HXDLIN(  19)			_hx_tmp = true;
            		}
HXDLIN(  19)		if (!(_hx_tmp)) {
HXDLIN(  19)			return (value == HX_("button",f2,61,e0,d9));
            		}
            		else {
HXDLIN(  19)			return true;
            		}
HXDLIN(  19)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SymbolType_Impl__obj,isValid,return )


SymbolType_Impl__obj::SymbolType_Impl__obj()
{
}

bool SymbolType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isValid") ) { outValue = isValid_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SymbolType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SymbolType_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SymbolType_Impl__obj::GRAPHIC,HX_("GRAPHIC",88,2e,db,f3)},
	{::hx::fsString,(void *) &SymbolType_Impl__obj::MOVIE_CLIP,HX_("MOVIE_CLIP",1f,e1,aa,77)},
	{::hx::fsString,(void *) &SymbolType_Impl__obj::BUTTON,HX_("BUTTON",f2,0d,63,8c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SymbolType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SymbolType_Impl__obj::GRAPHIC,"GRAPHIC");
	HX_MARK_MEMBER_NAME(SymbolType_Impl__obj::MOVIE_CLIP,"MOVIE_CLIP");
	HX_MARK_MEMBER_NAME(SymbolType_Impl__obj::BUTTON,"BUTTON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SymbolType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SymbolType_Impl__obj::GRAPHIC,"GRAPHIC");
	HX_VISIT_MEMBER_NAME(SymbolType_Impl__obj::MOVIE_CLIP,"MOVIE_CLIP");
	HX_VISIT_MEMBER_NAME(SymbolType_Impl__obj::BUTTON,"BUTTON");
};

#endif

::hx::Class SymbolType_Impl__obj::__mClass;

static ::String SymbolType_Impl__obj_sStaticFields[] = {
	HX_("GRAPHIC",88,2e,db,f3),
	HX_("MOVIE_CLIP",1f,e1,aa,77),
	HX_("BUTTON",f2,0d,63,8c),
	HX_("isValid",b2,18,3e,ce),
	::String(null())
};

void SymbolType_Impl__obj::__register()
{
	SymbolType_Impl__obj _hx_dummy;
	SymbolType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("animateatlas._HelperEnums.SymbolType_Impl_",b7,6a,e1,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SymbolType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SymbolType_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SymbolType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SymbolType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SymbolType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SymbolType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SymbolType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SymbolType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_79b276fef1e2dd46_14_boot)
HXDLIN(  14)		GRAPHIC = HX_("graphic",a8,5a,07,74);
            	}
{
            	HX_STACKFRAME(&_hx_pos_79b276fef1e2dd46_15_boot)
HXDLIN(  15)		MOVIE_CLIP = HX_("movieclip",80,d6,41,2d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_79b276fef1e2dd46_16_boot)
HXDLIN(  16)		BUTTON = HX_("button",f2,61,e0,d9);
            	}
}

} // end namespace animateatlas
} // end namespace _HelperEnums
