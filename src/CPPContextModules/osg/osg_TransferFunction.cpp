#include "osg_TransferFunction.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/TransferFunction>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_TransferFunction::createInstance(){
osg::ref_ptr<osg::TransferFunction> realinstance				;
realinstance = new osg::TransferFunction ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}