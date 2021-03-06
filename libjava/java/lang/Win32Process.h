
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_Win32Process__
#define __java_lang_Win32Process__

#pragma interface

#include <java/lang/Process.h>
#include <gcj/array.h>


class java::lang::Win32Process : public ::java::lang::Process
{

public:
  void destroy();
  jint exitValue();
  ::java::io::InputStream * getErrorStream();
  ::java::io::InputStream * getInputStream();
  ::java::io::OutputStream * getOutputStream();
  jint waitFor();
  Win32Process(JArray< ::java::lang::String * > *, JArray< ::java::lang::String * > *, ::java::io::File *, jboolean);
private:
  jboolean hasExited();
  void startProcess(JArray< ::java::lang::String * > *, JArray< ::java::lang::String * > *, ::java::io::File *, jboolean);
  void cleanup();
  ::java::io::OutputStream * __attribute__((aligned(__alignof__( ::java::lang::Process)))) outputStream;
  ::java::io::InputStream * inputStream;
  ::java::io::InputStream * errorStream;
  jint procHandle;
  jint exitCode;
public:
  static ::java::lang::Class class$;
};

#endif // __java_lang_Win32Process__
