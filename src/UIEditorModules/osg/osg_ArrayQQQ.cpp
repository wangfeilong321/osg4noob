#include "osg_ArrayQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Array>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_ArrayQQQ_QModel::osg_ArrayQQQ_QModel(const osg_ArrayQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_ArrayQQQ_QModel::~osg_ArrayQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_ArrayQQQ_QModel::osg_ArrayQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::Array*>(i->ptr);
}
QQuickItem *osg_ArrayQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_ArrayQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_ArrayQQQ::PREcompoQML()const{return string("");}
const std::string osg_ArrayQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_ArrayQQQ::createQQModel(Instance*i){ return new osg_ArrayQQQ_QModel(i);}