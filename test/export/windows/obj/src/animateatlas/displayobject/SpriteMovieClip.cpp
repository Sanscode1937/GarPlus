#include <hxcpp.h>

#ifndef INCLUDED_animateatlas_displayobject_SpriteAnimationLibrary
#include <animateatlas/displayobject/SpriteAnimationLibrary.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteMovieClip
#include <animateatlas/displayobject/SpriteMovieClip.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteSymbol
#include <animateatlas/displayobject/SpriteSymbol.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0677013a02f1aeca_8_new,"animateatlas.displayobject.SpriteMovieClip","new",0x97c23b5c,"animateatlas.displayobject.SpriteMovieClip.new","animateatlas/displayobject/SpriteMovieClip.hx",8,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_30_update,"animateatlas.displayobject.SpriteMovieClip","update",0x7f87208d,"animateatlas.displayobject.SpriteMovieClip.update","animateatlas/displayobject/SpriteMovieClip.hx",30,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_46_getFrameLabels,"animateatlas.displayobject.SpriteMovieClip","getFrameLabels",0x8e89059a,"animateatlas.displayobject.SpriteMovieClip.getFrameLabels","animateatlas/displayobject/SpriteMovieClip.hx",46,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_50_getFrame,"animateatlas.displayobject.SpriteMovieClip","getFrame",0xb65acb3b,"animateatlas.displayobject.SpriteMovieClip.getFrame","animateatlas/displayobject/SpriteMovieClip.hx",50,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_55_set_currentLabel,"animateatlas.displayobject.SpriteMovieClip","set_currentLabel",0x5491347c,"animateatlas.displayobject.SpriteMovieClip.set_currentLabel","animateatlas/displayobject/SpriteMovieClip.hx",55,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_61_get_currentLabel,"animateatlas.displayobject.SpriteMovieClip","get_currentLabel",0xfe4f4708,"animateatlas.displayobject.SpriteMovieClip.get_currentLabel","animateatlas/displayobject/SpriteMovieClip.hx",61,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_65_set_currentFrame,"animateatlas.displayobject.SpriteMovieClip","set_currentFrame",0xeb659eb5,"animateatlas.displayobject.SpriteMovieClip.set_currentFrame","animateatlas/displayobject/SpriteMovieClip.hx",65,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_71_get_currentFrame,"animateatlas.displayobject.SpriteMovieClip","get_currentFrame",0x9523b141,"animateatlas.displayobject.SpriteMovieClip.get_currentFrame","animateatlas/displayobject/SpriteMovieClip.hx",71,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_74_set_type,"animateatlas.displayobject.SpriteMovieClip","set_type",0xcb214b3b,"animateatlas.displayobject.SpriteMovieClip.set_type","animateatlas/displayobject/SpriteMovieClip.hx",74,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_80_get_type,"animateatlas.displayobject.SpriteMovieClip","get_type",0x1cc3f1c7,"animateatlas.displayobject.SpriteMovieClip.get_type","animateatlas/displayobject/SpriteMovieClip.hx",80,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_83_set_loopMode,"animateatlas.displayobject.SpriteMovieClip","set_loopMode",0x2ea3d4e8,"animateatlas.displayobject.SpriteMovieClip.set_loopMode","animateatlas/displayobject/SpriteMovieClip.hx",83,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_89_get_loopMode,"animateatlas.displayobject.SpriteMovieClip","get_loopMode",0x19aab174,"animateatlas.displayobject.SpriteMovieClip.get_loopMode","animateatlas/displayobject/SpriteMovieClip.hx",89,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_93_get_symbolName,"animateatlas.displayobject.SpriteMovieClip","get_symbolName",0x75182090,"animateatlas.displayobject.SpriteMovieClip.get_symbolName","animateatlas/displayobject/SpriteMovieClip.hx",93,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_97_get_numLayers,"animateatlas.displayobject.SpriteMovieClip","get_numLayers",0x2b5eb23b,"animateatlas.displayobject.SpriteMovieClip.get_numLayers","animateatlas/displayobject/SpriteMovieClip.hx",97,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_101_get_numFrames,"animateatlas.displayobject.SpriteMovieClip","get_numFrames",0x7f334c5f,"animateatlas.displayobject.SpriteMovieClip.get_numFrames","animateatlas/displayobject/SpriteMovieClip.hx",101,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_105_get_layers,"animateatlas.displayobject.SpriteMovieClip","get_layers",0xcc73b1cf,"animateatlas.displayobject.SpriteMovieClip.get_layers","animateatlas/displayobject/SpriteMovieClip.hx",105,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_109_set_framerate,"animateatlas.displayobject.SpriteMovieClip","set_framerate",0xb4fe196c,"animateatlas.displayobject.SpriteMovieClip.set_framerate","animateatlas/displayobject/SpriteMovieClip.hx",109,0xf5b21bd6)
HX_LOCAL_STACK_FRAME(_hx_pos_0677013a02f1aeca_113_get_framerate,"animateatlas.displayobject.SpriteMovieClip","get_framerate",0x6ff83760,"animateatlas.displayobject.SpriteMovieClip.get_framerate","animateatlas/displayobject/SpriteMovieClip.hx",113,0xf5b21bd6)
namespace animateatlas{
namespace displayobject{

void SpriteMovieClip_obj::__construct( ::animateatlas::displayobject::SpriteSymbol symbol){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_8_new)
HXLINE(  22)		this->frameElapsed = ((Float)0);
HXLINE(  20)		this->_framerate = null();
HXLINE(  25)		super::__construct();
HXLINE(  26)		this->symbol = symbol;
HXLINE(  27)		this->addChild(this->symbol);
            	}

Dynamic SpriteMovieClip_obj::__CreateEmpty() { return new SpriteMovieClip_obj; }

void *SpriteMovieClip_obj::_hx_vtable = 0;

Dynamic SpriteMovieClip_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SpriteMovieClip_obj > _hx_result = new SpriteMovieClip_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SpriteMovieClip_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x06d3abe4) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x06d3abe4;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void SpriteMovieClip_obj::update(int dt){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_30_update)
HXLINE(  32)		Float frameDuration = (( (Float)(1000) ) / this->get_framerate());
HXLINE(  33)		 ::animateatlas::displayobject::SpriteMovieClip _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  33)		_hx_tmp->frameElapsed = (_hx_tmp->frameElapsed + dt);
HXLINE(  35)		while((this->frameElapsed > frameDuration)){
HXLINE(  36)			 ::animateatlas::displayobject::SpriteMovieClip _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)			_hx_tmp->frameElapsed = (_hx_tmp->frameElapsed - frameDuration);
HXLINE(  37)			this->symbol->nextFrame();
            		}
