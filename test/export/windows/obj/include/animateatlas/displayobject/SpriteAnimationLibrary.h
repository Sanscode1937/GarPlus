#ifndef INCLUDED_animateatlas_displayobject_SpriteAnimationLibrary
#define INCLUDED_animateatlas_displayobject_SpriteAnimationLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(animateatlas,displayobject,SpriteAnimationLibrary)
HX_DECLARE_CLASS2(animateatlas,displayobject,SpriteMovieClip)
HX_DECLARE_CLASS2(animateatlas,displayobject,SpriteSymbol)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace animateatlas{
namespace displayobject{


class HXCPP_CLASS_ATTRIBUTES SpriteAnimationLibrary_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SpriteAnimationLibrary_obj OBJ_;
		SpriteAnimationLibrary_obj();

	public:
		enum { _hx_ClassId = 0x4b15ccaf };

		void __construct( ::Dynamic data, ::Dynamic atlas, ::openfl::display::BitmapData texture);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="animateatlas.displayobject.SpriteAnimationLibrary")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"animateatlas.displayobject.SpriteAnimationLibrary"); }
		static ::hx::ObjectPtr< SpriteAnimationLibrary_obj > __new( ::Dynamic data, ::Dynamic atlas, ::openfl::display::BitmapData texture);
		static ::hx::ObjectPtr< SpriteAnimationLibrary_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic data, ::Dynamic atlas, ::openfl::display::BitmapData texture);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SpriteAnimationLibrary_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SpriteAnimationLibrary",9c,8e,64,f2); }

		static void __boot();
		static ::String BITMAP_SYMBOL_NAME;
		static  ::Dynamic STD_MATRIX3D_DATA;
		Float frameRate;
		 ::haxe::ds::StringMap _atlas;
		 ::haxe::ds::StringMap _symbolData;
		 ::haxe::ds::StringMap _symbolPool;
		::String _defaultSymbolName;
		 ::openfl::display::BitmapData _texture;
		bool hasAnimation(::String name);
		::Dynamic hasAnimation_dyn();

		 ::animateatlas::displayobject::SpriteMovieClip createAnimation(::String symbol);
		::Dynamic createAnimation_dyn();

		::Array< ::String > getAnimationNames(::String prefix);
		::Dynamic getAnimationNames_dyn();

		 ::Dynamic getSpriteData(::String name);
		::Dynamic getSpriteData_dyn();

		bool hasSymbol(::String name);
		::Dynamic hasSymbol_dyn();

		 ::animateatlas::displayobject::SpriteSymbol getSymbol(::String name);
		::Dynamic getSymbol_dyn();

		void putSymbol( ::animateatlas::displayobject::SpriteSymbol symbol);
		::Dynamic putSymbol_dyn();

		::Array< ::Dynamic> getSymbolPool(::String name);
		::Dynamic getSymbolPool_dyn();

		void parseAnimationData( ::Dynamic data);
		::Dynamic parseAnimationData_dyn();

		 ::Dynamic preprocessSymbolData( ::Dynamic symbolData);
		::Dynamic preprocessSymbolData_dyn();

		void parseAtlasData( ::Dynamic atlas);
		::Dynamic parseAtlasData_dyn();

		 ::Dynamic getSymbolData(::String name);
		::Dynamic getSymbolData_dyn();

};

} // end namespace animateatlas
} // end namespace displayobject

#endif /* INCLUDED_animateatlas_displayobject_SpriteAnimationLibrary */ 
