#include "osg_GraphicsContextQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GraphicsContext>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_GraphicsContextQQQ_QModel::osg_GraphicsContextQQQ_QModel(const osg_GraphicsContextQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osg_GraphicsContextQQQ_QModel::~osg_GraphicsContextQQQ_QModel(){};
 
///DefaultConstructor////////////////
osg_GraphicsContextQQQ_QModel::osg_GraphicsContextQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::GraphicsContext*>(i->ptr);
}
QQuickItem *osg_GraphicsContextQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_GraphicsContextQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_GraphicsContextQQQ::PREcompoQML()const{return string("");}
const std::string osg_GraphicsContextQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_GraphicsContextQQQ::createQQModel(Instance*i){ return new osg_GraphicsContextQQQ_QModel(i);}