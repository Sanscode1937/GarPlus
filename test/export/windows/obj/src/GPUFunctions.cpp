#include <hxcpp.h>

#ifndef INCLUDED_GPUFunctions
#include <GPUFunctions.h>
#endif
#ifndef INCLUDED_TexAsset
#include <TexAsset.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_acc7d016459f64f7_30_getBitmaponGPU,"GPUFunctions","getBitmaponGPU",0x8d2d91e7,"GPUFunctions.getBitmaponGPU","GPUFunctions.hx",30,0x6138376f)
HX_LOCAL_STACK_FRAME(_hx_pos_acc7d016459f64f7_67_preloadTextureAsync,"GPUFunctions","preloadTextureAsync",0x20ea928b,"GPUFunctions.preloadTextureAsync","GPUFunctions.hx",67,0x6138376f)
HX_LOCAL_STACK_FRAME(_hx_pos_acc7d016459f64f7_55_preloadTextureAsync,"GPUFunctions","preloadTextureAsync",0x20ea928b,"GPUFunctions.preloadTextureAsync","GPUFunctions.hx",55,0x6138376f)
HX_LOCAL_STACK_FRAME(_hx_pos_acc7d016459f64f7_81_convertBitmap,"GPUFunctions","convertBitmap",0xe0cd4c43,"GPUFunctions.convertBitmap","GPUFunctions.hx",81,0x6138376f)
HX_LOCAL_STACK_FRAME(_hx_pos_acc7d016459f64f7_95_getATFonGPU,"GPUFunctions","getATFonGPU",0x410c5bd1,"GPUFunctions.getATFonGPU","GPUFunctions.hx",95,0x6138376f)
HX_LOCAL_STACK_FRAME(_hx_pos_acc7d016459f64f7_115_disposeAllTextures,"GPUFunctions","disposeAllTextures",0xf2502d79,"GPUFunctions.disposeAllTextures","GPUFunctions.hx",115,0x6138376f)
HX_LOCAL_STACK_FRAME(_hx_pos_acc7d016459f64f7_127_disposeTexturesByKey,"GPUFunctions","disposeTexturesByKey",0xc2e831b0,"GPUFunctions.disposeTexturesByKey","GPUFunctions.hx",127,0x6138376f)
HX_LOCAL_STACK_FRAME(_hx_pos_acc7d016459f64f7_17_boot,"GPUFunctions","boot",0x454a7651,"GPUFunctions.boot","GPUFunctions.hx",17,0x6138376f)

void GPUFunctions_obj::__construct() { }

Dynamic GPUFunctions_obj::__CreateEmpty() { return new GPUFunctions_obj; }

void *GPUFunctions_obj::_hx_vtable = 0;

Dynamic GPUFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GPUFunctions_obj > _hx_result = new GPUFunctions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GPUFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2fe92b9b;
}

::Array< ::Dynamic> GPUFunctions_obj::trackedTextures;

 ::openfl::display::BitmapData GPUFunctions_obj::getBitmaponGPU(::String path, ::Dynamic __o_texFormat,::hx::Null< bool >  __o_optimizeForRender,::String _cachekey){
            		 ::Dynamic texFormat = __o_texFormat;
            		if (::hx::IsNull(__o_texFormat)) texFormat = 1;
            		bool optimizeForRender = __o_optimizeForRender.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_acc7d016459f64f7_30_getBitmaponGPU)
HXLINE(  31)		if (::hx::IsNull( _cachekey )) {
HXLINE(  32)			_cachekey = path;
            		}
HXLINE(  34)		{
HXLINE(  34)			int _g = 0;
HXDLIN(  34)			::Array< ::Dynamic> _g1 = ::GPUFunctions_obj::trackedTextures;
HXDLIN(  34)			while((_g < _g1->length)){
HXLINE(  34)				 ::TexAsset tex = _g1->__get(_g).StaticCast<  ::TexAsset >();
HXDLIN(  34)				_g = (_g + 1);
HXLINE(  35)				if ((tex->cacheKey == _cachekey)) {
HXLINE(  37)					::haxe::Log_obj::trace(((HX_("Texture ",05,b3,80,3f) + _cachekey) + HX_(" already exists! Reusing existing tex",a4,85,b1,f1)),::hx::SourceInfo(HX_("source/GPUFunctions.hx",fb,1a,36,fe),37,HX_("GPUFunctions",af,a2,28,b0),HX_("getBitmaponGPU",08,23,2d,67)));
HXLINE(  38)					return ::openfl::display::BitmapData_obj::fromTexture(tex->texture);
            				}
            			}
            		}
