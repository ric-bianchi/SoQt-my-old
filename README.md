 [![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
 
# SoQt

## Introduction

This is an updated version of the original SoQt package, which can be found on Bitbucket:

https://bitbucket.org/Coin3D/soqt

SoQt was originally developed by *Kongsberg Oil & Gas Technologies* as part of the **Coin3D** graphics framework, and then released publicly under the 3-clause BSD license (see COPYING).

## Changes

Main changes to the original version:

* this version has been packaged as a single self-contained package (instead of being splitted into SoQt, SoAnyData and SoGui)
* it has been ported to Qt5 (tested with Qt 5.8, so far)
* CMake is now used to compile the package

## To Do

SoQt has to be modified to work on modern Mac machine with Retina displays: currently, only one-fourth of the widget screen area is used. 

