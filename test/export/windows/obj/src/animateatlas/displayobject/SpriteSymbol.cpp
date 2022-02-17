#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_animateatlas__HelperEnums_LoopMode_Impl_
#include <animateatlas/_HelperEnums/LoopMode_Impl_.h>
#endif
#ifndef INCLUDED_animateatlas__HelperEnums_SymbolType_Impl_
#include <animateatlas/_HelperEnums/SymbolType_Impl_.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteAnimationLibrary
#include <animateatlas/displayobject/SpriteAnimationLibrary.h>
#endif
#ifndef INCLUDED_animateatlas_displayobject_SpriteSymbol
#include <animateatlas/displayobject/SpriteSymbol.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
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
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BlurFilter
#include <openfl/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_29_new,"animateatlas.displayobject.SpriteSymbol","new",0x7427b240,"animateatlas.displayobject.SpriteSymbol.new","animateatlas/displayobject/SpriteSymbol.hx",29,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_93_reset,"animateatlas.displayobject.SpriteSymbol","reset",0xe0c063af,"animateatlas.displayobject.SpriteSymbol.reset","animateatlas/displayobject/SpriteSymbol.hx",93,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_101_nextFrame,"animateatlas.displayobject.SpriteSymbol","nextFrame",0x02031c1a,"animateatlas.displayobject.SpriteSymbol.nextFrame","animateatlas/displayobject/SpriteSymbol.hx",101,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_109_prevFrame,"animateatlas.displayobject.SpriteSymbol","prevFrame",0x4614a21a,"animateatlas.displayobject.SpriteSymbol.prevFrame","animateatlas/displayobject/SpriteSymbol.hx",109,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_118_moveMovieclip_MovieClips,"animateatlas.displayobject.SpriteSymbol","moveMovieclip_MovieClips",0x37b80463,"animateatlas.displayobject.SpriteSymbol.moveMovieclip_MovieClips","animateatlas/displayobject/SpriteSymbol.hx",118,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_133_update,"animateatlas.displayobject.SpriteSymbol","update",0x46241029,"animateatlas.displayobject.SpriteSymbol.update","animateatlas/displayobject/SpriteSymbol.hx",133,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_142_updateLayer,"animateatlas.displayobject.SpriteSymbol","updateLayer",0x14b1ace8,"animateatlas.displayobject.SpriteSymbol.updateLayer","animateatlas/displayobject/SpriteSymbol.hx",142,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_216_createLayers,"animateatlas.displayobject.SpriteSymbol","createLayers",0x295737be,"animateatlas.displayobject.SpriteSymbol.createLayers","animateatlas/displayobject/SpriteSymbol.hx",216,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_237_setBitmap,"animateatlas.displayobject.SpriteSymbol","setBitmap",0xa4ee0f11,"animateatlas.displayobject.SpriteSymbol.setBitmap","animateatlas/displayobject/SpriteSymbol.hx",237,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_272_setFilterData,"animateatlas.displayobject.SpriteSymbol","setFilterData",0xc8951624,"animateatlas.displayobject.SpriteSymbol.setFilterData","animateatlas/displayobject/SpriteSymbol.hx",272,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_306_setTransformationMatrix,"animateatlas.displayobject.SpriteSymbol","setTransformationMatrix",0x0fffdb8c,"animateatlas.displayobject.SpriteSymbol.setTransformationMatrix","animateatlas/displayobject/SpriteSymbol.hx",306,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_313_setColor,"animateatlas.displayobject.SpriteSymbol","setColor",0x03fe2c81,"animateatlas.displayobject.SpriteSymbol.setColor","animateatlas/displayobject/SpriteSymbol.hx",313,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_345_setLoop,"animateatlas.displayobject.SpriteSymbol","setLoop",0x88d63906,"animateatlas.displayobject.SpriteSymbol.setLoop","animateatlas/displayobject/SpriteSymbol.hx",345,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_353_setType,"animateatlas.displayobject.SpriteSymbol","setType",0x8e27855c,"animateatlas.displayobject.SpriteSymbol.setType","animateatlas/displayobject/SpriteSymbol.hx",353,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_358_getNumFrames,"animateatlas.displayobject.SpriteSymbol","getNumFrames",0x1b2e7936,"animateatlas.displayobject.SpriteSymbol.getNumFrames","animateatlas/displayobject/SpriteSymbol.hx",358,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_379__getFrameLabels,"animateatlas.displayobject.SpriteSymbol","_getFrameLabels",0x93d2c195,"animateatlas.displayobject.SpriteSymbol._getFrameLabels","animateatlas/displayobject/SpriteSymbol.hx",379,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_399_getFrameLabels,"animateatlas.displayobject.SpriteSymbol","getFrameLabels",0x3d48f136,"animateatlas.displayobject.SpriteSymbol.getFrameLabels","animateatlas/displayobject/SpriteSymbol.hx",399,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_404_sortLabels,"animateatlas.displayobject.SpriteSymbol","sortLabels",0x0560b81d,"animateatlas.displayobject.SpriteSymbol.sortLabels","animateatlas/displayobject/SpriteSymbol.hx",404,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_417_getLayer,"animateatlas.displayobject.SpriteSymbol","getLayer",0x7b04e37b,"animateatlas.displayobject.SpriteSymbol.getLayer","animateatlas/displayobject/SpriteSymbol.hx",417,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_422_getTexture,"animateatlas.displayobject.SpriteSymbol","getTexture",0x4d406905,"animateatlas.displayobject.SpriteSymbol.getTexture","animateatlas/displayobject/SpriteSymbol.hx",422,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_425_getNextLabel,"animateatlas.displayobject.SpriteSymbol","getNextLabel",0xd49ba6ab,"animateatlas.displayobject.SpriteSymbol.getNextLabel","animateatlas/displayobject/SpriteSymbol.hx",425,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_439_get_currentLabel,"animateatlas.displayobject.SpriteSymbol","get_currentLabel",0xcd9651a4,"animateatlas.displayobject.SpriteSymbol.get_currentLabel","animateatlas/displayobject/SpriteSymbol.hx",439,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_456_getFrame,"animateatlas.displayobject.SpriteSymbol","getFrame",0x11c7d9d7,"animateatlas.displayobject.SpriteSymbol.getFrame","animateatlas/displayobject/SpriteSymbol.hx",456,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_468_get_currentFrame,"animateatlas.displayobject.SpriteSymbol","get_currentFrame",0x646abbdd,"animateatlas.displayobject.SpriteSymbol.get_currentFrame","animateatlas/displayobject/SpriteSymbol.hx",468,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_471_set_currentFrame,"animateatlas.displayobject.SpriteSymbol","set_currentFrame",0xbaaca951,"animateatlas.displayobject.SpriteSymbol.set_currentFrame","animateatlas/displayobject/SpriteSymbol.hx",471,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_489_get_type,"animateatlas.displayobject.SpriteSymbol","get_type",0x78310063,"animateatlas.displayobject.SpriteSymbol.get_type","animateatlas/displayobject/SpriteSymbol.hx",489,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_492_set_type,"animateatlas.displayobject.SpriteSymbol","set_type",0x268e59d7,"animateatlas.displayobject.SpriteSymbol.set_type","animateatlas/displayobject/SpriteSymbol.hx",492,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_502_get_loopMode,"animateatlas.displayobject.SpriteSymbol","get_loopMode",0x9e393e10,"animateatlas.displayobject.SpriteSymbol.get_loopMode","animateatlas/displayobject/SpriteSymbol.hx",502,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_505_set_loopMode,"animateatlas.displayobject.SpriteSymbol","set_loopMode",0xb3326184,"animateatlas.displayobject.SpriteSymbol.set_loopMode","animateatlas/displayobject/SpriteSymbol.hx",505,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_515_get_symbolName,"animateatlas.displayobject.SpriteSymbol","get_symbolName",0x23d80c2c,"animateatlas.displayobject.SpriteSymbol.get_symbolName","animateatlas/displayobject/SpriteSymbol.hx",515,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_519_get_numLayers,"animateatlas.displayobject.SpriteSymbol","get_numLayers",0xa38b2e1f,"animateatlas.displayobject.SpriteSymbol.get_numLayers","animateatlas/displayobject/SpriteSymbol.hx",519,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_523_get_numFrames,"animateatlas.displayobject.SpriteSymbol","get_numFrames",0xf75fc843,"animateatlas.displayobject.SpriteSymbol.get_numFrames","animateatlas/displayobject/SpriteSymbol.hx",523,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_529_getLayerData,"animateatlas.displayobject.SpriteSymbol","getLayerData",0x42383f45,"animateatlas.displayobject.SpriteSymbol.getLayerData","animateatlas/displayobject/SpriteSymbol.hx",529,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_532_getFrameData,"animateatlas.displayobject.SpriteSymbol","getFrameData",0xed8b93a1,"animateatlas.displayobject.SpriteSymbol.getFrameData","animateatlas/displayobject/SpriteSymbol.hx",532,0xa3b5bfae)
HX_LOCAL_STACK_FRAME(_hx_pos_3cafb963b38c7cf0_58_boot,"animateatlas.displayobject.SpriteSymbol","boot",0x26ad4652,"animateatlas.displayobject.SpriteSymbol.boot","animateatlas/displayobject/SpriteSymbol.hx",58,0xa3b5bfae)
namespace animateatlas{
namespace displayobject{

void SpriteSymbol_obj::__construct( ::Dynamic data, ::animateatlas::displayobject::SpriteAnimationLibrary library, ::openfl::display::BitmapData texture){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_29_new)
HXLINE(  56)		this->smoothing = true;
HXLINE(  54)		this->_zeroPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  53)		this->_tempRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  61)		super::__construct();
HXLINE(  62)		this->_data = data;
HXLINE(  63)		this->_library = library;
HXLINE(  64)		this->_composedFrame = -1;
HXLINE(  65)		this->_numLayers = ( (::Array< ::Dynamic>)( ::Dynamic(data->__Field(HX_("TIMELINE",81,fe,c0,56),::hx::paccDynamic))->__Field(HX_("LAYERS",82,c1,33,0b),::hx::paccDynamic)) )->length;
HXLINE(  66)		this->_numFrames = this->getNumFrames();
HXLINE(  67)		this->_frameLabels = this->_getFrameLabels();
HXLINE(  68)		this->_symbolName = ( (::String)(data->__Field(HX_("SYMBOL_name",d2,13,ee,07),::hx::paccDynamic)) );
HXLINE(  69)		this->_type = HX_("graphic",a8,5a,07,74);
HXLINE(  70)		this->_loopMode = HX_("loop",64,a6,b7,47);
HXLINE(  71)		this->_texture = texture;
HXLINE(  73)		this->createLayers();
HXLINE(  76)		{
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic(data->__Field(HX_("TIMELINE",81,fe,c0,56),::hx::paccDynamic))->__Field(HX_("LAYERS",82,c1,33,0b),::hx::paccDynamic)) );
HXDLIN(  76)			while((_g < _g1->length)){
HXLINE(  76)				 ::Dynamic layer = _g1->__get(_g);
HXDLIN(  76)				_g = (_g + 1);
HXLINE(  77)				if (::hx::IsNotNull( layer->__Field(HX_("FrameMap",8f,a0,a2,f6),::hx::paccDynamic) )) {
HXLINE(  78)					return;
            				}
HXLINE(  80)				 ::haxe::ds::IntMap map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  82)				{
HXLINE(  82)					int _g2 = 0;
HXDLIN(  82)					int _g3 = ( (::Array< ::Dynamic>)(layer->__Field(HX_("Frames",c6,23,1a,e1),::hx::paccDynamic)) )->length;
HXDLIN(  82)					while((_g2 < _g3)){
HXLINE(  82)						_g2 = (_g2 + 1);
HXDLIN(  82)						int i = (_g2 - 1);
HXLINE(  83)						 ::Dynamic frame =  ::Dynamic(layer->__Field(HX_("Frames",c6,23,1a,e1),::hx::paccDynamic))->__GetItem(i);
HXLINE(  84)						{
HXLINE(  84)							int _g = 0;
HXDLIN(  84)							int _g1 = ( (int)(frame->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic)) );
HXDLIN(  84)							while((_g < _g1)){
HXLINE(  84)								_g = (_g + 1);
HXDLIN(  84)								int j = (_g - 1);
HXLINE(  85)								map->set((i + j),frame);
            							}
            						}
            					}
            				}