HXLINE(  40)		::haxe::Log_obj::trace(HX_("creating new texture",b4,e9,c9,14),::hx::SourceInfo(HX_("source/GPUFunctions.hx",fb,1a,36,fe),40,HX_("GPUFunctions",af,a2,28,b0),HX_("getBitmaponGPU",08,23,2d,67)));
HXLINE(  41)		 ::openfl::display::BitmapData bmp = ::openfl::utils::Assets_obj::getBitmapData(path,false);
HXLINE(  42)		 ::openfl::display3D::textures::Texture _texture = ::openfl::Lib_obj::get_current()->stage->context3D->createTexture(bmp->width,bmp->height,texFormat,optimizeForRender,null());
HXLINE(  43)		_texture->uploadFromBitmapData(bmp,null(),null());
HXLINE(  45)		bmp->dispose();
HXLINE(  46)		bmp->disposeImage();
HXLINE(  47)		bmp = null();
HXLINE(  49)		 ::TexAsset trackedTex =  ::TexAsset_obj::__alloc( HX_CTX ,_texture,_cachekey);
HXLINE(  50)		::GPUFunctions_obj::trackedTextures->push(trackedTex);
HXLINE(  51)		return ::openfl::display::BitmapData_obj::fromTexture(_texture);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GPUFunctions_obj,getBitmaponGPU,return )

