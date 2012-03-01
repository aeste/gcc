
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_KeyboardFocusManager__
#define __java_awt_KeyboardFocusManager__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class AWTEvent;
        class Component;
        class Container;
        class FocusTraversalPolicy;
        class KeyEventDispatcher;
        class KeyEventPostProcessor;
        class KeyboardFocusManager;
        class Window;
      namespace event
      {
          class KeyEvent;
      }
    }
    namespace beans
    {
        class PropertyChangeListener;
        class PropertyChangeSupport;
        class VetoableChangeListener;
        class VetoableChangeSupport;
    }
  }
}

class java::awt::KeyboardFocusManager : public ::java::lang::Object
{

public:
  KeyboardFocusManager();
  static ::java::awt::KeyboardFocusManager * getCurrentKeyboardFocusManager();
  static void setCurrentKeyboardFocusManager(::java::awt::KeyboardFocusManager *);
  virtual ::java::awt::Component * getFocusOwner();
public: // actually protected
  virtual ::java::awt::Component * getGlobalFocusOwner();
  virtual void setGlobalFocusOwner(::java::awt::Component *);
public:
  virtual void clearGlobalFocusOwner();
  virtual ::java::awt::Component * getPermanentFocusOwner();
public: // actually protected
  virtual ::java::awt::Component * getGlobalPermanentFocusOwner();
  virtual void setGlobalPermanentFocusOwner(::java::awt::Component *);
public:
  virtual ::java::awt::Window * getFocusedWindow();
public: // actually protected
  virtual ::java::awt::Window * getGlobalFocusedWindow();
  virtual void setGlobalFocusedWindow(::java::awt::Window *);
public:
  virtual ::java::awt::Window * getActiveWindow();
public: // actually protected
  virtual ::java::awt::Window * getGlobalActiveWindow();
  virtual void setGlobalActiveWindow(::java::awt::Window *);
public:
  virtual ::java::awt::FocusTraversalPolicy * getDefaultFocusTraversalPolicy();
  virtual void setDefaultFocusTraversalPolicy(::java::awt::FocusTraversalPolicy *);
  virtual void setDefaultFocusTraversalKeys(jint, ::java::util::Set *);
  virtual ::java::util::Set * getDefaultFocusTraversalKeys(jint);
  virtual ::java::awt::Container * getCurrentFocusCycleRoot();
public: // actually protected
  virtual ::java::awt::Container * getGlobalCurrentFocusCycleRoot();
public:
  virtual void setGlobalCurrentFocusCycleRoot(::java::awt::Container *);
  virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener *);
  virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener *);
  virtual JArray< ::java::beans::PropertyChangeListener * > * getPropertyChangeListeners();
  virtual void addPropertyChangeListener(::java::lang::String *, ::java::beans::PropertyChangeListener *);
  virtual void removePropertyChangeListener(::java::lang::String *, ::java::beans::PropertyChangeListener *);
  virtual JArray< ::java::beans::PropertyChangeListener * > * getPropertyChangeListeners(::java::lang::String *);
public: // actually protected
  virtual void firePropertyChange(::java::lang::String *, ::java::lang::Object *, ::java::lang::Object *);
public:
  virtual void addVetoableChangeListener(::java::beans::VetoableChangeListener *);
  virtual void removeVetoableChangeListener(::java::beans::VetoableChangeListener *);
  virtual JArray< ::java::beans::VetoableChangeListener * > * getVetoableChangeListeners();
  virtual void addVetoableChangeListener(::java::lang::String *, ::java::beans::VetoableChangeListener *);
  virtual void removeVetoableChangeListener(::java::lang::String *, ::java::beans::VetoableChangeListener *);
  virtual JArray< ::java::beans::VetoableChangeListener * > * getVetoableChangeListeners(::java::lang::String *);
public: // actually protected
  virtual void fireVetoableChange(::java::lang::String *, ::java::lang::Object *, ::java::lang::Object *);
public:
  virtual void addKeyEventDispatcher(::java::awt::KeyEventDispatcher *);
  virtual void removeKeyEventDispatcher(::java::awt::KeyEventDispatcher *);
public: // actually protected
  virtual ::java::util::List * getKeyEventDispatchers();
public:
  virtual void addKeyEventPostProcessor(::java::awt::KeyEventPostProcessor *);
  virtual void removeKeyEventPostProcessor(::java::awt::KeyEventPostProcessor *);
public: // actually protected
  virtual ::java::util::List * getKeyEventPostProcessors();
public:
  virtual jboolean dispatchEvent(::java::awt::AWTEvent *) = 0;
  virtual void redispatchEvent(::java::awt::Component *, ::java::awt::AWTEvent *);
  virtual jboolean dispatchKeyEvent(::java::awt::event::KeyEvent *) = 0;
  virtual jboolean postProcessKeyEvent(::java::awt::event::KeyEvent *) = 0;
  virtual void processKeyEvent(::java::awt::Component *, ::java::awt::event::KeyEvent *) = 0;
public: // actually protected
  virtual void enqueueKeyEvents(jlong, ::java::awt::Component *) = 0;
  virtual void dequeueKeyEvents(jlong, ::java::awt::Component *) = 0;
  virtual void discardKeyEvents(::java::awt::Component *) = 0;
public:
  virtual void focusNextComponent(::java::awt::Component *) = 0;
  virtual void focusPreviousComponent(::java::awt::Component *) = 0;
  virtual void upFocusCycle(::java::awt::Component *) = 0;
  virtual void downFocusCycle(::java::awt::Container *) = 0;
  virtual void focusNextComponent();
  virtual void focusPreviousComponent();
  virtual void upFocusCycle();
  virtual void downFocusCycle();
private:
  ::java::lang::Object * getObject(::java::util::Map *);
  ::java::lang::Object * getGlobalObject(::java::util::Map *, jboolean);
  void setGlobalObject(::java::util::Map *, ::java::lang::Object *, ::java::lang::String *);
public: // actually package-private
  static ::java::awt::AWTEvent * retargetFocusEvent(::java::awt::AWTEvent *);
  static void addLightweightFocusRequest(::java::awt::Component *, ::java::awt::Component *);
public:
  static const jint FORWARD_TRAVERSAL_KEYS = 0;
  static const jint BACKWARD_TRAVERSAL_KEYS = 1;
  static const jint UP_CYCLE_TRAVERSAL_KEYS = 2;
  static const jint DOWN_CYCLE_TRAVERSAL_KEYS = 3;
private:
  static ::java::util::Set * DEFAULT_FORWARD_KEYS;
  static ::java::util::Set * DEFAULT_BACKWARD_KEYS;
  static ::java::util::Map * currentKeyboardFocusManagers;
  static ::java::util::Map * currentFocusOwners;
  static ::java::util::Map * currentPermanentFocusOwners;
  static ::java::util::Map * currentFocusedWindows;
  static ::java::util::Map * currentActiveWindows;
  static ::java::util::Map * currentFocusCycleRoots;
  ::java::awt::FocusTraversalPolicy * __attribute__((aligned(__alignof__( ::java::lang::Object)))) defaultPolicy;
  JArray< ::java::util::Set * > * defaultFocusKeys;
  ::java::beans::PropertyChangeSupport * propertyChangeSupport;
  ::java::beans::VetoableChangeSupport * vetoableChangeSupport;
  ::java::util::ArrayList * keyEventDispatchers;
  ::java::util::ArrayList * keyEventPostProcessors;
  static ::java::util::HashMap * focusRequests;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_KeyboardFocusManager__
