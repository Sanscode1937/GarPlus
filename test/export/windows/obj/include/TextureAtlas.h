#ifndef INCLUDED_TextureAtlas
#define INCLUDED_TextureAtlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
HX_DECLARE_CLASS0(TextureAtlas)
HX_DECLARE_CLASS2(animateatlas,displayobject,SpriteMovieClip)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrameCollectionType)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES TextureAtlas_obj : public  ::flixel::graphics::frames::FlxFramesCollection_obj
{
	public:
		typedef  ::flixel::graphics::frames::FlxFramesCollection_obj super;
		typedef TextureAtlas_obj OBJ_;
		TextureAtlas_obj();

	public:
		enum { _hx_ClassId = 0x02bb00b4 };

		void __construct( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TextureAtlas")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TextureAtlas"); }
		static ::hx::ObjectPtr< TextureAtlas_obj > __new( ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border);
		static ::hx::ObjectPtr< TextureAtlas_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::graphics::frames::FlxFrameCollectionType type, ::flixel::math::FlxPoint border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextureAtlas_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextureAtlas",90,46,8f,e7); }

		static  ::flixel::graphics::frames::FlxFramesCollection construct(::String key,::Array< ::String > _excludeArray);
		static ::Dynamic construct_dyn();

		static ::Array< ::Dynamic> getFramesArray( ::animateatlas::displayobject::SpriteMovieClip t,::String animation,::String key);
		static ::Dynamic getFramesArray_dyn();

};


#endif /* INCLUDED_TextureAtlas */ 
