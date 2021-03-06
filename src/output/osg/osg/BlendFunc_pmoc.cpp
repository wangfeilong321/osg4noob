#include <osg/BlendFunc>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BlendFunc_pmoc.hpp>
#include <customCode/osg/BlendFunc_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_BlendFunc::getDestination()const{
return _model->getDestination();

}
 GLenum  osg::QReflect_BlendFunc::getDestinationAlpha()const{
return _model->getDestinationAlpha();

}
 GLenum  osg::QReflect_BlendFunc::getDestinationRGB()const{
return _model->getDestinationRGB();

}
 GLenum  osg::QReflect_BlendFunc::getSource()const{
return _model->getSource();

}
 GLenum  osg::QReflect_BlendFunc::getSourceAlpha()const{
return _model->getSourceAlpha();

}
 GLenum  osg::QReflect_BlendFunc::getSourceRGB()const{
return _model->getSourceRGB();

}
 int  osg::QReflect_BlendFunc::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_BlendFunc::setDestination( GLenum p0){
 _model->setDestination(p0);

}
 void osg::QReflect_BlendFunc::setDestinationAlpha( GLenum p0){
 _model->setDestinationAlpha(p0);

}
 void osg::QReflect_BlendFunc::setDestinationRGB( GLenum p0){
 _model->setDestinationRGB(p0);

}
 void osg::QReflect_BlendFunc::setFunction( GLenum p0 , GLenum p1 , GLenum p2 , GLenum p3){
 _model->setFunction(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_BlendFunc::setFunction( GLenum p0 , GLenum p1){
 _model->setFunction(p0 ,p1);

}
 void osg::QReflect_BlendFunc::setSource( GLenum p0){
 _model->setSource(p0);

}
 void osg::QReflect_BlendFunc::setSourceAlpha( GLenum p0){
 _model->setSourceAlpha(p0);

}
 void osg::QReflect_BlendFunc::setSourceRGB( GLenum p0){
 _model->setSourceRGB(p0);

}

///DefaultConstructor////////////////
osg::QReflect_BlendFunc::QReflect_BlendFunc(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BlendFunc*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BlendFunc::~QReflect_BlendFunc( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BlendFunc::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BlendFunc::createInstance( ){
osg::ref_ptr<osg::BlendFunc> osg_BlendFunc_ptr	;
osg_BlendFunc_ptr = new osg::BlendFunc ()	;
Instance o(PMOCGETMETACLASS("osg::BlendFunc"),(void*)osg_BlendFunc_ptr.get()		,true);
_managedinstances.insert(osg_BlendFunc_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BlendFunc::MetaQReflect_BlendFunc():MetaQQuickClass( "osg::BlendFunc"){
_typeid=&typeid(osg::BlendFunc );           qRegisterMetaType<QMLBlendFunc>();
qmlRegisterType<QReflect_BlendFunc>("pmoc.osg",1,0,"QReflect_BlendFunc");
           qmlRegisterType<QMLBlendFunc>("pmoc.osg",1,0,"QMLBlendFunc");
};
const std::string osg::MetaQReflect_BlendFunc::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BlendFunc::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BlendFunc::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BlendFunc::createQQModel(Instance*i){ //return new MetaQReflect_BlendFunc_QModel(i);}
QMLBlendFunc *ret =new QMLBlendFunc(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::BlendFuncis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::BlendFuncis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendFunc_pmoc.cpp"
#endif


