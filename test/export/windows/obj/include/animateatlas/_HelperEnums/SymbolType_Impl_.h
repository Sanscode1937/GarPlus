#ifndef INCLUDED_animateatlas__HelperEnums_SymbolType_Impl_
#define INCLUDED_animateatlas__HelperEnums_SymbolType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(animateatlas,_HelperEnums,SymbolType_Impl_)

namespace animateatlas{
namespace _HelperEnums{


class HXCPP_CLASS_ATTRIBUTES SymbolType_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SymbolType_Impl__obj OBJ_;
		SymbolType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3cfbbce1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="animateatlas._HelperEnums.SymbolType_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"animateatlas._HelperEnums.SymbolType_Impl_"); }

		inline static ::hx::ObjectPtr< SymbolType_Impl__obj > __new() {
			::hx::ObjectPtr< SymbolType_Impl__obj > __this = new SymbolType_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SymbolType_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			SymbolType_Impl__obj *__this = (SymbolType_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SymbolType_Impl__obj), false, "animateatlas._HelperEnums.SymbolType_Impl_"));
			*(void **)__this = SymbolType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SymbolType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SymbolType_Impl_",72,24,fb,fd); }

		static void __boot();
		static ::String GRAPHIC;
		static ::String MOVIE_CLIP;
		static ::String BUTTON;
		static bool isValid(::String value);
		static ::Dynamic isValid_dyn();

};

} // end namespace animateatlas
} // end namespace _HelperEnums

#endif /* INCLUDED_animateatlas__HelperEnums_SymbolType_Impl_ */ 
