#ifndef INCLUDED_animateatlas_displayobject_SpriteSymbol
#define INCLUDED_animateatlas_displayobject_SpriteSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(animateatlas,displayobject,SpriteAnimationLibrary)
HX_DECLARE_CLASS2(animateatlas,displayobject,SpriteSymbol)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,FrameLabel)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace animateatlas{
namespace displayobject{


class HXCPP_CLASS_ATTRIBUTES SpriteSymbol_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef SpriteSymbol_obj OBJ_;
		SpriteSymbol_obj();

	public:
		enum { _hx_ClassId = 0x4fa115b0 };

		void __construct( ::Dynamic data, ::animateatlas::displayobject::SpriteAnimationLibrary library, ::openfl::display::BitmapData texture);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="animateatlas.displayobject.SpriteSymbol")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"animateatlas.displayobject.SpriteSymbol"); }
		static ::hx::ObjectPtr< SpriteSymbol_obj > __new( ::Dynamic data, ::animateatlas::displayobject::SpriteAnimationLibrary library, ::openfl::display::BitmapData texture);
		static ::hx::ObjectPtr< SpriteSymbol_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic data, ::animateatlas::displayobject::SpriteAnimationLibrary library, ::openfl::display::BitmapData texture);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SpriteSymbol_obj();

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
		::String __ToString() const { return HX_("SpriteSymbol",5d,9d,d2,4e); }

		static void __boot();
		static  ::openfl::geom::Matrix sMatrix;
		 ::Dynamic _data;
		 ::animateatlas::displayobject::SpriteAnimationLibrary _library;
		::String _symbolName;
		::String _type;
		::String _loopMode;
		int _currentFrame;
		int _composedFrame;
		 ::openfl::display::Bitmap _bitmap;
		int _numFrames;
		int _numLayers;
		::Array< ::Dynamic> _frameLabels;
		 ::openfl::geom::ColorTransform _colorTransform;
		::Array< ::Dynamic> _layers;
		 ::openfl::display::BitmapData _texture;
		 ::openfl::geom::Rectangle _tempRect;
		 ::openfl::geom::Point _zeroPoint;
		 ::openfl::display::BitmapData filterHelper;
		bool smoothing;
		void reset();
		::Dynamic reset_dyn();

		void nextFrame();
		::Dynamic nextFrame_dyn();

		void prevFrame();
		::Dynamic prevFrame_dyn();

		void moveMovieclip_MovieClips(::hx::Null< int >  direction);
		::Dynamic moveMovieclip_MovieClips_dyn();

		void update();
		::Dynamic update_dyn();

		void updateLayer(int layerIndex);
		::Dynamic updateLayer_dyn();

		void createLayers();
		::Dynamic createLayers_dyn();

		void setBitmap( ::Dynamic data);
		::Dynamic setBitmap_dyn();

		void setFilterData( ::Dynamic data);
		::Dynamic setFilterData_dyn();

		void setTransformationMatrix( ::Dynamic data);
		::Dynamic setTransformationMatrix_dyn();

		void setColor( ::Dynamic data);
		::Dynamic setColor_dyn();

		void setLoop(::String data);
		::Dynamic setLoop_dyn();

		void setType(::String data);
		::Dynamic setType_dyn();

		int getNumFrames();
		::Dynamic getNumFrames_dyn();

		::Array< ::Dynamic> _getFrameLabels();
		::Dynamic _getFrameLabels_dyn();

		::Array< ::String > getFrameLabels();
		::Dynamic getFrameLabels_dyn();

		int sortLabels( ::openfl::display::FrameLabel i1, ::openfl::display::FrameLabel i2);
		::Dynamic sortLabels_dyn();

		 ::openfl::display::Sprite getLayer(int layerIndex);
		::Dynamic getLayer_dyn();

		 ::openfl::display::BitmapData getTexture();
		::Dynamic getTexture_dyn();

		::String getNextLabel(::String afterLabel);
		::Dynamic getNextLabel_dyn();

		::String get_currentLabel();
		::Dynamic get_currentLabel_dyn();

		int getFrame(::String label);
		::Dynamic getFrame_dyn();

		int get_currentFrame();
		::Dynamic get_currentFrame_dyn();

		int set_currentFrame(int value);
		::Dynamic set_currentFrame_dyn();

		::String get_type();
		::Dynamic get_type_dyn();

		::String set_type(::String value);
		::Dynamic set_type_dyn();

		::String get_loopMode();
		::Dynamic get_loopMode_dyn();

		::String set_loopMode(::String value);
		::Dynamic set_loopMode_dyn();

		::String get_symbolName();
		::Dynamic get_symbolName_dyn();

		int get_numLayers();
		::Dynamic get_numLayers_dyn();

		int get_numFrames();
		::Dynamic get_numFrames_dyn();

		 ::Dynamic getLayerData(int layerIndex);
		::Dynamic getLayerData_dyn();

		 ::Dynamic getFrameData(int layerIndex,int frameIndex);
		::Dynamic getFrameData_dyn();

};

} // end namespace animateatlas
} // end namespace displayobject

#endif /* INCLUDED_animateatlas_displayobject_SpriteSymbol */ 