HXLINE(  89)				layer->__SetField(HX_("FrameMap",8f,a0,a2,f6),map,::hx::paccDynamic);
            			}
            		}
            	}

Dynamic SpriteSymbol_obj::__CreateEmpty() { return new SpriteSymbol_obj; }

void *SpriteSymbol_obj::_hx_vtable = 0;

Dynamic SpriteSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SpriteSymbol_obj > _hx_result = new SpriteSymbol_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SpriteSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4fa115b0) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x4fa115b0;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void SpriteSymbol_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_93_reset)
HXLINE(  94)		::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->identity();
HXLINE(  95)		 ::openfl::geom::Transform _hx_tmp = this->get_transform();
HXDLIN(  95)		_hx_tmp->set_matrix(::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->clone());
HXLINE(  96)		this->set_alpha(((Float)1.0));
HXLINE(  97)		this->_currentFrame = 0;
HXLINE(  98)		this->_composedFrame = -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,reset,(void))

void SpriteSymbol_obj::nextFrame(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_101_nextFrame)
HXLINE( 102)		if ((this->_loopMode != HX_("singleframe",a5,64,19,5d))) {
HXLINE( 103)			this->set_currentFrame((this->get_currentFrame() + 1));
            		}
HXLINE( 106)		this->moveMovieclip_MovieClips(1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,nextFrame,(void))

void SpriteSymbol_obj::prevFrame(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_109_prevFrame)
HXLINE( 110)		if ((this->_loopMode != HX_("singleframe",a5,64,19,5d))) {
HXLINE( 111)			this->set_currentFrame((this->get_currentFrame() - 1));
            		}
HXLINE( 114)		this->moveMovieclip_MovieClips(-1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,prevFrame,(void))

void SpriteSymbol_obj::moveMovieclip_MovieClips(::hx::Null< int >  __o_direction){
            		int direction = __o_direction.Default(1);
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_118_moveMovieclip_MovieClips)
HXLINE( 119)		if ((this->_type == HX_("movieclip",80,d6,41,2d))) {
HXLINE( 120)			this->set_currentFrame((this->get_currentFrame() + direction));
            		}
HXLINE( 123)		{
HXLINE( 123)			int _g = 0;
HXDLIN( 123)			int _g1 = this->_numLayers;
HXDLIN( 123)			while((_g < _g1)){
HXLINE( 123)				_g = (_g + 1);
HXDLIN( 123)				int l = (_g - 1);
HXLINE( 124)				 ::openfl::display::Sprite layer = this->getLayer(l);
HXLINE( 125)				int numElements = layer->get_numChildren();
HXLINE( 127)				{
HXLINE( 127)					int _g1 = 0;
HXDLIN( 127)					int _g2 = numElements;
HXDLIN( 127)					while((_g1 < _g2)){
HXLINE( 127)						_g1 = (_g1 + 1);
HXDLIN( 127)						int e = (_g1 - 1);
HXLINE( 128)						 ::animateatlas::displayobject::SpriteSymbol _hx_tmp;
HXDLIN( 128)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 128)							_hx_tmp = ::hx::TCast<  ::animateatlas::displayobject::SpriteSymbol >::cast(layer->getChildAt(e));
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 128)								{
HXLINE( 128)									null();
            								}
HXDLIN( 128)								_hx_tmp = null();
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
HXDLIN( 128)						_hx_tmp->moveMovieclip_MovieClips(direction);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,moveMovieclip_MovieClips,(void))

void SpriteSymbol_obj::update(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_133_update)
HXLINE( 134)		{
HXLINE( 134)			int _g = 0;
HXDLIN( 134)			int _g1 = this->_numLayers;
HXDLIN( 134)			while((_g < _g1)){
HXLINE( 134)				_g = (_g + 1);
HXDLIN( 134)				int i = (_g - 1);
HXLINE( 135)				this->updateLayer(i);
            			}
            		}
HXLINE( 138)		this->_composedFrame = this->_currentFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,update,(void))

