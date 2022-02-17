#include <hxcpp.h>

#ifndef INCLUDED_TexAsset
#include <TexAsset.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0440cd274a2b6e41_146_new,"TexAsset","new",0xc7d41c1b,"TexAsset.new","GPUFunctions.hx",146,0x6138376f)

void TexAsset_obj::__construct( ::openfl::display3D::textures::Texture texture,::String cacheKey){
            	HX_STACKFRAME(&_hx_pos_0440cd274a2b6e41_146_new)
HXLINE( 147)		this->texture = texture;
HXLINE( 148)		this->cacheKey = cacheKey;
            	}

Dynamic TexAsset_obj::__CreateEmpty() { return new TexAsset_obj; }

void *TexAsset_obj::_hx_vtable = 0;

Dynamic TexAsset_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TexAsset_obj > _hx_result = new TexAsset_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TexAsset_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c506569;
}


::hx::ObjectPtr< TexAsset_obj > TexAsset_obj::__new( ::openfl::display3D::textures::Texture texture,::String cacheKey) {
	::hx::ObjectPtr< TexAsset_obj > __this = new TexAsset_obj();
	__this->__construct(texture,cacheKey);
	return __this;
}

::hx::ObjectPtr< TexAsset_obj > TexAsset_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::textures::Texture texture,::String cacheKey) {
	TexAsset_obj *__this = (TexAsset_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TexAsset_obj), true, "TexAsset"));
	*(void **)__this = TexAsset_obj::_hx_vtable;
	__this->__construct(texture,cacheKey);
	return __this;
}

TexAsset_obj::TexAsset_obj()
{
}

void TexAsset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TexAsset);
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(cacheKey,"cacheKey");
	HX_MARK_END_CLASS();
}

void TexAsset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(cacheKey,"cacheKey");
}

::hx::Val TexAsset_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cacheKey") ) { return ::hx::Val( cacheKey ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TexAsset_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast<  ::openfl::display3D::textures::Texture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cacheKey") ) { cacheKey=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TexAsset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("cacheKey",7d,fc,20,9a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TexAsset_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display3D::textures::Texture */ ,(int)offsetof(TexAsset_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsString,(int)offsetof(TexAsset_obj,cacheKey),HX_("cacheKey",7d,fc,20,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TexAsset_obj_sStaticStorageInfo = 0;
#endif

static ::String TexAsset_obj_sMemberFields[] = {
	HX_("texture",db,c8,e0,9e),
	HX_("cacheKey",7d,fc,20,9a),
	::String(null()) };

::hx::Class TexAsset_obj::__mClass;

void TexAsset_obj::__register()
{
	TexAsset_obj _hx_dummy;
	TexAsset_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TexAsset",a9,72,bf,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TexAsset_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TexAsset_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TexAsset_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TexAsset_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