void GPUFunctions_obj::preloadTextureAsync(::String path, ::Dynamic onComplete, ::Dynamic __o_texFormat,::hx::Null< bool >  __o_optimizeForRender,::String _cachekey){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onComplete, ::Dynamic,texFormat,::Array< ::String >,_cachekey1,bool,optimizeForRender) HXARGC(1)
            		void _hx_run( ::openfl::display::BitmapData _bmp){
            			HX_GC_STACKFRAME(&_hx_pos_acc7d016459f64f7_67_preloadTextureAsync)
HXLINE(  68)			 ::openfl::display3D::textures::Texture _texture = ::openfl::Lib_obj::get_current()->stage->context3D->createTexture(_bmp->width,_bmp->height,texFormat,optimizeForRender,null());
HXLINE(  69)			_texture->uploadFromBitmapData(_bmp,null(),null());
HXLINE(  70)			_bmp->dispose();
HXLINE(  71)			_bmp->disposeImage();
HXLINE(  72)			_bmp = null();
HXLINE(  73)			 ::TexAsset trackedTex =  ::TexAsset_obj::__alloc( HX_CTX ,_texture,_cachekey1->__get(0));
HXLINE(  74)			::GPUFunctions_obj::trackedTextures->push(trackedTex);
HXLINE(  75)			onComplete();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		 ::Dynamic texFormat = __o_texFormat;
            		if (::hx::IsNull(__o_texFormat)) texFormat = 1;
            		bool optimizeForRender = __o_optimizeForRender.Default(false);
            	HX_STACKFRAME(&_hx_pos_acc7d016459f64f7_55_preloadTextureAsync)
HXDLIN(  55)		::Array< ::String > _cachekey1 = ::Array_obj< ::String >::__new(1)->init(0,_cachekey);
HXLINE(  56)		if (::hx::IsNull( _cachekey1->__get(0) )) {
HXLINE(  57)			_cachekey1[0] = path;
            		}
HXLINE(  59)		{
HXLINE(  59)			int _g = 0;
HXDLIN(  59)			::Array< ::Dynamic> _g1 = ::GPUFunctions_obj::trackedTextures;
HXDLIN(  59)			while((_g < _g1->length)){
HXLINE(  59)				 ::TexAsset tex = _g1->__get(_g).StaticCast<  ::TexAsset >();
HXDLIN(  59)				_g = (_g + 1);
HXLINE(  60)				if ((tex->cacheKey == _cachekey1->__get(0))) {
HXLINE(  62)					::haxe::Log_obj::trace(((HX_("Texture ",05,b3,80,3f) + _cachekey1->__get(0)) + HX_(" already exists!",1d,5a,ba,6a)),::hx::SourceInfo(HX_("source/GPUFunctions.hx",fb,1a,36,fe),62,HX_("GPUFunctions",af,a2,28,b0),HX_("preloadTextureAsync",ca,49,a4,9b)));
HXLINE(  63)					return;
            				}
            			}
            		}
HXLINE(  66)		::openfl::utils::Assets_obj::loadBitmapData(path,false)->onComplete( ::Dynamic(new _hx_Closure_0(onComplete,texFormat,_cachekey1,optimizeForRender)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GPUFunctions_obj,preloadTextureAsync,(void))

 ::openfl::display::BitmapData GPUFunctions_obj::convertBitmap( ::openfl::display::BitmapData _bmp,::String __o_key){
            		::String key = __o_key;
            		if (::hx::IsNull(__o_key)) key = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_acc7d016459f64f7_81_convertBitmap)
HXLINE(  82)		 ::openfl::display3D::textures::Texture _texture = ::openfl::Lib_obj::get_current()->stage->context3D->createTexture(_bmp->width,_bmp->height,1,false,null());
HXLINE(  83)		_texture->uploadFromBitmapData(_bmp,null(),null());
HXLINE(  84)		_bmp->dispose();
HXLINE(  85)		_bmp->disposeImage();
HXLINE(  87)		::Array< ::Dynamic> _hx_tmp = ::GPUFunctions_obj::trackedTextures;
HXDLIN(  87)		_hx_tmp->push( ::TexAsset_obj::__alloc( HX_CTX ,_texture,key));
HXLINE(  88)		return ::openfl::display::BitmapData_obj::fromTexture(_texture);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GPUFunctions_obj,convertBitmap,return )

 ::openfl::display::BitmapData GPUFunctions_obj::getATFonGPU(::String path,int _width,int _height, ::Dynamic __o_texFormat,::hx::Null< bool >  __o_optimizeForRender,::String _cachekey){
            		 ::Dynamic texFormat = __o_texFormat;
            		if (::hx::IsNull(__o_texFormat)) texFormat = 4;
            		bool optimizeForRender = __o_optimizeForRender.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_acc7d016459f64f7_95_getATFonGPU)
HXLINE(  96)		if (::hx::IsNull( _cachekey )) {
HXLINE(  97)			_cachekey = path;
            		}
HXLINE(  99)		{
HXLINE(  99)			int _g = 0;
HXDLIN(  99)			::Array< ::Dynamic> _g1 = ::GPUFunctions_obj::trackedTextures;
HXDLIN(  99)			while((_g < _g1->length)){
HXLINE(  99)				 ::TexAsset tex = _g1->__get(_g).StaticCast<  ::TexAsset >();
HXDLIN(  99)				_g = (_g + 1);
HXLINE( 100)				if ((tex->cacheKey == _cachekey)) {
HXLINE( 102)					::haxe::Log_obj::trace(((HX_("Texture ",05,b3,80,3f) + _cachekey) + HX_(" already exists! Reusing existing tex",a4,85,b1,f1)),::hx::SourceInfo(HX_("source/GPUFunctions.hx",fb,1a,36,fe),102,HX_("GPUFunctions",af,a2,28,b0),HX_("getATFonGPU",10,3c,7d,a6)));
HXLINE( 103)					return ::openfl::display::BitmapData_obj::fromTexture(tex->texture);
            				}
            			}
            		}
HXLINE( 106)		 ::openfl::display3D::textures::Texture _texture = ::openfl::Lib_obj::get_current()->stage->context3D->createTexture(_width,_height,texFormat,optimizeForRender,null());
HXLINE( 107)		::haxe::Log_obj::trace((HX_("creating ATF texture ",f9,3d,36,30) + path),::hx::SourceInfo(HX_("source/GPUFunctions.hx",fb,1a,36,fe),107,HX_("GPUFunctions",af,a2,28,b0),HX_("getATFonGPU",10,3c,7d,a6)));
HXLINE( 108)		_texture->uploadCompressedTextureFromByteArray(::openfl::utils::Assets_obj::getBytes(path),0,null());
HXLINE( 109)		 ::TexAsset trackedTex =  ::TexAsset_obj::__alloc( HX_CTX ,_texture,_cachekey);
HXLINE( 110)		::GPUFunctions_obj::trackedTextures->push(trackedTex);
HXLINE( 111)		return ::openfl::display::BitmapData_obj::fromTexture(_texture);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GPUFunctions_obj,getATFonGPU,return )

