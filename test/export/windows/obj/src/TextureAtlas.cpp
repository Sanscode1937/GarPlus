#include <hxcpp.h>

#ifndef INCLUDED_GPUFunctions
#include <GPUFunctions.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TextureAtlas
#include <TextureAtlas.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteAnimationLibrary
#include <animateatlas/displayobject/SpriteAnimationLibrary.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteMovieClip
#include <animateatlas/displayobject/SpriteMovieClip.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_22f80f9386d01ea8_25_new,"TextureAtlas","new",0x70196f82,"TextureAtlas.new","TextureAtlas.hx",25,0xa012762e)
HX_LOCAL_STACK_FRAME(_hx_pos_22f80f9386d01ea8_40_construct,"TextureAtlas","construct",0xbbcdfcb9,"TextureAtlas.construct","TextureAtlas.hx",40,0xa012762e)
HX_LOCAL_STACK_FRAME(_hx_pos_22f80f9386d01ea8_91_getFramesArray,"TextureAtlas","getFramesArray",0xd1f6573b,"TextureAtlas.getFramesArray","TextureAtlas.hx",91,0xa012762e)

void TextureAtlas_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border){
            	HX_STACKFRAME(&_hx_pos_22f80f9386d01ea8_25_new)
HXDLIN(  25)		super::__construct(parent,type,border);
            	}

Dynamic TextureAtlas_obj::__CreateEmpty() { return new TextureAtlas_obj; }

void *TextureAtlas_obj::_hx_vtable = 0;

Dynamic TextureAtlas_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextureAtlas_obj > _hx_result = new TextureAtlas_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TextureAtlas_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02bb00b4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02bb00b4;
	} else {
		return inClassId==(int)0x7907b929;
	}
}

 ::flixel::graphics::frames::FlxFramesCollection TextureAtlas_obj::construct(::String key,::Array< ::String > _excludeArray){
            	HX_GC_STACKFRAME(&_hx_pos_22f80f9386d01ea8_40_construct)
HXLINE(  45)		::Array< ::Dynamic> frameArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  60)		 ::Dynamic animationData =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getText((key + HX_("/Animation.json",61,fc,54,44))))->doParse();
HXLINE(  61)		 ::Dynamic atlasData =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getText((key + HX_("/spritemap.json",ae,2e,a7,76))))->doParse();
HXLINE(  62)		 ::openfl::display::BitmapData bitmapData = ::openfl::utils::Assets_obj::getBitmapData((key + HX_("/spritemap.png",e3,e2,cb,57)),null());
HXLINE(  63)		 ::animateatlas::displayobject::SpriteAnimationLibrary ss =  ::animateatlas::displayobject::SpriteAnimationLibrary_obj::__alloc( HX_CTX ,animationData,atlasData,bitmapData);
HXLINE(  64)		 ::animateatlas::displayobject::SpriteMovieClip t = ss->createAnimation(null());
HXLINE(  65)		if (::hx::IsNull( _excludeArray )) {
HXLINE(  67)			_excludeArray = t->getFrameLabels();
            		}
            		else {
HXLINE(  71)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  71)			::String _hx_tmp1 = (HX_("Creating :",b3,a7,03,b5) + ::Std_obj::string(_excludeArray));
HXDLIN(  71)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/TextureAtlas.hx",ba,59,10,3d),71,HX_("TextureAtlas",90,46,8f,e7),HX_("construct",17,58,ad,4f)));
            		}
HXLINE(  44)		 ::flixel::graphics::frames::FlxFramesCollection frameCollection =  ::flixel::graphics::frames::FlxFramesCollection_obj::__alloc( HX_CTX ,::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmapData,null(),null(),null()),::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn(),null());
HXLINE(  74)		{
HXLINE(  74)			int _g = 0;
HXDLIN(  74)			while((_g < _excludeArray->length)){
HXLINE(  74)				::String x = _excludeArray->__get(_g);
HXDLIN(  74)				_g = (_g + 1);
HXLINE(  76)				frameArray->push(::TextureAtlas_obj::getFramesArray(t,x,key));
            			}
            		}
HXLINE(  79)		{
HXLINE(  79)			int _g1 = 0;
HXDLIN(  79)			while((_g1 < frameArray->length)){
HXLINE(  79)				::Array< ::Dynamic> x = frameArray->__get(_g1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  79)				_g1 = (_g1 + 1);
HXLINE(  81)				{
HXLINE(  81)					int _g = 0;
HXDLIN(  81)					while((_g < x->length)){
HXLINE(  81)						 ::flixel::graphics::frames::FlxFrame y = x->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN(  81)						_g = (_g + 1);
HXLINE(  83)						frameCollection->pushFrame(y);
            					}
            				}
            			}
            		}
