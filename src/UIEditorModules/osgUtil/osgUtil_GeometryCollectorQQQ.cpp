#include "osgUtil_GeometryCollectorQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/MeshOptimizers>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osgUtil_GeometryCollectorQQQ_QModel::osgUtil_GeometryCollectorQQQ_QModel(const osgUtil_GeometryCollectorQQQ_QModel&o):QQModel(o){
        _model=o._model;
}

///Destruction////////////////
osgUtil_GeometryCollectorQQQ_QModel::~osgUtil_GeometryCollectorQQQ_QModel(){};
 
///DefaultConstructor////////////////
osgUtil_GeometryCollectorQQQ_QModel::osgUtil_GeometryCollectorQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osgUtil::GeometryCollector*>(i->ptr);
}
QQuickItem *osgUtil_GeometryCollectorQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;
	///connect this's signals/slot to its qml component	///CustomiZE here



	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osgUtil_GeometryCollectorQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgUtil_GeometryCollectorQQQ::PREcompoQML()const{return string("");}
const std::string osgUtil_GeometryCollectorQQQ::POSTcompoQML()const{return string("");}
QQModel* osgUtil_GeometryCollectorQQQ::createQQModel(Instance*i){ return new osgUtil_GeometryCollectorQQQ_QModel(i);}