HXLINE(  39)		while((this->frameElapsed < -(frameDuration))){
HXLINE(  40)			 ::animateatlas::displayobject::SpriteMovieClip _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  40)			_hx_tmp->frameElapsed = (_hx_tmp->frameElapsed + frameDuration);
HXLINE(  41)			this->symbol->prevFrame();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteMovieClip_obj,update,(void))

::Array< ::String > SpriteMovieClip_obj::getFrameLabels(){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_46_getFrameLabels)
HXDLIN(  46)		return this->symbol->getFrameLabels();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteMovieClip_obj,getFrameLabels,return )

int SpriteMovieClip_obj::getFrame(::String label){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_50_getFrame)
HXDLIN(  50)		return this->symbol->getFrame(label);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteMovieClip_obj,getFrame,return )

::String SpriteMovieClip_obj::set_currentLabel(::String value){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_55_set_currentLabel)
HXLINE(  56)		 ::animateatlas::displayobject::SpriteSymbol _hx_tmp = this->symbol;
HXDLIN(  56)		_hx_tmp->set_currentFrame(this->symbol->getFrame(value));
HXLINE(  57)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteMovieClip_obj,set_currentLabel,return )

::String SpriteMovieClip_obj::get_currentLabel(){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_61_get_currentLabel)
HXDLIN(  61)		return this->symbol->get_currentLabel();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteMovieClip_obj,get_currentLabel,return )

int SpriteMovieClip_obj::set_currentFrame(int value){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_65_set_currentFrame)
HXLINE(  66)		this->symbol->set_currentFrame(value);
HXLINE(  67)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteMovieClip_obj,set_currentFrame,return )

int SpriteMovieClip_obj::get_currentFrame(){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_71_get_currentFrame)
HXDLIN(  71)		return this->symbol->get_currentFrame();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteMovieClip_obj,get_currentFrame,return )