void SpriteSymbol_obj::updateLayer(int layerIndex){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_142_updateLayer)
HXLINE( 143)		 ::openfl::display::Sprite layer = this->getLayer(layerIndex);
HXLINE( 144)		 ::Dynamic frameData = this->getFrameData(layerIndex,this->_currentFrame);
HXLINE( 145)		::Array< ::Dynamic> elements;
HXDLIN( 145)		if (::hx::IsNotNull( frameData )) {
HXLINE( 145)			elements = ( (::Array< ::Dynamic>)(frameData->__Field(HX_("elements",37,36,c4,83),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 145)			elements = null();
            		}
HXLINE( 146)		int numElements;
HXDLIN( 146)		if (::hx::IsNotNull( elements )) {
HXLINE( 146)			numElements = elements->length;
            		}
            		else {
HXLINE( 146)			numElements = 0;
            		}
HXLINE( 147)		{
HXLINE( 147)			int _g = 0;
HXDLIN( 147)			int _g1 = numElements;
HXDLIN( 147)			while((_g < _g1)){
HXLINE( 147)				_g = (_g + 1);
HXDLIN( 147)				int i = (_g - 1);
HXLINE( 148)				 ::Dynamic elementData = elements->__get(i)->__Field(HX_("SYMBOL_Instance",bc,4c,fe,3f),::hx::paccDynamic);
HXLINE( 150)				if (::hx::IsNull( elementData )) {
HXLINE( 151)					continue;
            				}
HXLINE( 155)				 ::animateatlas::displayobject::SpriteSymbol oldSymbol;
HXDLIN( 155)				if ((layer->get_numChildren() > i)) {
HXLINE( 155)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 155)						oldSymbol = ::hx::TCast<  ::animateatlas::displayobject::SpriteSymbol >::cast(layer->getChildAt(i));
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 157)							{
HXLINE( 157)								null();
            							}
HXLINE( 155)							oldSymbol = null();
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
            				else {
HXLINE( 155)					oldSymbol = null();
            				}
HXLINE( 160)				 ::animateatlas::displayobject::SpriteSymbol newSymbol = null();
HXLINE( 162)				::String symbolName = ( (::String)(elementData->__Field(HX_("SYMBOL_name",d2,13,ee,07),::hx::paccDynamic)) );
HXLINE( 164)				if (!(this->_library->hasSymbol(symbolName))) {
HXLINE( 165)					symbolName = HX_("___atlas_sprite___",c7,68,ad,ec);
            				}
HXLINE( 168)				bool _hx_tmp;
HXDLIN( 168)				if (::hx::IsNotNull( oldSymbol )) {
HXLINE( 168)					_hx_tmp = (oldSymbol->_symbolName == symbolName);
            				}
            				else {
HXLINE( 168)					_hx_tmp = false;
            				}
HXDLIN( 168)				if (_hx_tmp) {
HXLINE( 169)					newSymbol = oldSymbol;
            				}
            				else {
HXLINE( 171)					if (::hx::IsNotNull( oldSymbol )) {
HXLINE( 172)						if (::hx::IsNotNull( oldSymbol->parent )) {
HXLINE( 173)							oldSymbol->removeChild(oldSymbol);
            						}
HXLINE( 174)						this->_library->putSymbol(oldSymbol);
            					}
HXLINE( 177)					newSymbol = this->_library->getSymbol(symbolName);
HXLINE( 178)					layer->addChildAt(newSymbol,i);
            				}
HXLINE( 181)				newSymbol->setTransformationMatrix(elementData->__Field(HX_("Matrix3D",52,f1,a4,40),::hx::paccDynamic));
HXLINE( 182)				newSymbol->setBitmap(elementData->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic));
HXLINE( 183)				newSymbol->setFilterData(elementData->__Field(HX_("filters",bb,a1,46,09),::hx::paccDynamic));
HXLINE( 184)				newSymbol->setColor(elementData->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic));
HXLINE( 185)				newSymbol->setLoop(( (::String)(elementData->__Field(HX_("loop",64,a6,b7,47),::hx::paccDynamic)) ));
HXLINE( 186)				newSymbol->setType(( (::String)(elementData->__Field(HX_("symbolType",32,5a,06,24),::hx::paccDynamic)) ));
HXLINE( 190)				if ((newSymbol->get_type() == HX_("graphic",a8,5a,07,74))) {
HXLINE( 191)					int firstFrame = ( (int)(elementData->__Field(HX_("firstFrame",dd,c1,61,44),::hx::paccDynamic)) );
HXLINE( 192)					int frameAge = ::Std_obj::_hx_int(( (Float)((this->_currentFrame - ( (int)(frameData->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) ))) ));
HXLINE( 194)					if ((newSymbol->get_loopMode() == HX_("singleframe",a5,64,19,5d))) {
HXLINE( 195)						newSymbol->set_currentFrame(firstFrame);
            					}
            					else {
HXLINE( 196)						if ((newSymbol->get_loopMode() == HX_("loop",64,a6,b7,47))) {
HXLINE( 197)							newSymbol->set_currentFrame(::hx::Mod((firstFrame + frameAge),newSymbol->_numFrames));
            						}
            						else {
HXLINE( 199)							newSymbol->set_currentFrame((firstFrame + frameAge));
            						}
            					}
            				}
            			}
            		}
HXLINE( 205)		int numObsoleteSymbols = (layer->get_numChildren() - numElements);
HXLINE( 207)		{
HXLINE( 207)			int _g2 = 0;
HXDLIN( 207)			int _g3 = numObsoleteSymbols;
HXDLIN( 207)			while((_g2 < _g3)){
HXLINE( 207)				_g2 = (_g2 + 1);
HXDLIN( 207)				int i = (_g2 - 1);
HXLINE( 208)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 209)					 ::animateatlas::displayobject::SpriteSymbol oldSymbol = ::hx::TCast<  ::animateatlas::displayobject::SpriteSymbol >::cast(layer->removeChildAt(numElements));
HXLINE( 210)					if (::hx::IsNotNull( oldSymbol )) {
HXLINE( 211)						this->_library->putSymbol(oldSymbol);
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 212)						{
HXLINE( 212)							null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,updateLayer,(void))

void SpriteSymbol_obj::createLayers(){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_216_createLayers)
HXLINE( 218)		if (::hx::IsNotNull( this->_layers )) {
HXLINE( 219)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("You must not call this twice",85,de,40,3e),null())));
            		}
HXLINE( 221)		this->_layers = ::Array_obj< ::Dynamic>::__new();
HXLINE( 223)		if ((this->_numLayers <= 1)) {
HXLINE( 224)			this->_layers->push(::hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXLINE( 226)			int _g = 0;
HXDLIN( 226)			int _g1 = this->_numLayers;
HXDLIN( 226)			while((_g < _g1)){
HXLINE( 226)				_g = (_g + 1);
HXDLIN( 226)				int i = (_g - 1);
HXLINE( 227)				 ::openfl::display::Sprite layer =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 228)				layer->set_name(( (::String)(this->getLayerData(i)->__Field(HX_("Layer_name",d9,da,23,05),::hx::paccDynamic)) ));
HXLINE( 229)				this->addChild(layer);
HXLINE( 230)				this->_layers->push(layer);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,createLayers,(void))

void SpriteSymbol_obj::setBitmap( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_237_setBitmap)
HXDLIN( 237)		if (::hx::IsNotNull( data )) {
HXLINE( 238)			 ::Dynamic spriteData = this->_library->getSpriteData(( (::String)((data->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) + HX_("",00,00,00,00))) ));
HXLINE( 240)			if (::hx::IsNull( this->_bitmap )) {
HXLINE( 241)				this->_bitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,1,null(),null()),1,this->smoothing);
HXLINE( 242)				this->addChild(this->_bitmap);
            			}
HXLINE( 245)			bool _hx_tmp;
HXDLIN( 245)			bool _hx_tmp1;
HXDLIN( 245)			bool _hx_tmp2;
HXDLIN( 245)			if (::hx::IsEq( this->_tempRect->x,spriteData->__Field(HX_("x",78,00,00,00),::hx::paccDynamic) )) {
HXLINE( 245)				_hx_tmp2 = ::hx::IsNotEq( this->_tempRect->y,spriteData->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 245)				_hx_tmp2 = true;
            			}
