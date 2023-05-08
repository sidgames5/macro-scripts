#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c5c1d96d9560d2ef_35_new,"StringBuf","new",0xaaa8f4b4,"StringBuf.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",35,0xac74b422)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c1d96d9560d2ef_37_charBufAsString,"StringBuf","charBufAsString",0x54d38cd4,"StringBuf.charBufAsString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",37,0xac74b422)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c1d96d9560d2ef_43_flush,"StringBuf","flush",0xc7c14418,"StringBuf.flush","C:\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",43,0xac74b422)
HX_LOCAL_STACK_FRAME(_hx_pos_c5c1d96d9560d2ef_92_toString,"StringBuf","toString",0x68f17bd8,"StringBuf.toString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",92,0xac74b422)

void StringBuf_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c5c1d96d9560d2ef_35_new)
            	}

Dynamic StringBuf_obj::__CreateEmpty() { return new StringBuf_obj; }

void *StringBuf_obj::_hx_vtable = 0;

Dynamic StringBuf_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringBuf_obj > _hx_result = new StringBuf_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringBuf_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cc74002;
}

::String StringBuf_obj::charBufAsString(){
            	HX_STACKFRAME(&_hx_pos_c5c1d96d9560d2ef_37_charBufAsString)
HXLINE(  38)		int len = this->charBuf->length;
HXLINE(  39)		this->charBuf->push(0);
HXLINE(  40)		::cpp::Pointer< char > inPtr = ( (::cpp::Pointer< char >)(::cpp::Pointer_obj::arrayElem(this->charBuf,0)) );
HXDLIN(  40)		return  ::String(inPtr->ptr,len);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuf_obj,charBufAsString,return )

void StringBuf_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_c5c1d96d9560d2ef_43_flush)
HXLINE(  44)		if (::hx::IsNull( this->b )) {
HXLINE(  45)			this->b = ::Array_obj< ::String >::__new(1)->init(0,this->charBufAsString());
            		}
            		else {
HXLINE(  47)			::Array< ::String > _hx_tmp = this->b;
HXDLIN(  47)			_hx_tmp->push(this->charBufAsString());
            		}
HXLINE(  48)		this->charBuf = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuf_obj,flush,(void))

::String StringBuf_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c5c1d96d9560d2ef_92_toString)
HXLINE(  93)		if (::hx::IsNotNull( this->charBuf )) {
HXLINE(  94)			this->flush();
            		}
HXLINE(  95)		bool _hx_tmp;
HXDLIN(  95)		if (::hx::IsNotNull( this->b )) {
HXLINE(  95)			_hx_tmp = (this->b->length == 0);
            		}
            		else {
HXLINE(  95)			_hx_tmp = true;
            		}
HXDLIN(  95)		if (_hx_tmp) {
HXLINE(  96)			return HX_("",00,00,00,00);
            		}
HXLINE(  97)		if ((this->b->length == 1)) {
HXLINE(  98)			return this->b->__get(0);
            		}
HXLINE(  99)		return this->b->join(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuf_obj,toString,return )


StringBuf_obj::StringBuf_obj()
{
}

void StringBuf_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringBuf);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(charBuf,"charBuf");
	HX_MARK_END_CLASS();
}

void StringBuf_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(charBuf,"charBuf");
}

::hx::Val StringBuf_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charBuf") ) { return ::hx::Val( charBuf ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"charBufAsString") ) { return ::hx::Val( charBufAsString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StringBuf_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charBuf") ) { charBuf=inValue.Cast< ::Array< char > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringBuf_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("charBuf",fd,85,55,cf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringBuf_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(StringBuf_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsObject /* ::Array< char > */ ,(int)offsetof(StringBuf_obj,charBuf),HX_("charBuf",fd,85,55,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringBuf_obj_sStaticStorageInfo = 0;
#endif

static ::String StringBuf_obj_sMemberFields[] = {
	HX_("b",62,00,00,00),
	HX_("charBuf",fd,85,55,cf),
	HX_("charBufAsString",80,3a,2f,0a),
	HX_("flush",c4,62,9b,02),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class StringBuf_obj::__mClass;

void StringBuf_obj::__register()
{
	StringBuf_obj _hx_dummy;
	StringBuf_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StringBuf",c2,ca,83,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringBuf_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringBuf_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringBuf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringBuf_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

