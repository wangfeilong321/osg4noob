#include "osg_SampleMaski.hpp"
#include <list>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaClass.h>
#include <osg/SampleMaski>
#include <osg/ref_ptr>

using namespace std;
using namespace pmoc;
	  Instance osg_SampleMaski::createInstance(){
osg::ref_ptr<osg::SampleMaski> realinstance				;
realinstance = new osg::SampleMaski ()					;
_managedinstances.insert(realinstance);
	 return(Instance(this,(void*)realinstance.get()								));}