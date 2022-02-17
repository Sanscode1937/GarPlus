#include <hxcpp.h>

#ifndef INCLUDED_FlxGridOverlay
#include <FlxGridOverlay.h>
#endif
#ifndef INCLUDED_TextureAtlas
#include <TextureAtlas.h>
#endif
#ifndef INCLUDED_TextureTest
#include <TextureTest.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_42ea5a05d9f6b5bd_12_new,"TextureTest","new",0xfec05a1f,"TextureTest.new","TextureTest.hx",12,0x89c08e31)
HX_LOCAL_STACK_FRAME(_hx_pos_42ea5a05d9f6b5bd_39_create,"TextureTest","create",0x559e3e9d,"TextureTest.create","TextureTest.hx",39,0x89c08e31)
HX_LOCAL_STACK_FRAME(_hx_pos_42ea5a05d9f6b5bd_19_create,"TextureTest","create",0x559e3e9d,"TextureTest.create","TextureTest.hx",19,0x89c08e31)
HX_LOCAL_STACK_FRAME(_hx_pos_42ea5a05d9f6b5bd_58_numArr,"TextureTest","numArr",0x7af05f5c,"TextureTest.numArr","TextureTest.hx",58,0x89c08e31)

void TextureTest_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_42ea5a05d9f6b5bd_12_new)
HXLINE(  16)		this->paused = false;
HXLINE(  14)		this->curSelected = 0;
HXLINE(  12)		super::__construct(MaxSize);
            	}

Dynamic TextureTest_obj::__CreateEmpty() { return new TextureTest_obj; }

void *TextureTest_obj::_hx_vtable = 0;

Dynamic TextureTest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextureTest_obj > _hx_result = new TextureTest_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextureTest_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x03ffbde9) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03ffbde9;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void TextureTest_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(3)
            		void _hx_run(::String idle,int frameNumber,int frameIndex){
            			HX_GC_STACKFRAME(&_hx_pos_42ea5a05d9f6b5bd_39_create)
HXLINE(  40)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  40)			if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE(  42)				frameNumber = -1;
            			}
HXLINE(  44)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  44)			if (_this1->keyManager->checkStatus(39,_this1->status)) {
HXLINE(  46)				frameNumber = 1;
            			}
            		}
            		HX_END_LOCAL_FUNC3((void))

            	HX_GC_STACKFRAME(&_hx_pos_42ea5a05d9f6b5bd_19_create)
HXLINE(  21)		 ::flixel::FlxSprite a = ::FlxGridOverlay_obj::create(10,10,null(),null(),null(),null(),null());
HXLINE(  22)		a->scrollFactor->set(((Float).5),((Float).5));
HXLINE(  23)		this->add(a);
HXLINE(  24)		this->debugTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,900,20,0,HX_("",00,00,00,00),20,null());
HXLINE(  25)		this->debugTxt->set_color(-16776961);
HXLINE(  26)		this->add(this->debugTxt);
HXLINE(  27)		int basedX = 100;
HXLINE(  28)		int basedY = 134;
HXLINE(  30)		 ::flixel::FlxSprite prototypeTest =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,100,134,null());
HXLINE(  32)		prototypeTest->set_frames(::TextureAtlas_obj::construct(HX_("assets/images/tightBars",33,fa,8b,f9),null()));
HXLINE(  33)		 ::flixel::animation::FlxAnimationController prototypeTest1 = prototypeTest->animation;
HXDLIN(  33)		prototypeTest1->add(HX_("tightBars",3e,0f,ba,51),this->numArr(1,324),30,false,null(),null());
HXLINE(  34)		prototypeTest->set_antialiasing(true);
HXLINE(  35)		this->add(prototypeTest);
HXLINE(  36)		prototypeTest->animation->play(HX_("tightBars",3e,0f,ba,51),null(),null(),null());
HXLINE(  38)		prototypeTest->animation->callback =  ::Dynamic(new _hx_Closure_0());
HXLINE(  49)		if ((::flixel::FlxG_obj::mouse->wheel != 0)) {
HXLINE(  52)			 ::flixel::FlxCamera fh = ::flixel::FlxG_obj::camera;
HXDLIN(  52)			fh->set_zoom((fh->zoom + (( (Float)(::flixel::FlxG_obj::mouse->wheel) ) / ( (Float)(10) ))));
            		}
            	}


::Array< int > TextureTest_obj::numArr(int min,int max){
            	HX_STACKFRAME(&_hx_pos_42ea5a05d9f6b5bd_58_numArr)
HXLINE(  59)		::Array< int > a = ::Array_obj< int >::__new(0);
HXLINE(  60)		int l = (max - min);
HXLINE(  61)		int p = min;
HXLINE(  62)		{
HXLINE(  62)			int _g = 0;
HXDLIN(  62)			int _g1 = l;
HXDLIN(  62)			while((_g < _g1)){
HXLINE(  62)				_g = (_g + 1);
HXDLIN(  62)				int i = (_g - 1);
HXLINE(  63)				a->push(p);
HXLINE(  64)				p = (p + 1);
            			}
            		}
HXLINE(  66)		::haxe::Log_obj::trace(a,::hx::SourceInfo(HX_("source/TextureTest.hx",25,60,5a,53),66,HX_("TextureTest",ad,5e,ab,e7),HX_("numArr",bb,87,61,a1)));
HXLINE(  67)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextureTest_obj,numArr,return )


::hx::ObjectPtr< TextureTest_obj > TextureTest_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< TextureTest_obj > __this = new TextureTest_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< TextureTest_obj > TextureTest_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	TextureTest_obj *__this = (TextureTest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextureTest_obj), true, "TextureTest"));
	*(void **)__this = TextureTest_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

TextureTest_obj::TextureTest_obj()
{
}

void TextureTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureTest);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(debugTxt,"debugTxt");
	HX_MARK_MEMBER_NAME(paused,"paused");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureTest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(debugTxt,"debugTxt");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextureTest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"numArr") ) { return ::hx::Val( numArr_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugTxt") ) { return ::hx::Val( debugTxt ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextureTest_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugTxt") ) { debugTxt=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("debugTxt",dd,c9,dc,90));
	outFields->push(HX_("paused",ae,40,84,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextureTest_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TextureTest_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(TextureTest_obj,debugTxt),HX_("debugTxt",dd,c9,dc,90)},
	{::hx::fsBool,(int)offsetof(TextureTest_obj,paused),HX_("paused",ae,40,84,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextureTest_obj_sStaticStorageInfo = 0;
#endif

static ::String TextureTest_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("debugTxt",dd,c9,dc,90),
	HX_("paused",ae,40,84,ef),
	HX_("create",fc,66,0f,7c),
	HX_("numArr",bb,87,61,a1),
	::String(null()) };

::hx::Class TextureTest_obj::__mClass;

void TextureTest_obj::__register()
{
	TextureTest_obj _hx_dummy;
	TextureTest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TextureTest",ad,5e,ab,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextureTest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextureTest_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureTest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureTest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

