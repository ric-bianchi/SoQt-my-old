#ifndef COIN_SOGUIIMAGE_H
#define COIN_SOGUIIMAGE_H

// src/Inventor/Qt/nodes/SoGuiImage.h.  Generated from Image.h.in by configure.

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

#include <Inventor/fields/SoSFVec3f.h>
#include <Inventor/nodekits/SoBaseKit.h>

class SoGuiImage : public SoBaseKit {
  typedef SoBaseKit inherited;

  SO_KIT_HEADER(SoGuiImage);

  SO_KIT_CATALOG_ENTRY_HEADER(topSeparator);
  SO_KIT_CATALOG_ENTRY_HEADER(texture);
  SO_KIT_CATALOG_ENTRY_HEADER(geometry);

public:
  static void initClass(void);
  SoGuiImage(void);

  SoSFVec3f size;

protected:
  virtual ~SoGuiImage(void);

private:
  void * internals;

};

#endif // !COIN_SOGUIIMAGE_H
