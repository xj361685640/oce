// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_Curve2d_HeaderFile
#define _DrawTrSurf_Curve2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_DrawTrSurf_Curve2d.hxx>

#include <Handle_Geom2d_Curve.hxx>
#include <Draw_Color.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <DrawTrSurf_Drawable.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Draw_Drawable3D.hxx>
#include <Standard_OStream.hxx>
#include <Draw_Interpretor.hxx>
class Geom2d_Curve;
class Draw_Color;
class Draw_Display;
class Draw_Drawable3D;


//! This class defines a drawable curve in 2d space.
//! The curve is drawned in the plane XOY.
class DrawTrSurf_Curve2d : public DrawTrSurf_Drawable
{

public:

  

  //! creates a drawable curve from a curve of package Geom2d.
  Standard_EXPORT DrawTrSurf_Curve2d(const Handle(Geom2d_Curve)& C, const Standard_Boolean DispOrigin = Standard_True);
  
  Standard_EXPORT DrawTrSurf_Curve2d(const Handle(Geom2d_Curve)& C, const Draw_Color& aColor, const Standard_Integer Discret, const Standard_Boolean DispOrigin = Standard_True, const Standard_Boolean DispCurvRadius = Standard_False, const Standard_Real RadiusMax = 1.0e3, const Standard_Real RatioOfRadius = 0.1);
  
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;
  
      Handle(Geom2d_Curve) GetCurve()  const;
  
      void SetColor (const Draw_Color& aColor) ;
  
      void ShowCurvature() ;
  
      void ClearCurvature() ;
  
      void SetRadiusMax (const Standard_Real Radius) ;
  
      void SetRadiusRatio (const Standard_Real Ratio) ;
  
      Draw_Color Color()  const;
  
      Standard_Real RadiusMax()  const;
  
      Standard_Real RadiusRatio()  const;
  
  //! For variable copy.
  Standard_EXPORT virtual   Handle(Draw_Drawable3D) Copy()  const;
  
  //! For variable dump.
  Standard_EXPORT virtual   void Dump (Standard_OStream& S)  const;
  
  //! Returns False.
  Standard_EXPORT virtual   Standard_Boolean Is3D()  const;
  
  //! For variable whatis command. Set  as a result  the
  //! type of the variable.
  Standard_EXPORT virtual   void Whatis (Draw_Interpretor& I)  const;




  DEFINE_STANDARD_RTTI(DrawTrSurf_Curve2d)

protected:


  Handle(Geom2d_Curve) curv;
  Draw_Color look;
  Standard_Boolean disporigin;
  Standard_Boolean dispcurvradius;
  Standard_Real radiusmax;
  Standard_Real radiusratio;


private: 




};


#include <DrawTrSurf_Curve2d.lxx>





#endif // _DrawTrSurf_Curve2d_HeaderFile
