
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableInterceptor_AdapterManagerIdHelper__
#define __org_omg_PortableInterceptor_AdapterManagerIdHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace PortableInterceptor
      {
          class AdapterManagerIdHelper;
      }
    }
  }
}

class org::omg::PortableInterceptor::AdapterManagerIdHelper : public ::java::lang::Object
{

public:
  AdapterManagerIdHelper();
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, jint);
  static jint extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static jint read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, jint);
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableInterceptor_AdapterManagerIdHelper__
