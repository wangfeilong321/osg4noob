#ifndef osgParticle_FireEffect_pmocHPP
#define  osgParticle_FireEffect_pmocHPP 1


#include <osgParticle/FireEffect_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Program;
			} ;
namespace osgParticle{ 
class QReflect_Emitter;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/FireEffect>
#include <osgParticle/FireEffect>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_FireEffect: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
FireEffect * _model;
QReflect_FireEffect(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FireEffect( );
//FireEffect
Q_INVOKABLE osgParticle::QReflect_Emitter*  getEmitter();
Q_INVOKABLE osgParticle::QReflect_Emitter*  getEmitter()const;
Q_INVOKABLE osgParticle::QReflect_Program*  getProgram();
Q_INVOKABLE osgParticle::QReflect_Program*  getProgram()const;
Q_INVOKABLE void  setDefaults();
Q_INVOKABLE void  setUpEmitterAndProgram();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_FireEffect: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::FireEffect> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_FireEffect();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 


#endif //osgParticle_FireEffect_pmocHPP