HXLINE(  86)		bitmapData->dispose();
HXLINE(  87)		return frameCollection;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextureAtlas_obj,construct,return )

::Array< ::Dynamic> TextureAtlas_obj::getFramesArray( ::animateatlas::displayobject::SpriteMovieClip t,::String animation,::String __o_key){
            		::String key = __o_key;
            		if (::hx::IsNull(__o_key)) key = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_22f80f9386d01ea8_91_getFramesArray)
HXLINE(  92)		 ::openfl::geom::Rectangle sizeInfo =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,null(),null());
HXLINE(  93)		t->set_currentLabel(animation);
HXLINE(  94)		::Array< ::Dynamic> bitMapArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  95)		::Array< ::Dynamic> daFramez = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  96)		bool firstPass = true;
HXLINE(  97)		 ::flixel::math::FlxPoint frameSize =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,0);
HXLINE(  99)		{
HXLINE(  99)			int _g = t->getFrame(animation);
HXDLIN(  99)			int _g1 = t->get_numFrames();
HXDLIN(  99)			while((_g < _g1)){
HXLINE(  99)				_g = (_g + 1);
HXDLIN(  99)				int i = (_g - 1);
HXLINE( 101)				t->set_currentFrame(i);
HXLINE( 102)				if ((t->get_currentLabel() == animation)) {
HXLINE( 104)					sizeInfo = t->getBounds(t);
HXLINE( 105)					int bitmapShit = ::Std_obj::_hx_int((sizeInfo->width + sizeInfo->x));
HXDLIN( 105)					 ::openfl::display::BitmapData bitmapShit1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapShit,::Std_obj::_hx_int((sizeInfo->height + sizeInfo->y)),true,0);
HXLINE( 106)					bitmapShit1->draw(t,null(),null(),null(),null(),true);
HXLINE( 107)					bitmapShit1 = ::GPUFunctions_obj::convertBitmap(bitmapShit1,key);
HXLINE( 108)					bitMapArray->push(bitmapShit1);
HXLINE( 109)					if (firstPass) {
HXLINE( 111)						frameSize->set(bitmapShit1->width,bitmapShit1->height);
HXLINE( 112)						firstPass = false;
            					}
            				}
            				else {
HXLINE( 116)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 119)		{
HXLINE( 119)			int _g2 = 0;
HXDLIN( 119)			int _g3 = bitMapArray->length;
HXDLIN( 119)			while((_g2 < _g3)){
HXLINE( 119)				_g2 = (_g2 + 1);
HXDLIN( 119)				int i = (_g2 - 1);
HXLINE( 121)				 ::flixel::graphics::FlxGraphic b = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitMapArray->__get(i).StaticCast<  ::openfl::display::BitmapData >(),null(),null(),null());
HXLINE( 122)				 ::flixel::graphics::frames::FlxFrame theFrame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,b,null(),null(),null());
HXLINE( 123)				theFrame->parent = b;
HXLINE( 124)				theFrame->name = (animation + i);
HXLINE( 125)				theFrame->sourceSize->set(frameSize->x,frameSize->y);
HXLINE( 126)				theFrame->set_frame( ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,0,0,bitMapArray->__get(i).StaticCast<  ::openfl::display::BitmapData >()->width,bitMapArray->__get(i).StaticCast<  ::openfl::display::BitmapData >()->height));
HXLINE( 127)				daFramez->push(theFrame);
            			}
            		}
HXLINE( 131)		return daFramez;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TextureAtlas_obj,getFramesArray,return )


::hx::ObjectPtr< TextureAtlas_obj > TextureAtlas_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border) {
	::hx::ObjectPtr< TextureAtlas_obj > __this = new TextureAtlas_obj();
	__this->__construct(parent,type,border);
	return __this;
}

::hx::ObjectPtr< TextureAtlas_obj > TextureAtlas_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border) {
	TextureAtlas_obj *__this = (TextureAtlas_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextureAtlas_obj), true, "TextureAtlas"));
	*(void **)__this = TextureAtlas_obj::_hx_vtable;
	__this->__construct(parent,type,border);
	return __this;
}

TextureAtlas_obj::TextureAtlas_obj()
{
}

bool TextureAtlas_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"construct") ) { outValue = construct_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFramesArray") ) { outValue = getFramesArray_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextureAtlas_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextureAtlas_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TextureAtlas_obj::__mClass;

static ::String TextureAtlas_obj_sStaticFields[] = {
	HX_("construct",17,58,ad,4f),
	HX_("getFramesArray",1d,07,19,e5),
	::String(null())
};

void TextureAtlas_obj::__register()
{
	TextureAtlas_obj _hx_dummy;
	TextureAtlas_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TextureAtlas",90,46,8f,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextureAtlas_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextureAtlas_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextureAtlas_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureAtlas_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureAtlas_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

