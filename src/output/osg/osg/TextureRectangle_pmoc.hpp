#ifndef osg_TextureRectangle_pmocHPP
#define  osg_TextureRectangle_pmocHPP 1
#include <osg/TextureRectangle_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/TextureRectangle>
#include <osg/TextureRectangle>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TextureRectangle: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TextureRectangle * _model;
QReflect_TextureRectangle(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TextureRectangle( );
//TextureRectangle
// SubloadCallback * getSubloadCallback();
// void  setSubloadCallback( SubloadCallback *);
//const  SubloadCallback * getSubloadCallback();
Q_INVOKABLE  GLenum  getTextureTarget()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE  int  getTextureDepth()const;
Q_INVOKABLE  osg::QReflect_Image * getImage()const;
Q_INVOKABLE  unsigned int  getNumImages()const;
Q_INVOKABLE  unsigned int&  getModifiedCount( unsigned int )const;
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int );
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int )const;
Q_INVOKABLE void  apply(osg::QReflect_State *)const;
Q_INVOKABLE void  copyTexImage2D(osg::QReflect_State * , int  , int  , int  , int );
Q_INVOKABLE void  copyTexSubImage2D(osg::QReflect_State * , int  , int  , int  , int  , int  , int );
Q_INVOKABLE void  setImage( unsigned int  ,osg::QReflect_Image *);
Q_INVOKABLE void  setTextureSize( int  , int )const;
Q_INVOKABLE void pmoc_reverse_setImage( osg::QReflect_Image *par=0);
Q_INVOKABLE void setImage( osg::QReflect_Image *par);
Q_PROPERTY(int TextureHeight  READ getTextureHeight WRITE setTextureHeight NOTIFY TextureHeightChanged)
Q_PROPERTY(int TextureWidth  READ getTextureWidth WRITE setTextureWidth NOTIFY TextureWidthChanged)
virtual Q_INVOKABLE const int  getTextureHeight()const;
virtual Q_INVOKABLE const int  getTextureWidth()const;
virtual Q_INVOKABLE void setTextureHeight(const int &);
virtual Q_INVOKABLE void setTextureWidth(const int &);
signals: void ImageChanged(const osg::QReflect_Image*);
public:
signals: void TextureHeightChanged(const int&);
public:
signals: void TextureWidthChanged(const int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TextureRectangle: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TextureRectangle> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TextureRectangle();
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

#endif //osg_TextureRectangle_pmocHPP