HXDLIN( 245)			if (!(_hx_tmp2)) {
HXLINE( 245)				_hx_tmp1 = ::hx::IsNotEq( this->_tempRect->width,spriteData->__Field(HX_("w",77,00,00,00),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 245)				_hx_tmp1 = true;
            			}
HXDLIN( 245)			if (!(_hx_tmp1)) {
HXLINE( 245)				_hx_tmp = ::hx::IsNotEq( this->_tempRect->height,spriteData->__Field(HX_("h",68,00,00,00),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 245)				_hx_tmp = true;
            			}
HXDLIN( 245)			if (_hx_tmp) {
HXLINE( 246)				 ::openfl::display::BitmapData clippedTexture =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,( (int)(spriteData->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) ),( (int)(spriteData->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) ),null(),null());
HXLINE( 247)				this->_tempRect->setTo(( (Float)(spriteData->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ),( (Float)(spriteData->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ),( (Float)(spriteData->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) ),( (Float)(spriteData->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) ));
HXLINE( 248)				clippedTexture->copyPixels(this->_texture,this->_tempRect,this->_zeroPoint,null(),null(),null());
HXLINE( 249)				this->_bitmap->set_bitmapData(clippedTexture);
HXLINE( 250)				this->_bitmap->smoothing = this->smoothing;
            			}
HXLINE( 255)			if (( (bool)(spriteData->__Field(HX_("rotated",a9,49,1d,f1),::hx::paccDynamic)) )) {
HXLINE( 256)				this->_bitmap->set_rotation(( (Float)(-90) ));
HXLINE( 257)				this->_bitmap->set_x(( (Float)( ::Dynamic(data->__Field(HX_("Position",c9,5c,ac,a4),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE( 258)				this->_bitmap->set_y(( (Float)(( ::Dynamic(data->__Field(HX_("Position",c9,5c,ac,a4),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) + spriteData->__Field(HX_("w",77,00,00,00),::hx::paccDynamic))) ));
            			}
            			else {
HXLINE( 260)				this->_bitmap->set_rotation(( (Float)(0) ));
HXLINE( 261)				this->_bitmap->set_x(( (Float)( ::Dynamic(data->__Field(HX_("Position",c9,5c,ac,a4),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE( 262)				this->_bitmap->set_y(( (Float)( ::Dynamic(data->__Field(HX_("Position",c9,5c,ac,a4),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
            			}
HXLINE( 265)			this->addChildAt(this->_bitmap,0);
            		}
            		else {
HXLINE( 266)			if (::hx::IsNotNull( this->_bitmap )) {
HXLINE( 267)				if (::hx::IsNotNull( this->_bitmap->parent )) {
HXLINE( 268)					this->_bitmap->parent->removeChild(this->_bitmap);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setBitmap,(void))

void SpriteSymbol_obj::setFilterData( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_272_setFilterData)
HXLINE( 273)		 ::openfl::filters::BlurFilter blur;
HXLINE( 274)		 ::openfl::filters::GlowFilter glow;
HXLINE( 275)		if (::hx::IsNotNull( data )) {
HXLINE( 276)			if (::hx::IsNotNull( data->__Field(HX_("BlurFilter",df,d1,71,f3),::hx::paccDynamic) )) {
HXLINE( 277)				blur =  ::openfl::filters::BlurFilter_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 278)				blur->set_blurX(( (Float)( ::Dynamic(data->__Field(HX_("BlurFilter",df,d1,71,f3),::hx::paccDynamic))->__Field(HX_("blurX",d1,0f,01,b5),::hx::paccDynamic)) ));
HXLINE( 279)				blur->set_blurY(( (Float)( ::Dynamic(data->__Field(HX_("BlurFilter",df,d1,71,f3),::hx::paccDynamic))->__Field(HX_("blurY",d2,0f,01,b5),::hx::paccDynamic)) ));
HXLINE( 280)				blur->set_quality(( (int)( ::Dynamic(data->__Field(HX_("BlurFilter",df,d1,71,f3),::hx::paccDynamic))->__Field(HX_("quality",bf,04,4c,44),::hx::paccDynamic)) ));
            			}
HXLINE( 284)			bool _hx_tmp = ::hx::IsNotNull( data->__Field(HX_("GlowFilter",45,ce,a2,2d),::hx::paccDynamic) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setFilterData,(void))

void SpriteSymbol_obj::setTransformationMatrix( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_306_setTransformationMatrix)
HXLINE( 307)		::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->setTo(( (Float)(data->__Field(HX_("m00",ad,df,52,00),::hx::paccDynamic)) ),( (Float)(data->__Field(HX_("m01",ae,df,52,00),::hx::paccDynamic)) ),( (Float)(data->__Field(HX_("m10",8c,e0,52,00),::hx::paccDynamic)) ),( (Float)(data->__Field(HX_("m11",8d,e0,52,00),::hx::paccDynamic)) ),( (Float)(data->__Field(HX_("m30",4a,e2,52,00),::hx::paccDynamic)) ),( (Float)(data->__Field(HX_("m31",4b,e2,52,00),::hx::paccDynamic)) ));
HXLINE( 308)		bool _hx_tmp;
HXDLIN( 308)		bool _hx_tmp1;
HXDLIN( 308)		bool _hx_tmp2;
HXDLIN( 308)		bool _hx_tmp3;
HXDLIN( 308)		bool _hx_tmp4;
HXDLIN( 308)		Float _hx_tmp5 = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->a;
HXDLIN( 308)		if ((_hx_tmp5 == this->get_transform()->get_matrix()->a)) {
HXLINE( 308)			Float _hx_tmp = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->b;
HXDLIN( 308)			_hx_tmp4 = (_hx_tmp != this->get_transform()->get_matrix()->b);
            		}
            		else {
HXLINE( 308)			_hx_tmp4 = true;
            		}
HXDLIN( 308)		if (!(_hx_tmp4)) {
HXLINE( 308)			Float _hx_tmp = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->c;
HXDLIN( 308)			_hx_tmp3 = (_hx_tmp != this->get_transform()->get_matrix()->c);
            		}
            		else {
HXLINE( 308)			_hx_tmp3 = true;
            		}
HXDLIN( 308)		if (!(_hx_tmp3)) {
HXLINE( 308)			Float _hx_tmp = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->d;
HXDLIN( 308)			_hx_tmp2 = (_hx_tmp != this->get_transform()->get_matrix()->d);
            		}
            		else {
HXLINE( 308)			_hx_tmp2 = true;
            		}
HXDLIN( 308)		if (!(_hx_tmp2)) {
HXLINE( 309)			Float _hx_tmp = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->tx;
HXLINE( 308)			_hx_tmp1 = (_hx_tmp != this->get_transform()->get_matrix()->tx);
            		}
            		else {
HXLINE( 308)			_hx_tmp1 = true;
            		}
HXDLIN( 308)		if (!(_hx_tmp1)) {
HXLINE( 309)			Float _hx_tmp1 = ::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->ty;
HXLINE( 308)			_hx_tmp = (_hx_tmp1 != this->get_transform()->get_matrix()->ty);
            		}
            		else {
HXLINE( 308)			_hx_tmp = true;
            		}
HXDLIN( 308)		if (_hx_tmp) {
HXLINE( 310)			 ::openfl::geom::Transform _hx_tmp = this->get_transform();
HXDLIN( 310)			_hx_tmp->set_matrix(::animateatlas::displayobject::SpriteSymbol_obj::sMatrix->clone());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setTransformationMatrix,(void))

void SpriteSymbol_obj::setColor( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_313_setColor)
HXLINE( 314)		 ::openfl::geom::ColorTransform newTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 315)		if (::hx::IsNotNull( data )) {
HXLINE( 316)			Float _hx_tmp;
HXDLIN( 316)			if (::hx::IsNull( data->__Field(HX_("redOffset",c4,37,9e,53),::hx::paccDynamic) )) {
HXLINE( 316)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE( 316)				_hx_tmp = ( (Float)(data->__Field(HX_("redOffset",c4,37,9e,53),::hx::paccDynamic)) );
            			}
HXDLIN( 316)			newTransform->redOffset = _hx_tmp;
HXLINE( 317)			Float _hx_tmp1;
HXDLIN( 317)			if (::hx::IsNull( data->__Field(HX_("greenOffset",b6,0e,d9,b7),::hx::paccDynamic) )) {
HXLINE( 317)				_hx_tmp1 = ( (Float)(0) );
            			}
            			else {
HXLINE( 317)				_hx_tmp1 = ( (Float)(data->__Field(HX_("greenOffset",b6,0e,d9,b7),::hx::paccDynamic)) );
            			}
HXDLIN( 317)			newTransform->greenOffset = _hx_tmp1;
HXLINE( 318)			Float _hx_tmp2;
HXDLIN( 318)			if (::hx::IsNull( data->__Field(HX_("blueOffset",cd,3d,34,bb),::hx::paccDynamic) )) {
HXLINE( 318)				_hx_tmp2 = ( (Float)(0) );
            			}
            			else {
HXLINE( 318)				_hx_tmp2 = ( (Float)(data->__Field(HX_("blueOffset",cd,3d,34,bb),::hx::paccDynamic)) );
            			}
HXDLIN( 318)			newTransform->blueOffset = _hx_tmp2;
HXLINE( 319)			Float _hx_tmp3;
HXDLIN( 319)			if (::hx::IsNull( data->__Field(HX_("AlphaOffset",71,25,76,b4),::hx::paccDynamic) )) {
HXLINE( 319)				_hx_tmp3 = ( (Float)(0) );
            			}
            			else {
HXLINE( 319)				_hx_tmp3 = ( (Float)(data->__Field(HX_("AlphaOffset",71,25,76,b4),::hx::paccDynamic)) );
            			}
HXDLIN( 319)			newTransform->alphaOffset = _hx_tmp3;
HXLINE( 321)			Float _hx_tmp4;
HXDLIN( 321)			if (::hx::IsNull( data->__Field(HX_("RedMultiplier",12,44,da,96),::hx::paccDynamic) )) {
HXLINE( 321)				_hx_tmp4 = ( (Float)(1) );
            			}
            			else {
HXLINE( 321)				_hx_tmp4 = ( (Float)(data->__Field(HX_("RedMultiplier",12,44,da,96),::hx::paccDynamic)) );
            			}
HXDLIN( 321)			newTransform->redMultiplier = _hx_tmp4;
HXLINE( 322)			Float _hx_tmp5;
HXDLIN( 322)			if (::hx::IsNull( data->__Field(HX_("greenMultiplier",24,2c,40,6f),::hx::paccDynamic) )) {
HXLINE( 322)				_hx_tmp5 = ( (Float)(1) );
            			}
            			else {
HXLINE( 322)				_hx_tmp5 = ( (Float)(data->__Field(HX_("greenMultiplier",24,2c,40,6f),::hx::paccDynamic)) );
            			}
HXDLIN( 322)			newTransform->greenMultiplier = _hx_tmp5;
HXLINE( 323)			Float _hx_tmp6;
HXDLIN( 323)			if (::hx::IsNull( data->__Field(HX_("blueMultiplier",bb,32,96,cf),::hx::paccDynamic) )) {
HXLINE( 323)				_hx_tmp6 = ( (Float)(1) );
            			}
            			else {
HXLINE( 323)				_hx_tmp6 = ( (Float)(data->__Field(HX_("blueMultiplier",bb,32,96,cf),::hx::paccDynamic)) );
            			}
HXDLIN( 323)			newTransform->blueMultiplier = _hx_tmp6;
HXLINE( 324)			Float _hx_tmp7;
HXDLIN( 324)			if (::hx::IsNull( data->__Field(HX_("alphaMultiplier",7f,b4,82,9a),::hx::paccDynamic) )) {
HXLINE( 324)				_hx_tmp7 = ( (Float)(1) );
            			}
            			else {
HXLINE( 324)				_hx_tmp7 = ( (Float)(data->__Field(HX_("alphaMultiplier",7f,b4,82,9a),::hx::paccDynamic)) );
            			}
HXDLIN( 324)			newTransform->alphaMultiplier = _hx_tmp7;
HXLINE( 327)			if (::hx::IsEq( data->__Field(HX_("mode",63,d3,60,48),::hx::paccDynamic),HX_("Tint",1b,f9,d5,37) )) {
HXLINE( 328)				int color = ( (int)(::Std_obj::parseInt(::StringTools_obj::replace(( (::String)(data->__Field(HX_("tintColor",68,26,3d,28),::hx::paccDynamic)) ),HX_("#",23,00,00,00),HX_("0xFF",88,89,15,20)))) );
HXLINE( 331)				newTransform->redMultiplier = ( (Float)(0) );
HXLINE( 332)				newTransform->greenMultiplier = ( (Float)(0) );
HXLINE( 333)				newTransform->blueMultiplier = ( (Float)(0) );
HXLINE( 334)				newTransform->redOffset = (( (Float)(((color >> 16) & 255)) ) * ( (Float)(data->__Field(HX_("tintMultiplier",5c,e0,50,6f),::hx::paccDynamic)) ));
HXLINE( 335)				newTransform->greenOffset = (( (Float)(((color >> 8) & 255)) ) * ( (Float)(data->__Field(HX_("tintMultiplier",5c,e0,50,6f),::hx::paccDynamic)) ));
HXLINE( 336)				newTransform->blueOffset = (( (Float)((color & 255)) ) * ( (Float)(data->__Field(HX_("tintMultiplier",5c,e0,50,6f),::hx::paccDynamic)) ));
            			}
            		}
HXLINE( 340)		this->get_transform()->set_colorTransform(newTransform);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setColor,(void))

void SpriteSymbol_obj::setLoop(::String data){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_345_setLoop)
HXDLIN( 345)		if (::hx::IsNotNull( data )) {
HXLINE( 346)			this->_loopMode = data;
            		}
            		else {
HXLINE( 348)			this->_loopMode = HX_("loop",64,a6,b7,47);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setLoop,(void))

void SpriteSymbol_obj::setType(::String data){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_353_setType)
HXDLIN( 353)		if (::hx::IsNotNull( data )) {
HXLINE( 354)			this->_type = data;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,setType,(void))

int SpriteSymbol_obj::getNumFrames(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_358_getNumFrames)
HXLINE( 359)		int numFrames = 0;
HXLINE( 361)		{
HXLINE( 361)			int _g = 0;
HXDLIN( 361)			int _g1 = this->_numLayers;
HXDLIN( 361)			while((_g < _g1)){
HXLINE( 361)				_g = (_g + 1);
HXDLIN( 361)				int i = (_g - 1);
HXLINE( 362)				 ::Dynamic layer = this->getLayerData(i);
HXLINE( 363)				::Array< ::Dynamic> frameDates;
HXDLIN( 363)				if (::hx::IsNull( layer )) {
HXLINE( 363)					frameDates = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 363)					frameDates = ( (::Array< ::Dynamic>)(layer->__Field(HX_("Frames",c6,23,1a,e1),::hx::paccDynamic)) );
            				}
HXLINE( 364)				int numFrameDates;
HXDLIN( 364)				if (::hx::IsNotNull( frameDates )) {
HXLINE( 364)					numFrameDates = frameDates->length;
            				}
            				else {
HXLINE( 364)					numFrameDates = 0;
            				}
HXLINE( 365)				int layerNumFrames;
HXDLIN( 365)				if ((numFrameDates != 0)) {
HXLINE( 365)					layerNumFrames = ( (int)(frameDates->__get(0)->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 365)					layerNumFrames = 0;
            				}
HXLINE( 367)				{
HXLINE( 367)					int _g1 = 0;
HXDLIN( 367)					int _g2 = numFrameDates;
HXDLIN( 367)					while((_g1 < _g2)){
HXLINE( 367)						_g1 = (_g1 + 1);
HXDLIN( 367)						int j = (_g1 - 1);
HXLINE( 368)						layerNumFrames = ( (int)((layerNumFrames + frameDates->__get(j)->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic))) );
            					}
            				}
HXLINE( 371)				if ((layerNumFrames > numFrames)) {
HXLINE( 372)					numFrames = layerNumFrames;
            				}
            			}
            		}
HXLINE( 376)		if ((numFrames == 0)) {
HXLINE( 376)			return 1;
            		}
            		else {
HXLINE( 376)			return numFrames;
            		}
HXDLIN( 376)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,getNumFrames,return )

::Array< ::Dynamic> SpriteSymbol_obj::_getFrameLabels(){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_379__getFrameLabels)
HXLINE( 380)		::Array< ::Dynamic> labels = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 382)		{
HXLINE( 382)			int _g = 0;
HXDLIN( 382)			int _g1 = this->_numLayers;
HXDLIN( 382)			while((_g < _g1)){
HXLINE( 382)				_g = (_g + 1);
HXDLIN( 382)				int i = (_g - 1);
HXLINE( 383)				 ::Dynamic layer = this->getLayerData(i);
HXLINE( 384)				::Array< ::Dynamic> frameDates;
HXDLIN( 384)				if (::hx::IsNull( layer )) {
HXLINE( 384)					frameDates = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 384)					frameDates = ( (::Array< ::Dynamic>)(layer->__Field(HX_("Frames",c6,23,1a,e1),::hx::paccDynamic)) );
            				}
HXLINE( 385)				int numFrameDates;
HXDLIN( 385)				if (::hx::IsNotNull( frameDates )) {
HXLINE( 385)					numFrameDates = frameDates->length;
            				}
            				else {
HXLINE( 385)					numFrameDates = 0;
            				}
HXLINE( 387)				{
HXLINE( 387)					int _g1 = 0;
HXDLIN( 387)					int _g2 = numFrameDates;
HXDLIN( 387)					while((_g1 < _g2)){
HXLINE( 387)						_g1 = (_g1 + 1);
HXDLIN( 387)						int j = (_g1 - 1);
HXLINE( 388)						 ::Dynamic frameData = frameDates->__get(j);
HXLINE( 389)						if (::hx::IsNotNull( frameData->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) )) {
HXLINE( 390)							labels->push( ::openfl::display::FrameLabel_obj::__alloc( HX_CTX ,( (::String)(frameData->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),( (int)(frameData->__Field(HX_("index",12,9b,14,be),::hx::paccDynamic)) )));
            						}
            					}
            				}
            			}
            		}
HXLINE( 394)		labels->sort(this->sortLabels_dyn());
HXLINE( 395)		return labels;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,_getFrameLabels,return )

::Array< ::String > SpriteSymbol_obj::getFrameLabels(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_399_getFrameLabels)
HXDLIN( 399)		::Array< ::Dynamic> _this = this->_frameLabels;
HXDLIN( 399)		::Array< ::String > result = ::Array_obj< ::String >::__new(_this->length);
HXDLIN( 399)		{
HXDLIN( 399)			int _g = 0;
HXDLIN( 399)			int _g1 = _this->length;
HXDLIN( 399)			while((_g < _g1)){
HXDLIN( 399)				_g = (_g + 1);
HXDLIN( 399)				int i = (_g - 1);
HXDLIN( 399)				{
HXDLIN( 399)					::String inValue = ( ( ::openfl::display::FrameLabel)(_hx_array_unsafe_get(_this,i)) )->name;
HXDLIN( 399)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN( 399)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,getFrameLabels,return )

int SpriteSymbol_obj::sortLabels( ::openfl::display::FrameLabel i1, ::openfl::display::FrameLabel i2){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_404_sortLabels)
HXLINE( 405)		int f1 = i1->frame;
HXLINE( 406)		int f2 = i2->frame;
HXLINE( 407)		if ((f1 < f2)) {
HXLINE( 408)			return -1;
            		}
            		else {
HXLINE( 409)			if ((f1 > f2)) {
HXLINE( 410)				return 1;
            			}
            			else {
HXLINE( 412)				return 0;
            			}
            		}
HXLINE( 407)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SpriteSymbol_obj,sortLabels,return )

 ::openfl::display::Sprite SpriteSymbol_obj::getLayer(int layerIndex){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_417_getLayer)
HXDLIN( 417)		return this->_layers->__get(layerIndex).StaticCast<  ::openfl::display::Sprite >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,getLayer,return )

 ::openfl::display::BitmapData SpriteSymbol_obj::getTexture(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_422_getTexture)
HXDLIN( 422)		return this->_texture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,getTexture,return )

::String SpriteSymbol_obj::getNextLabel(::String afterLabel){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_425_getNextLabel)
HXLINE( 426)		int numLabels = this->_frameLabels->length;
HXLINE( 427)		::String startFrame;
HXDLIN( 427)		if (::hx::IsNull( afterLabel )) {
HXLINE( 427)			startFrame = this->get_currentLabel();
            		}
            		else {
HXLINE( 427)			startFrame = afterLabel;
            		}
HXDLIN( 427)		int startFrame1 = this->getFrame(startFrame);
HXLINE( 429)		{
HXLINE( 429)			int _g = 0;
HXDLIN( 429)			int _g1 = numLabels;
HXDLIN( 429)			while((_g < _g1)){
HXLINE( 429)				_g = (_g + 1);
HXDLIN( 429)				int i = (_g - 1);
HXLINE( 430)				 ::openfl::display::FrameLabel label = this->_frameLabels->__get(i).StaticCast<  ::openfl::display::FrameLabel >();
HXLINE( 431)				if ((label->frame > startFrame1)) {
HXLINE( 432)					return label->name;
            				}
            			}
            		}
HXLINE( 436)		if (::hx::IsNotNull( this->_frameLabels )) {
HXLINE( 436)			return this->_frameLabels->__get(0).StaticCast<  ::openfl::display::FrameLabel >()->name;
            		}
            		else {
HXLINE( 436)			return null();
            		}
HXDLIN( 436)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,getNextLabel,return )

::String SpriteSymbol_obj::get_currentLabel(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_439_get_currentLabel)
HXLINE( 440)		int numLabels = this->_frameLabels->length;
HXLINE( 441)		 ::openfl::display::FrameLabel highestLabel;
HXDLIN( 441)		if ((numLabels != 0)) {
HXLINE( 441)			highestLabel = this->_frameLabels->__get(0).StaticCast<  ::openfl::display::FrameLabel >();
            		}
            		else {
HXLINE( 441)			highestLabel = null();
            		}
HXLINE( 443)		{
HXLINE( 443)			int _g = 1;
HXDLIN( 443)			int _g1 = numLabels;
HXDLIN( 443)			while((_g < _g1)){
HXLINE( 443)				_g = (_g + 1);
HXDLIN( 443)				int i = (_g - 1);
HXLINE( 444)				 ::openfl::display::FrameLabel label = this->_frameLabels->__get(i).StaticCast<  ::openfl::display::FrameLabel >();
HXLINE( 446)				if ((label->frame <= this->_currentFrame)) {
HXLINE( 447)					highestLabel = label;
            				}
            				else {
HXLINE( 449)					goto _hx_goto_36;
            				}
            			}
            			_hx_goto_36:;
            		}
HXLINE( 453)		if (::hx::IsNotNull( highestLabel )) {
HXLINE( 453)			return highestLabel->name;
            		}
            		else {
HXLINE( 453)			return null();
            		}
HXDLIN( 453)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_currentLabel,return )

int SpriteSymbol_obj::getFrame(::String label){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_456_getFrame)
HXLINE( 457)		int numLabels = this->_frameLabels->length;
HXLINE( 458)		{
HXLINE( 458)			int _g = 0;
HXDLIN( 458)			int _g1 = numLabels;
HXDLIN( 458)			while((_g < _g1)){
HXLINE( 458)				_g = (_g + 1);
HXDLIN( 458)				int i = (_g - 1);
HXLINE( 459)				 ::openfl::display::FrameLabel frameLabel = this->_frameLabels->__get(i).StaticCast<  ::openfl::display::FrameLabel >();
HXLINE( 460)				if ((frameLabel->name == label)) {
HXLINE( 461)					return frameLabel->frame;
            				}
            			}
            		}
HXLINE( 464)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,getFrame,return )

int SpriteSymbol_obj::get_currentFrame(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_468_get_currentFrame)
HXDLIN( 468)		return this->_currentFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_currentFrame,return )

int SpriteSymbol_obj::set_currentFrame(int value){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_471_set_currentFrame)
HXLINE( 472)		while((value < 0)){
HXLINE( 473)			value = (value + this->_numFrames);
            		}
HXLINE( 476)		if ((this->_loopMode == HX_("playonce",75,b5,ec,4e))) {
HXLINE( 477)			this->_currentFrame = ::Std_obj::_hx_int(::Math_obj::min(::Math_obj::max(( (Float)(value) ),( (Float)(0) )),( (Float)((this->_numFrames - 1)) )));
            		}
            		else {
HXLINE( 479)			this->_currentFrame = ::Std_obj::_hx_int(::Math_obj::abs(( (Float)(::hx::Mod(value,this->_numFrames)) )));
            		}
HXLINE( 482)		if ((this->_composedFrame != this->_currentFrame)) {
HXLINE( 483)			this->update();
            		}
HXLINE( 485)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,set_currentFrame,return )

::String SpriteSymbol_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_489_get_type)
HXDLIN( 489)		return this->_type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_type,return )

::String SpriteSymbol_obj::set_type(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_492_set_type)
HXLINE( 493)		if (::animateatlas::_HelperEnums::SymbolType_Impl__obj::isValid(value)) {
HXLINE( 494)			this->_type = value;
            		}
            		else {
HXLINE( 496)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Invalid symbol type: ",9f,24,99,f4) + value))));
            		}
HXLINE( 498)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,set_type,return )

::String SpriteSymbol_obj::get_loopMode(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_502_get_loopMode)
HXDLIN( 502)		return this->_loopMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_loopMode,return )

::String SpriteSymbol_obj::set_loopMode(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_505_set_loopMode)
HXLINE( 506)		if (::animateatlas::_HelperEnums::LoopMode_Impl__obj::isValid(value)) {
HXLINE( 507)			this->_loopMode = value;
            		}
            		else {
HXLINE( 509)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Invalid loop mode: ",3c,88,fe,85) + value))));
            		}
HXLINE( 511)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,set_loopMode,return )

::String SpriteSymbol_obj::get_symbolName(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_515_get_symbolName)
HXDLIN( 515)		return this->_symbolName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_symbolName,return )

int SpriteSymbol_obj::get_numLayers(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_519_get_numLayers)
HXDLIN( 519)		return this->_numLayers;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_numLayers,return )

