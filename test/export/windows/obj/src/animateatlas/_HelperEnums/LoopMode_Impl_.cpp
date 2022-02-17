#include <hxcpp.h>

#ifndef INCLUDED_animateatlas__HelperEnums_LoopMode_Impl_
#include <animateatlas/_HelperEnums/LoopMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_803fb2a42fd13502_9_isValid,"animateatlas._HelperEnums.LoopMode_Impl_","isValid",0x0c460130,"animateatlas._HelperEnums.LoopMode_Impl_.isValid","animateatlas/HelperEnums.hx",9,0xb5dc3bff)
HX_LOCAL_STACK_FRAME(_hx_pos_803fb2a42fd13502_4_boot,"animateatlas._HelperEnums.LoopMode_Impl_","boot",0xc01480f4,"animateatlas._HelperEnums.LoopMode_Impl_.boot","animateatlas/HelperEnums.hx",4,0xb5dc3bff)
HX_LOCAL_STACK_FRAME(_hx_pos_803fb2a42fd13502_5_boot,"animateatlas._HelperEnums.LoopMode_Impl_","boot",0xc01480f4,"animateatlas._HelperEnums.LoopMode_Impl_.boot","animateatlas/HelperEnums.hx",5,0xb5dc3bff)
HX_LOCAL_STACK_FRAME(_hx_pos_803fb2a42fd13502_6_boot,"animateatlas._HelperEnums.LoopMode_Impl_","boot",0xc01480f4,"animateatlas._HelperEnums.LoopMode_Impl_.boot","animateatlas/HelperEnums.hx",6,0xb5dc3bff)
namespace animateatlas{
namespace _HelperEnums{

void LoopMode_Impl__obj::__construct() { }

Dynamic LoopMode_Impl__obj::__CreateEmpty() { return new LoopMode_Impl__obj; }

void *LoopMode_Impl__obj::_hx_vtable = 0;

Dynamic LoopMode_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoopMode_Impl__obj > _hx_result = new LoopMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LoopMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10e444fa;
}

::String LoopMode_Impl__obj::LOOP;

::String LoopMode_Impl__obj::PLAY_ONCE;

::String LoopMode_Impl__obj::SINGLE_FRAME;

bool LoopMode_Impl__obj::isValid(::String value){
            	HX_STACKFRAME(&_hx_pos_803fb2a42fd13502_9_isValid)
HXDLIN(   9)		bool _hx_tmp;
HXDLIN(   9)		if ((value != HX_("loop",64,a6,b7,47))) {
HXDLIN(   9)			_hx_tmp = (value == HX_("playonce",75,b5,ec,4e));
            		}
            		else {
HXDLIN(   9)			_hx_tmp = true;
            		}
HXDLIN(   9)		if (!(_hx_tmp)) {
HXDLIN(   9)			return (value == HX_("singleframe",a5,64,19,5d));
            		}
            		else {
HXDLIN(   9)			return true;
            		}
HXDLIN(   9)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoopMode_Impl__obj,isValid,return )


LoopMode_Impl__obj::LoopMode_Impl__obj()
{
}

bool LoopMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isValid") ) { outValue = isValid_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LoopMode_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LoopMode_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &LoopMode_Impl__obj::LOOP,HX_("LOOP",64,6e,78,32)},
	{::hx::fsString,(void *) &LoopMode_Impl__obj::PLAY_ONCE,HX_("PLAY_ONCE",ec,56,a5,f2)},
	{::hx::fsString,(void *) &LoopMode_Impl__obj::SINGLE_FRAME,HX_("SINGLE_FRAME",d6,9f,bd,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void LoopMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoopMode_Impl__obj::LOOP,"LOOP");
	HX_MARK_MEMBER_NAME(LoopMode_Impl__obj::PLAY_ONCE,"PLAY_ONCE");
	HX_MARK_MEMBER_NAME(LoopMode_Impl__obj::SINGLE_FRAME,"SINGLE_FRAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoopMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoopMode_Impl__obj::LOOP,"LOOP");
	HX_VISIT_MEMBER_NAME(LoopMode_Impl__obj::PLAY_ONCE,"PLAY_ONCE");
	HX_VISIT_MEMBER_NAME(LoopMode_Impl__obj::SINGLE_FRAME,"SINGLE_FRAME");
};

#endif

::hx::Class LoopMode_Impl__obj::__mClass;

static ::String LoopMode_Impl__obj_sStaticFields[] = {
	HX_("LOOP",64,6e,78,32),
	HX_("PLAY_ONCE",ec,56,a5,f2),
	HX_("SINGLE_FRAME",d6,9f,bd,d8),
	HX_("isValid",b2,18,3e,ce),
	::String(null())
};

void LoopMode_Impl__obj::__register()
{
	LoopMode_Impl__obj _hx_dummy;
	LoopMode_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("animateatlas._HelperEnums.LoopMode_Impl_",ec,9a,40,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoopMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LoopMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LoopMode_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LoopMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoopMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoopMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoopMode_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LoopMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_803fb2a42fd13502_4_boot)
HXDLIN(   4)		LOOP = HX_("loop",64,a6,b7,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_803fb2a42fd13502_5_boot)
HXDLIN(   5)		PLAY_ONCE = HX_("playonce",75,b5,ec,4e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_803fb2a42fd13502_6_boot)
HXDLIN(   6)		SINGLE_FRAME = HX_("singleframe",a5,64,19,5d);
            	}
}

} // end namespace animateatlas
} // end namespace _HelperEnums