void GPUFunctions_obj::disposeAllTextures(){
            	HX_STACKFRAME(&_hx_pos_acc7d016459f64f7_115_disposeAllTextures)
HXLINE( 116)		int counter = 0;
HXLINE( 117)		{
HXLINE( 117)			int _g = 0;
HXDLIN( 117)			::Array< ::Dynamic> _g1 = ::GPUFunctions_obj::trackedTextures;
HXDLIN( 117)			while((_g < _g1->length)){
HXLINE( 117)				 ::TexAsset texture = _g1->__get(_g).StaticCast<  ::TexAsset >();
HXDLIN( 117)				_g = (_g + 1);
HXLINE( 119)				texture->texture->dispose();
HXLINE( 120)				::GPUFunctions_obj::trackedTextures->remove(texture);
HXLINE( 121)				counter = (counter + 1);
            			}
            		}
HXLINE( 123)		::haxe::Log_obj::trace(((HX_("Disposed ",7b,5d,b8,29) + counter) + HX_(" textures",58,17,fc,c3)),::hx::SourceInfo(HX_("source/GPUFunctions.hx",fb,1a,36,fe),123,HX_("GPUFunctions",af,a2,28,b0),HX_("disposeAllTextures",1a,63,25,52)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GPUFunctions_obj,disposeAllTextures,(void))

void GPUFunctions_obj::disposeTexturesByKey(::String key){
            	HX_STACKFRAME(&_hx_pos_acc7d016459f64f7_127_disposeTexturesByKey)
HXLINE( 128)		int counter = 0;
HXLINE( 129)		{
HXLINE( 129)			int _g = 0;
HXDLIN( 129)			::Array< ::Dynamic> _g1 = ::GPUFunctions_obj::trackedTextures;
HXDLIN( 129)			while((_g < _g1->length)){
HXLINE( 129)				 ::TexAsset texture = _g1->__get(_g).StaticCast<  ::TexAsset >();
HXDLIN( 129)				_g = (_g + 1);
HXLINE( 131)				if ((texture->cacheKey.indexOf(key,null()) != -1)) {
HXLINE( 133)					texture->texture->dispose();
HXLINE( 134)					::GPUFunctions_obj::trackedTextures->remove(texture);
HXLINE( 135)					counter = (counter + 1);
            				}
            			}
            		}
HXLINE( 138)		::haxe::Log_obj::trace((((HX_("Disposed ",7b,5d,b8,29) + counter) + HX_(" textures using key ",c5,c5,f8,c8)) + key),::hx::SourceInfo(HX_("source/GPUFunctions.hx",fb,1a,36,fe),138,HX_("GPUFunctions",af,a2,28,b0),HX_("disposeTexturesByKey",91,d1,ae,aa)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GPUFunctions_obj,disposeTexturesByKey,(void))


GPUFunctions_obj::GPUFunctions_obj()
{
}

bool GPUFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getATFonGPU") ) { outValue = getATFonGPU_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertBitmap") ) { outValue = convertBitmap_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBitmaponGPU") ) { outValue = getBitmaponGPU_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trackedTextures") ) { outValue = ( trackedTextures ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"disposeAllTextures") ) { outValue = disposeAllTextures_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadTextureAsync") ) { outValue = preloadTextureAsync_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"disposeTexturesByKey") ) { outValue = disposeTexturesByKey_dyn(); return true; }
	}
	return false;
}

bool GPUFunctions_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"trackedTextures") ) { trackedTextures=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GPUFunctions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GPUFunctions_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &GPUFunctions_obj::trackedTextures,HX_("trackedTextures",02,4d,50,6e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GPUFunctions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GPUFunctions_obj::trackedTextures,"trackedTextures");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GPUFunctions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GPUFunctions_obj::trackedTextures,"trackedTextures");
};

#endif

::hx::Class GPUFunctions_obj::__mClass;

static ::String GPUFunctions_obj_sStaticFields[] = {
	HX_("trackedTextures",02,4d,50,6e),
	HX_("getBitmaponGPU",08,23,2d,67),
	HX_("preloadTextureAsync",ca,49,a4,9b),
	HX_("convertBitmap",42,fa,65,2c),
	HX_("getATFonGPU",10,3c,7d,a6),
	HX_("disposeAllTextures",1a,63,25,52),
	HX_("disposeTexturesByKey",91,d1,ae,aa),
	::String(null())
};

void GPUFunctions_obj::__register()
{
	GPUFunctions_obj _hx_dummy;
	GPUFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GPUFunctions",af,a2,28,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GPUFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &GPUFunctions_obj::__SetStatic;
	__mClass->mMarkFunc = GPUFunctions_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GPUFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GPUFunctions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GPUFunctions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GPUFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GPUFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GPUFunctions_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_acc7d016459f64f7_17_boot)
HXDLIN(  17)		trackedTextures = ::Array_obj< ::Dynamic>::__new();
            	}
}

