#ifndef COIN_SOGUISCENETEXTURE2_H
#define COIN_SOGUISCENETEXTURE2_H

// src/Inventor/Qt/nodes/SoGuiSceneTexture2.h.  Generated from SceneTexture2.h.in by configure.

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
#endif // !SOQT_INTERNAL

#include <Inventor/fields/SoSFVec2f.h>
#include <Inventor/fields/SoSFNode.h>
#include <Inventor/nodes/SoTexture2.h>

class SoGuiSceneTexture2 : public SoTexture2 {
  typedef SoTexture2 inherited;
  SO_NODE_HEADER(SoGuiSceneTexture2);
public:
  static void initClass(void);
  SoGuiSceneTexture2(void);

  SoSFVec2f size;
  SoSFNode scene;

  virtual void notify(SoNotList * list);
  virtual void write(SoWriteAction * action);

protected:
  virtual ~SoGuiSceneTexture2(void);

private:
  void * internals;

};

#endif // !COIN_SOGUISCENETEXTURE2_H