int SpriteSymbol_obj::get_numFrames(){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_523_get_numFrames)
HXDLIN( 523)		return this->_numFrames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSymbol_obj,get_numFrames,return )

 ::Dynamic SpriteSymbol_obj::getLayerData(int layerIndex){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_529_getLayerData)
HXDLIN( 529)		return  ::Dynamic( ::Dynamic(this->_data->__Field(HX_("TIMELINE",81,fe,c0,56),::hx::paccDynamic))->__Field(HX_("LAYERS",82,c1,33,0b),::hx::paccDynamic))->__GetItem(layerIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SpriteSymbol_obj,getLayerData,return )

 ::Dynamic SpriteSymbol_obj::getFrameData(int layerIndex,int frameIndex){
            	HX_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_532_getFrameData)
HXLINE( 533)		 ::Dynamic layer = this->getLayerData(layerIndex);
HXLINE( 534)		if (::hx::IsNull( layer )) {
HXLINE( 535)			return null();
            		}
HXLINE( 537)		return ( ( ::haxe::ds::IntMap)( ::Dynamic(layer->__Field(HX_("FrameMap",8f,a0,a2,f6),::hx::paccDynamic))) )->get(frameIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SpriteSymbol_obj,getFrameData,return )

 ::openfl::geom::Matrix SpriteSymbol_obj::sMatrix;