::String SpriteMovieClip_obj::set_type(::String value){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_74_set_type)
HXLINE(  75)		this->symbol->set_type(value);
HXLINE(  76)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteMovieClip_obj,set_type,return )

::String SpriteMovieClip_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_80_get_type)
HXDLIN(  80)		return this->symbol->get_type();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteMovieClip_obj,get_type,return )

::String SpriteMovieClip_obj::set_loopMode(::String value){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_83_set_loopMode)
HXLINE(  84)		this->symbol->set_loopMode(value);
HXLINE(  85)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteMovieClip_obj,set_loopMode,return )

::String SpriteMovieClip_obj::get_loopMode(){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_89_get_loopMode)
HXDLIN(  89)		return this->symbol->get_loopMode();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteMovieClip_obj,get_loopMode,return )

::String SpriteMovieClip_obj::get_symbolName(){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_93_get_symbolName)
HXDLIN(  93)		return this->symbol->get_symbolName();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteMovieClip_obj,get_symbolName,return )

int SpriteMovieClip_obj::get_numLayers(){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_97_get_numLayers)
HXDLIN(  97)		return this->symbol->get_numLayers();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteMovieClip_obj,get_numLayers,return )

int SpriteMovieClip_obj::get_numFrames(){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_101_get_numFrames)
HXDLIN( 101)		return this->symbol->get_numFrames();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteMovieClip_obj,get_numFrames,return )

::Array< ::Dynamic> SpriteMovieClip_obj::get_layers(){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_105_get_layers)
HXDLIN( 105)		return this->symbol->_layers;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteMovieClip_obj,get_layers,return )

Float SpriteMovieClip_obj::set_framerate(Float value){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_109_set_framerate)
HXDLIN( 109)		return ( (Float)((this->_framerate = value)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteMovieClip_obj,set_framerate,return )

Float SpriteMovieClip_obj::get_framerate(){
            	HX_STACKFRAME(&_hx_pos_0677013a02f1aeca_113_get_framerate)
HXDLIN( 113)		if (::hx::IsNull( this->_framerate )) {
HXDLIN( 113)			return this->symbol->_library->frameRate;
            		}
            		else {
HXDLIN( 113)			return ( (Float)(this->_framerate) );
            		}
HXDLIN( 113)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteMovieClip_obj,get_framerate,return )


::hx::ObjectPtr< SpriteMovieClip_obj > SpriteMovieClip_obj::__new( ::animateatlas::displayobject::SpriteSymbol symbol) {
	::hx::ObjectPtr< SpriteMovieClip_obj > __this = new SpriteMovieClip_obj();
	__this->__construct(symbol);
	return __this;
}

::hx::ObjectPtr< SpriteMovieClip_obj > SpriteMovieClip_obj::__alloc(::hx::Ctx *_hx_ctx, ::animateatlas::displayobject::SpriteSymbol symbol) {
	SpriteMovieClip_obj *__this = (SpriteMovieClip_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SpriteMovieClip_obj), true, "animateatlas.displayobject.SpriteMovieClip"));
	*(void **)__this = SpriteMovieClip_obj::_hx_vtable;
	__this->__construct(symbol);
	return __this;
}

SpriteMovieClip_obj::SpriteMovieClip_obj()
{
}

void SpriteMovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteMovieClip);
	HX_MARK_MEMBER_NAME(symbol,"symbol");
	HX_MARK_MEMBER_NAME(_framerate,"_framerate");
	HX_MARK_MEMBER_NAME(frameElapsed,"frameElapsed");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpriteMovieClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(symbol,"symbol");
	HX_VISIT_MEMBER_NAME(_framerate,"_framerate");
	HX_VISIT_MEMBER_NAME(frameElapsed,"frameElapsed");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SpriteMovieClip_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_type() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layers() ); }
		if (HX_FIELD_EQ(inName,"symbol") ) { return ::hx::Val( symbol ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_loopMode() ); }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return ::hx::Val( getFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return ::hx::Val( set_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"framerate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_framerate() ); }
		if (HX_FIELD_EQ(inName,"numLayers") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numLayers() ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numFrames() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"symbolName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_symbolName() ); }
		if (HX_FIELD_EQ(inName,"_framerate") ) { return ::hx::Val( _framerate ); }
		if (HX_FIELD_EQ(inName,"get_layers") ) { return ::hx::Val( get_layers_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLabel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentLabel() ); }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentFrame() ); }
		if (HX_FIELD_EQ(inName,"frameElapsed") ) { return ::hx::Val( frameElapsed ); }
		if (HX_FIELD_EQ(inName,"set_loopMode") ) { return ::hx::Val( set_loopMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_loopMode") ) { return ::hx::Val( get_loopMode_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_numLayers") ) { return ::hx::Val( get_numLayers_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return ::hx::Val( get_numFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_framerate") ) { return ::hx::Val( set_framerate_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_framerate") ) { return ::hx::Val( get_framerate_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFrameLabels") ) { return ::hx::Val( getFrameLabels_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_symbolName") ) { return ::hx::Val( get_symbolName_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_currentLabel") ) { return ::hx::Val( set_currentLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_currentLabel") ) { return ::hx::Val( get_currentLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_currentFrame") ) { return ::hx::Val( set_currentFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return ::hx::Val( get_currentFrame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SpriteMovieClip_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_type(inValue.Cast< ::String >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"symbol") ) { symbol=inValue.Cast<  ::animateatlas::displayobject::SpriteSymbol >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_loopMode(inValue.Cast< ::String >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"framerate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_framerate(inValue.Cast< Float >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_framerate") ) { _framerate=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLabel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_currentLabel(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_currentFrame(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"frameElapsed") ) { frameElapsed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteMovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("framerate",8d,e5,4b,4e));
	outFields->push(HX_("currentLabel",fb,f2,ba,b6));
	outFields->push(HX_("currentFrame",34,5d,8f,4d));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("loopMode",e7,a7,ce,3a));
	outFields->push(HX_("symbolName",c3,d9,fc,1f));
	outFields->push(HX_("numLayers",68,60,b2,09));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("layers",82,15,b1,58));
	outFields->push(HX_("symbol",58,af,dd,ee));
	outFields->push(HX_("_framerate",4e,61,ee,a9));
	outFields->push(HX_("frameElapsed",8f,57,4b,5b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SpriteMovieClip_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::animateatlas::displayobject::SpriteSymbol */ ,(int)offsetof(SpriteMovieClip_obj,symbol),HX_("symbol",58,af,dd,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SpriteMovieClip_obj,_framerate),HX_("_framerate",4e,61,ee,a9)},
	{::hx::fsFloat,(int)offsetof(SpriteMovieClip_obj,frameElapsed),HX_("frameElapsed",8f,57,4b,5b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SpriteMovieClip_obj_sStaticStorageInfo = 0;
#endif

static ::String SpriteMovieClip_obj_sMemberFields[] = {
	HX_("symbol",58,af,dd,ee),
	HX_("_framerate",4e,61,ee,a9),
	HX_("frameElapsed",8f,57,4b,5b),
	HX_("update",09,86,05,87),
	HX_("getFrameLabels",16,47,63,af),
	HX_("getFrame",b7,87,5a,66),
	HX_("set_currentLabel",f8,cc,9b,11),
	HX_("get_currentLabel",84,df,59,bb),
	HX_("set_currentFrame",31,37,70,a8),
	HX_("get_currentFrame",bd,49,2e,52),
	HX_("set_type",b7,07,21,7b),
	HX_("get_type",43,ae,c3,cc),
	HX_("set_loopMode",64,7f,e1,04),
	HX_("get_loopMode",f0,5b,e8,ef),
	HX_("get_symbolName",0c,62,f2,95),
	HX_("get_numLayers",3f,34,16,cb),
	HX_("get_numFrames",63,ce,ea,1e),
	HX_("get_layers",4b,85,38,49),
	HX_("set_framerate",70,9b,b5,54),
	HX_("get_framerate",64,b9,af,0f),
	::String(null()) };

::hx::Class SpriteMovieClip_obj::__mClass;

void SpriteMovieClip_obj::__register()
{
	SpriteMovieClip_obj _hx_dummy;
	SpriteMovieClip_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("animateatlas.displayobject.SpriteMovieClip",6a,9d,7a,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SpriteMovieClip_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SpriteMovieClip_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpriteMovieClip_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpriteMovieClip_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace animateatlas
} // end namespace displayobject
