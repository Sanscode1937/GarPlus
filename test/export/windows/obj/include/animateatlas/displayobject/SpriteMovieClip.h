#ifndef INCLUDED_animateatlas_displayobject_SpriteMovieClip
#define INCLUDED_animateatlas_displayobject_SpriteMovieClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(animateatlas,displayobject,SpriteMovieClip)
HX_DECLARE_CLASS2(animateatlas,displayobject,SpriteSymbol)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace animateatlas{
namespace displayobject{


class HXCPP_CLASS_ATTRIBUTES SpriteMovieClip_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef SpriteMovieClip_obj OBJ_;
		SpriteMovieClip_obj();

	public:
		enum { _hx_ClassId = 0x06d3abe4 };

		void __construct( ::animateatlas::displayobject::SpriteSymbol symbol);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="animateatlas.displayobject.SpriteMovieClip")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"animateatlas.displayobject.SpriteMovieClip"); }
		static ::hx::ObjectPtr< SpriteMovieClip_obj > __new( ::animateatlas::displayobject::SpriteSymbol symbol);
		static ::hx::ObjectPtr< SpriteMovieClip_obj > __alloc(::hx::Ctx *_hx_ctx, ::animateatlas::displayobject::SpriteSymbol symbol);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SpriteMovieClip_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SpriteMovieClip",bb,e5,bc,7c); }

		 ::animateatlas::displayobject::SpriteSymbol symbol;
		 ::Dynamic _framerate;
		Float frameElapsed;
		void update(int dt);
		::Dynamic update_dyn();

		::Array< ::String > getFrameLabels();
		::Dynamic getFrameLabels_dyn();

		int getFrame(::String label);
		::Dynamic getFrame_dyn();

		::String set_currentLabel(::String value);
		::Dynamic set_currentLabel_dyn();

		::String get_currentLabel();
		::Dynamic get_currentLabel_dyn();

		int set_currentFrame(int value);
		::Dynamic set_currentFrame_dyn();

		int get_currentFrame();
		::Dynamic get_currentFrame_dyn();

		::String set_type(::String value);
		::Dynamic set_type_dyn();

		::String get_type();
		::Dynamic get_type_dyn();

		::String set_loopMode(::String value);
		::Dynamic set_loopMode_dyn();

		::String get_loopMode();
		::Dynamic get_loopMode_dyn();

		::String get_symbolName();
		::Dynamic get_symbolName_dyn();

		int get_numLayers();
		::Dynamic get_numLayers_dyn();

		int get_numFrames();
		::Dynamic get_numFrames_dyn();

		::Array< ::Dynamic> get_layers();
		::Dynamic get_layers_dyn();

		Float set_framerate(Float value);
		::Dynamic set_framerate_dyn();

		Float get_framerate();
		::Dynamic get_framerate_dyn();

};

} // end namespace animateatlas
} // end namespace displayobject

#endif /* INCLUDED_animateatlas_displayobject_SpriteMovieClip */ 
