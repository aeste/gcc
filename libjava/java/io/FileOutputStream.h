
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_FileOutputStream__
#define __java_io_FileOutputStream__

#pragma interface

#include <java/io/OutputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace nio
      {
        namespace channels
        {
            class FileChannelImpl;
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
          class FileChannel;
      }
    }
  }
}

class java::io::FileOutputStream : public ::java::io::OutputStream
{

public:
  FileOutputStream(::java::lang::String *, jboolean);
  FileOutputStream(::java::lang::String *);
  FileOutputStream(::java::io::File *);
  FileOutputStream(::java::io::File *, jboolean);
  FileOutputStream(::java::io::FileDescriptor *);
public: // actually package-private
  FileOutputStream(::gnu::java::nio::channels::FileChannelImpl *);
public: // actually protected
  virtual void finalize();
public:
  virtual ::java::io::FileDescriptor * getFD();
  virtual void write(jint);
  virtual void write(JArray< jbyte > *);
  virtual void write(JArray< jbyte > *, jint, jint);
  virtual void close();
  virtual ::java::nio::channels::FileChannel * getChannel();
private:
  ::java::io::FileDescriptor * __attribute__((aligned(__alignof__( ::java::io::OutputStream)))) fd;
  ::gnu::java::nio::channels::FileChannelImpl * ch;
public:
  static ::java::lang::Class class$;
};

#endif // __java_io_FileOutputStream__
