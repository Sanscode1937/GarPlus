#ifndef INCLUDED_FlxGridOverlay
#define INCLUDED_FlxGridOverlay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(FlxGridOverlay)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)



class HXCPP_CLASS_ATTRIBUTES FlxGridOverlay_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxGridOverlay_obj OBJ_;
		FlxGridOverlay_obj();

	public:
		enum { _hx_ClassId = 0x0e33d4f8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="FlxGridOverlay")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"FlxGridOverlay"); }

		inline static ::hx::ObjectPtr< FlxGridOverlay_obj > __new() {
			::hx::ObjectPtr< FlxGridOverlay_obj > __this = new FlxGridOverlay_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxGridOverlay_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxGridOverlay_obj *__this = (FlxGridOverlay_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGridOverlay_obj), false, "FlxGridOverlay"));
			*(void **)__this = FlxGridOverlay_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGridOverlay_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGridOverlay",38,52,48,2c); }

		static  ::flixel::FlxSprite create(int CellWidth,int CellHeight,::hx::Null< int >  Width,::hx::Null< int >  Height,::hx::Null< bool >  Alternate,::hx::Null< int >  Color1,::hx::Null< int >  Color2);
		static ::Dynamic create_dyn();

		static  ::flixel::FlxSprite overlay( ::flixel::FlxSprite Sprite,int CellWidth,int CellHeight,::hx::Null< int >  Width,::hx::Null< int >  Height,::hx::Null< bool >  Alternate,::hx::Null< int >  Color1,::hx::Null< int >  Color2);
		static ::Dynamic overlay_dyn();

		static  ::openfl::display::BitmapData createGrid(int CellWidth,int CellHeight,int Width,int Height,bool Alternate,int Color1,int Color2);
		static ::Dynamic createGrid_dyn();

};


#endif /* INCLUDED_FlxGridOverlay */ 
