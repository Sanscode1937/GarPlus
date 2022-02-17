#ifndef INCLUDED_TexAsset
#define INCLUDED_TexAsset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TexAsset)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES TexAsset_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TexAsset_obj OBJ_;
		TexAsset_obj();

	public:
		enum { _hx_ClassId = 0x3c506569 };

		void __construct( ::openfl::display3D::textures::Texture texture,::String cacheKey);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TexAsset")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TexAsset"); }
		static ::hx::ObjectPtr< TexAsset_obj > __new( ::openfl::display3D::textures::Texture texture,::String cacheKey);
		static ::hx::ObjectPtr< TexAsset_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::textures::Texture texture,::String cacheKey);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TexAsset_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TexAsset",a9,72,bf,e0); }

		 ::openfl::display3D::textures::Texture texture;
		::String cacheKey;
};


#endif /* INCLUDED_TexAsset */ 
