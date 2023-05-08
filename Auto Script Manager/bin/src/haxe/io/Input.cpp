#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_exceptions_NotImplementedException
#include <haxe/exceptions/NotImplementedException.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_63b8fa1e9f95a159_51_readByte,"haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",51,0x854a6ecd)
HX_LOCAL_STACK_FRAME(_hx_pos_63b8fa1e9f95a159_64_readBytes,"haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",64,0x854a6ecd)
HX_LOCAL_STACK_FRAME(_hx_pos_63b8fa1e9f95a159_106_readAll,"haxe.io.Input","readAll",0xaed6e9a7,"haxe.io.Input.readAll","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",106,0x854a6ecd)
namespace haxe{
namespace io{

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

void *Input_obj::_hx_vtable = 0;

Dynamic Input_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Input_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19e22056;
}

int Input_obj::readByte(){
            	HX_GC_STACKFRAME(&_hx_pos_63b8fa1e9f95a159_51_readByte)
HXDLIN(  51)		HX_STACK_DO_THROW( ::haxe::exceptions::NotImplementedException_obj::__alloc( HX_CTX ,null(),null(),::hx::SourceInfo(HX_("haxe/io/Input.hx",f4,10,5a,cd),51,HX_("haxe.io.Input",aa,0e,f5,9f),HX_("readByte",7e,f9,1a,69))));
HXDLIN(  51)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_63b8fa1e9f95a159_64_readBytes)
HXLINE(  65)		int k = len;
HXLINE(  66)		::Array< unsigned char > b = s->b;
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		bool _hx_tmp1;
HXDLIN(  67)		if ((pos >= 0)) {
HXLINE(  67)			_hx_tmp1 = (len < 0);
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = true;
            		}
HXDLIN(  67)		if (!(_hx_tmp1)) {
HXLINE(  67)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  67)			_hx_tmp = true;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  68)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXLINE(  69)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  70)			while((k > 0)){
HXLINE(  76)				b[pos] = ( (unsigned char)(this->readByte()) );
HXLINE(  80)				pos = (pos + 1);
HXLINE(  81)				k = (k - 1);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  83)				{
HXLINE(  83)					null();
            				}
HXLINE(  69)				if (!(::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >()))) {
HXLINE(  69)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  84)		return (len - k);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

 ::haxe::io::Bytes Input_obj::readAll( ::Dynamic bufsize){
            	HX_GC_STACKFRAME(&_hx_pos_63b8fa1e9f95a159_106_readAll)
HXLINE( 107)		if (::hx::IsNull( bufsize )) {
HXLINE( 111)			bufsize = 16384;
            		}
HXLINE( 114)		 ::haxe::io::Bytes buf = ::haxe::io::Bytes_obj::alloc(( (int)(bufsize) ));
HXLINE( 115)		 ::haxe::io::BytesBuffer total =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 116)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 117)			while(true){
HXLINE( 118)				int len = this->readBytes(buf,0,( (int)(bufsize) ));
HXLINE( 119)				if ((len == 0)) {
HXLINE( 120)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Blocked_dyn()));
            				}
HXLINE( 121)				{
HXLINE( 121)					bool _hx_tmp;
HXDLIN( 121)					if ((len >= 0)) {
HXLINE( 121)						_hx_tmp = (len > buf->length);
            					}
            					else {
HXLINE( 121)						_hx_tmp = true;
            					}
HXDLIN( 121)					if (_hx_tmp) {
HXLINE( 121)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 121)					::Array< unsigned char > b1 = total->b;
HXDLIN( 121)					::Array< unsigned char > b2 = buf->b;
HXDLIN( 121)					{
HXLINE( 121)						int _g = 0;
HXDLIN( 121)						int _g1 = len;
HXDLIN( 121)						while((_g < _g1)){
HXLINE( 121)							_g = (_g + 1);
HXDLIN( 121)							int i = (_g - 1);
HXDLIN( 121)							total->b->push(b2->__get(i));
            						}
            					}
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 123)				{
HXLINE( 123)					null();
            				}
HXLINE( 116)				if (!(::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >()))) {
HXLINE( 116)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 124)		return total->getBytes();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readAll,return )


Input_obj::Input_obj()
{
}

::hx::Val Input_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"readAll") ) { return ::hx::Val( readAll_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Input_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static ::String Input_obj_sMemberFields[] = {
	HX_("readByte",7e,f9,1a,69),
	HX_("readBytes",35,55,7f,8e),
	HX_("readAll",6b,9f,c3,02),
	::String(null()) };

::hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	Input_obj _hx_dummy;
	Input_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Input",aa,0e,f5,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Input_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Input_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