::hx::ObjectPtr< SpriteSymbol_obj > SpriteSymbol_obj::__new( ::Dynamic data, ::animateatlas::displayobject::SpriteAnimationLibrary library, ::openfl::display::BitmapData texture) {
	::hx::ObjectPtr< SpriteSymbol_obj > __this = new SpriteSymbol_obj();
	__this->__construct(data,library,texture);
	return __this;
}

::hx::ObjectPtr< SpriteSymbol_obj > SpriteSymbol_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic data, ::animateatlas::displayobject::SpriteAnimationLibrary library, ::openfl::display::BitmapData texture) {
	SpriteSymbol_obj *__this = (SpriteSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SpriteSymbol_obj), true, "animateatlas.displayobject.SpriteSymbol"));
	*(void **)__this = SpriteSymbol_obj::_hx_vtable;
	__this->__construct(data,library,texture);
	return __this;
}

SpriteSymbol_obj::SpriteSymbol_obj()
{
}

void SpriteSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteSymbol);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_library,"_library");
	HX_MARK_MEMBER_NAME(_symbolName,"_symbolName");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_loopMode,"_loopMode");
	HX_MARK_MEMBER_NAME(_currentFrame,"_currentFrame");
	HX_MARK_MEMBER_NAME(_composedFrame,"_composedFrame");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_numFrames,"_numFrames");
	HX_MARK_MEMBER_NAME(_numLayers,"_numLayers");
	HX_MARK_MEMBER_NAME(_frameLabels,"_frameLabels");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_layers,"_layers");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_tempRect,"_tempRect");
	HX_MARK_MEMBER_NAME(_zeroPoint,"_zeroPoint");
	HX_MARK_MEMBER_NAME(filterHelper,"filterHelper");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpriteSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_library,"_library");
	HX_VISIT_MEMBER_NAME(_symbolName,"_symbolName");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_loopMode,"_loopMode");
	HX_VISIT_MEMBER_NAME(_currentFrame,"_currentFrame");
	HX_VISIT_MEMBER_NAME(_composedFrame,"_composedFrame");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_numFrames,"_numFrames");
	HX_VISIT_MEMBER_NAME(_numLayers,"_numLayers");
	HX_VISIT_MEMBER_NAME(_frameLabels,"_frameLabels");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_layers,"_layers");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_tempRect,"_tempRect");
	HX_VISIT_MEMBER_NAME(_zeroPoint,"_zeroPoint");
	HX_VISIT_MEMBER_NAME(filterHelper,"filterHelper");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SpriteSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_type() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		if (HX_FIELD_EQ(inName,"_type") ) { return ::hx::Val( _type ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return ::hx::Val( _bitmap ); }
		if (HX_FIELD_EQ(inName,"_layers") ) { return ::hx::Val( _layers ); }
		if (HX_FIELD_EQ(inName,"setLoop") ) { return ::hx::Val( setLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"setType") ) { return ::hx::Val( setType_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_loopMode() ); }
		if (HX_FIELD_EQ(inName,"_library") ) { return ::hx::Val( _library ); }
		if (HX_FIELD_EQ(inName,"_texture") ) { return ::hx::Val( _texture ); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return ::hx::Val( setColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return ::hx::Val( getLayer_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return ::hx::Val( getFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return ::hx::Val( set_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numLayers") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numLayers() ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numFrames() ); }
		if (HX_FIELD_EQ(inName,"_loopMode") ) { return ::hx::Val( _loopMode ); }
		if (HX_FIELD_EQ(inName,"_tempRect") ) { return ::hx::Val( _tempRect ); }
		if (HX_FIELD_EQ(inName,"smoothing") ) { return ::hx::Val( smoothing ); }
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return ::hx::Val( nextFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return ::hx::Val( prevFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBitmap") ) { return ::hx::Val( setBitmap_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"symbolName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_symbolName() ); }
		if (HX_FIELD_EQ(inName,"_numFrames") ) { return ::hx::Val( _numFrames ); }
		if (HX_FIELD_EQ(inName,"_numLayers") ) { return ::hx::Val( _numLayers ); }
		if (HX_FIELD_EQ(inName,"_zeroPoint") ) { return ::hx::Val( _zeroPoint ); }
		if (HX_FIELD_EQ(inName,"sortLabels") ) { return ::hx::Val( sortLabels_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return ::hx::Val( getTexture_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_symbolName") ) { return ::hx::Val( _symbolName ); }
		if (HX_FIELD_EQ(inName,"updateLayer") ) { return ::hx::Val( updateLayer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLabel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentLabel() ); }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentFrame() ); }
		if (HX_FIELD_EQ(inName,"_frameLabels") ) { return ::hx::Val( _frameLabels ); }
		if (HX_FIELD_EQ(inName,"filterHelper") ) { return ::hx::Val( filterHelper ); }
		if (HX_FIELD_EQ(inName,"createLayers") ) { return ::hx::Val( createLayers_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNumFrames") ) { return ::hx::Val( getNumFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNextLabel") ) { return ::hx::Val( getNextLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_loopMode") ) { return ::hx::Val( get_loopMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_loopMode") ) { return ::hx::Val( set_loopMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLayerData") ) { return ::hx::Val( getLayerData_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrameData") ) { return ::hx::Val( getFrameData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentFrame") ) { return ::hx::Val( _currentFrame ); }
		if (HX_FIELD_EQ(inName,"setFilterData") ) { return ::hx::Val( setFilterData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numLayers") ) { return ::hx::Val( get_numLayers_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return ::hx::Val( get_numFrames_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_composedFrame") ) { return ::hx::Val( _composedFrame ); }
		if (HX_FIELD_EQ(inName,"getFrameLabels") ) { return ::hx::Val( getFrameLabels_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_symbolName") ) { return ::hx::Val( get_symbolName_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return ::hx::Val( _colorTransform ); }
		if (HX_FIELD_EQ(inName,"_getFrameLabels") ) { return ::hx::Val( _getFrameLabels_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentLabel") ) { return ::hx::Val( get_currentLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return ::hx::Val( get_currentFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_currentFrame") ) { return ::hx::Val( set_currentFrame_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setTransformationMatrix") ) { return ::hx::Val( setTransformationMatrix_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"moveMovieclip_MovieClips") ) { return ::hx::Val( moveMovieclip_MovieClips_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SpriteSymbol_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sMatrix") ) { outValue = ( sMatrix ); return true; }
	}
	return false;
}

::hx::Val SpriteSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_type(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layers") ) { _layers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_loopMode(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"_library") ) { _library=inValue.Cast<  ::animateatlas::displayobject::SpriteAnimationLibrary >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_loopMode") ) { _loopMode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tempRect") ) { _tempRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_numFrames") ) { _numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numLayers") ) { _numLayers=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zeroPoint") ) { _zeroPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_symbolName") ) { _symbolName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_currentFrame(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_frameLabels") ) { _frameLabels=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterHelper") ) { filterHelper=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentFrame") ) { _currentFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_composedFrame") ) { _composedFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SpriteSymbol_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sMatrix") ) { sMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

void SpriteSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentLabel",fb,f2,ba,b6));
	outFields->push(HX_("currentFrame",34,5d,8f,4d));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("loopMode",e7,a7,ce,3a));
	outFields->push(HX_("symbolName",c3,d9,fc,1f));
	outFields->push(HX_("numLayers",68,60,b2,09));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("_library",7c,80,28,79));
	outFields->push(HX_("_symbolName",e2,a6,86,f2));
	outFields->push(HX_("_type",99,0e,1a,00));
	outFields->push(HX_("_loopMode",46,9f,64,82));
	outFields->push(HX_("_currentFrame",13,f0,fd,2f));
	outFields->push(HX_("_composedFrame",fc,bf,b9,de));
	outFields->push(HX_("_bitmap",8e,21,83,5f));
	outFields->push(HX_("_numFrames",4d,76,29,b9));
	outFields->push(HX_("_numLayers",29,dc,54,65));
	outFields->push(HX_("_frameLabels",0d,a2,ce,8d));
	outFields->push(HX_("_colorTransform",28,20,a0,f6));
	outFields->push(HX_("_layers",21,27,28,c7));
	outFields->push(HX_("_texture",5c,22,99,d8));
	outFields->push(HX_("_tempRect",b7,4d,b1,e2));
	outFields->push(HX_("_zeroPoint",c9,9f,7e,b3));
	outFields->push(HX_("filterHelper",46,ab,a6,10));
	outFields->push(HX_("smoothing",74,d5,e1,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SpriteSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SpriteSymbol_obj,_data),HX_("_data",09,72,74,f5)},
	{::hx::fsObject /*  ::animateatlas::displayobject::SpriteAnimationLibrary */ ,(int)offsetof(SpriteSymbol_obj,_library),HX_("_library",7c,80,28,79)},
	{::hx::fsString,(int)offsetof(SpriteSymbol_obj,_symbolName),HX_("_symbolName",e2,a6,86,f2)},
	{::hx::fsString,(int)offsetof(SpriteSymbol_obj,_type),HX_("_type",99,0e,1a,00)},
	{::hx::fsString,(int)offsetof(SpriteSymbol_obj,_loopMode),HX_("_loopMode",46,9f,64,82)},
	{::hx::fsInt,(int)offsetof(SpriteSymbol_obj,_currentFrame),HX_("_currentFrame",13,f0,fd,2f)},
	{::hx::fsInt,(int)offsetof(SpriteSymbol_obj,_composedFrame),HX_("_composedFrame",fc,bf,b9,de)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(SpriteSymbol_obj,_bitmap),HX_("_bitmap",8e,21,83,5f)},
	{::hx::fsInt,(int)offsetof(SpriteSymbol_obj,_numFrames),HX_("_numFrames",4d,76,29,b9)},
	{::hx::fsInt,(int)offsetof(SpriteSymbol_obj,_numLayers),HX_("_numLayers",29,dc,54,65)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SpriteSymbol_obj,_frameLabels),HX_("_frameLabels",0d,a2,ce,8d)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(SpriteSymbol_obj,_colorTransform),HX_("_colorTransform",28,20,a0,f6)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SpriteSymbol_obj,_layers),HX_("_layers",21,27,28,c7)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(SpriteSymbol_obj,_texture),HX_("_texture",5c,22,99,d8)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(SpriteSymbol_obj,_tempRect),HX_("_tempRect",b7,4d,b1,e2)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(SpriteSymbol_obj,_zeroPoint),HX_("_zeroPoint",c9,9f,7e,b3)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(SpriteSymbol_obj,filterHelper),HX_("filterHelper",46,ab,a6,10)},
	{::hx::fsBool,(int)offsetof(SpriteSymbol_obj,smoothing),HX_("smoothing",74,d5,e1,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SpriteSymbol_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &SpriteSymbol_obj::sMatrix,HX_("sMatrix",14,03,81,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SpriteSymbol_obj_sMemberFields[] = {
	HX_("_data",09,72,74,f5),
	HX_("_library",7c,80,28,79),
	HX_("_symbolName",e2,a6,86,f2),
	HX_("_type",99,0e,1a,00),
	HX_("_loopMode",46,9f,64,82),
	HX_("_currentFrame",13,f0,fd,2f),
	HX_("_composedFrame",fc,bf,b9,de),
	HX_("_bitmap",8e,21,83,5f),
	HX_("_numFrames",4d,76,29,b9),
	HX_("_numLayers",29,dc,54,65),
	HX_("_frameLabels",0d,a2,ce,8d),
	HX_("_colorTransform",28,20,a0,f6),
	HX_("_layers",21,27,28,c7),
	HX_("_texture",5c,22,99,d8),
	HX_("_tempRect",b7,4d,b1,e2),
	HX_("_zeroPoint",c9,9f,7e,b3),
	HX_("filterHelper",46,ab,a6,10),
	HX_("smoothing",74,d5,e1,95),
	HX_("reset",cf,49,c8,e6),
	HX_("nextFrame",3a,92,c8,ad),
	HX_("prevFrame",3a,18,da,f1),
	HX_("moveMovieclip_MovieClips",43,72,8c,aa),
	HX_("update",09,86,05,87),
	HX_("updateLayer",08,eb,58,55),
	HX_("createLayers",9e,55,06,7b),
	HX_("setBitmap",31,85,b3,50),
	HX_("setFilterData",44,1c,20,f0),
	HX_("setTransformationMatrix",ac,c9,9b,85),
	HX_("setColor",61,da,90,58),
	HX_("setLoop",26,e7,3b,0d),
	HX_("setType",7c,33,8d,12),
	HX_("getNumFrames",16,97,dd,6c),
	HX_("_getFrameLabels",b5,8f,c3,f8),
	HX_("getFrameLabels",16,47,63,af),
	HX_("sortLabels",fd,9d,62,a6),
	HX_("getLayer",5b,91,97,cf),
	HX_("getTexture",e5,4e,42,ee),
	HX_("getNextLabel",8b,c4,4a,26),
	HX_("get_currentLabel",84,df,59,bb),
	HX_("getFrame",b7,87,5a,66),
	HX_("get_currentFrame",bd,49,2e,52),
	HX_("set_currentFrame",31,37,70,a8),
	HX_("get_type",43,ae,c3,cc),
	HX_("set_type",b7,07,21,7b),
	HX_("get_loopMode",f0,5b,e8,ef),
	HX_("set_loopMode",64,7f,e1,04),
	HX_("get_symbolName",0c,62,f2,95),
	HX_("get_numLayers",3f,34,16,cb),
	HX_("get_numFrames",63,ce,ea,1e),
	HX_("getLayerData",25,5d,e7,93),
	HX_("getFrameData",81,b1,3a,3f),
	::String(null()) };

static void SpriteSymbol_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteSymbol_obj::sMatrix,"sMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SpriteSymbol_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteSymbol_obj::sMatrix,"sMatrix");
};

#endif

::hx::Class SpriteSymbol_obj::__mClass;

static ::String SpriteSymbol_obj_sStaticFields[] = {
	HX_("sMatrix",14,03,81,9e),
	::String(null())
};

void SpriteSymbol_obj::__register()
{
	SpriteSymbol_obj _hx_dummy;
	SpriteSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("animateatlas.displayobject.SpriteSymbol",4e,d2,d9,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SpriteSymbol_obj::__GetStatic;
	__mClass->mSetStaticField = &SpriteSymbol_obj::__SetStatic;
	__mClass->mMarkFunc = SpriteSymbol_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SpriteSymbol_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SpriteSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SpriteSymbol_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SpriteSymbol_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpriteSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpriteSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SpriteSymbol_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_3cafb963b38c7cf0_58_boot)
HXDLIN(  58)		sMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace animateatlas
} // end namespace displayobject
