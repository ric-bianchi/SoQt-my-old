#ifndef COIN_SOGUIVIEWPORTFIX_H
#define COIN_SOGUIVIEWPORTFIX_H

// src/Inventor/Qt/nodes/SoGuiViewportFix.h.  Generated from ViewportFix.h.in by configure.

/**************************************************************************\
 *
 *  This file is part of the Coin 3D visualization library.
 *  Copyright (C) by Kongsberg Oil & Gas Technologies.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  ("GPL") version 2 as published by the Free Software Foundation.
 *  See the file LICENSE.GPL at the root directory of this source
 *  distribution for additional information about the GNU GPL.
 *
 *  For using Coin with software that can not be combined with the GNU
 *  GPL, and for taking advantage of the additional benefits of our
 *  support services, please contact Kongsberg Oil & Gas Technologies
 *  about acquiring a Coin Professional Edition License.
 *
 *  See http://www.coin3d.org/ for more information.
 *
 *  Kongsberg Oil & Gas Technologies, Bygdoy Alle 5, 0257 Oslo, NORWAY.
 *  http://www.sim.no/  sales@sim.no  coin-support@coin3d.org
 *
\**************************************************************************/

#ifndef SOQT_INTERNAL
#error this is a private header file
#endif /* !SOQT_INTERNAL */

#include <Inventor/fields/SoSFEnum.h>
#include <Inventor/fields/SoSFVec3f.h>
#include <Inventor/nodes/SoTransformation.h>

// might go abstract to separate between ortho and perspective views

class SoGuiViewportFix : public SoTransformation {
  typedef SoTransformation inherited;
  SO_NODE_HEADER(SoGuiViewportFix);

public:
  static void initClass(void);

  SoGuiViewportFix(void);

  enum Corner {
    LEFT_TOP,
    RIGHT_TOP,
    LEFT_BOTTOM,
    RIGHT_BOTTOM
  };

  SoSFEnum corner;

  SoSFVec3f viewportSize; // output field: updated internally

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void pick(SoPickAction * action);
  virtual void rayPick(SoRayPickAction * action);
  virtual void getMatrix(SoGetMatrixAction * action);

protected:
  virtual ~SoGuiViewportFix(void);

private:
  void * internals;

};

#endif // !COIN_SOGUIVIEWPORTFIX_H
