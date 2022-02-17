#ifndef INCLUDED_GPUFunctions
#define INCLUDED_GPUFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GPUFunctions)
HX_DECLARE_CLASS0(TexAsset)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)



class HXCPP_CLASS_ATTRIBUTES GPUFunctions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GPUFunctions_obj OBJ_;
		GPUFunctions_obj();

	public:
		enum { _hx_ClassId = 0x2fe92b9b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="GPUFunctions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"GPUFunctions"); }

		inline static ::hx::ObjectPtr< GPUFunctions_obj > __new() {
			::hx::ObjectPtr< GPUFunctions_obj > __this = new GPUFunctions_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GPUFunctions_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GPUFunctions_obj *__this = (GPUFunctions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GPUFunctions_obj), false, "GPUFunctions"));
			*(void **)__this = GPUFunctions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GPUFunctions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GPUFunctions",af,a2,28,b0); }

		static void __boot();
		static ::Array< ::Dynamic> trackedTextures;
		static  ::openfl::display::BitmapData getBitmaponGPU(::String path, ::Dynamic texFormat,::hx::Null< bool >  optimizeForRender,::String _cachekey);
		static ::Dynamic getBitmaponGPU_dyn();

		static void preloadTextureAsync(::String path, ::Dynamic onComplete, ::Dynamic texFormat,::hx::Null< bool >  optimizeForRender,::String _cachekey);
		static ::Dynamic preloadTextureAsync_dyn();

		static  ::openfl::display::BitmapData convertBitmap( ::openfl::display::BitmapData _bmp,::String key);
		static ::Dynamic convertBitmap_dyn();

		static  ::openfl::display::BitmapData getATFonGPU(::String path,int _width,int _height, ::Dynamic texFormat,::hx::Null< bool >  optimizeForRender,::String _cachekey);
		static ::Dynamic getATFonGPU_dyn();

		static void disposeAllTextures();
		static ::Dynamic disposeAllTextures_dyn();

		static void disposeTexturesByKey(::String key);
		static ::Dynamic disposeTexturesByKey_dyn();

};


#endif /* INCLUDED_GPUFunctions */ 
