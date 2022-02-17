#ifndef INCLUDED_animateatlas__HelperEnums_LoopMode_Impl_
#define INCLUDED_animateatlas__HelperEnums_LoopMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(animateatlas,_HelperEnums,LoopMode_Impl_)

namespace animateatlas{
namespace _HelperEnums{


class HXCPP_CLASS_ATTRIBUTES LoopMode_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LoopMode_Impl__obj OBJ_;
		LoopMode_Impl__obj();

	public:
		enum { _hx_ClassId = 0x10e444fa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="animateatlas._HelperEnums.LoopMode_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"animateatlas._HelperEnums.LoopMode_Impl_"); }

		inline static ::hx::ObjectPtr< LoopMode_Impl__obj > __new() {
			::hx::ObjectPtr< LoopMode_Impl__obj > __this = new LoopMode_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LoopMode_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			LoopMode_Impl__obj *__this = (LoopMode_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoopMode_Impl__obj), false, "animateatlas._HelperEnums.LoopMode_Impl_"));
			*(void **)__this = LoopMode_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LoopMode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LoopMode_Impl_",e7,df,82,46); }

		static void __boot();
		static ::String LOOP;
		static ::String PLAY_ONCE;
		static ::String SINGLE_FRAME;
		static bool isValid(::String value);
		static ::Dynamic isValid_dyn();

};

} // end namespace animateatlas
} // end namespace _HelperEnums

#endif /* INCLUDED_animateatlas__HelperEnums_LoopMode_Impl_ */ 
