################################################################################
# Package: SoQt
################################################################################
# Author: Riccardo Maria BIANCHI <rbianchi@cern.ch>
################################################################################

cmake_minimum_required ( VERSION 3.2 FATAL_ERROR )

# Declare the package name:
project( SoQt )


# External dependencies:
# -- Coin3D
find_package( Coin3D REQUIRED ) # this will take /usr/lib if found
# -- Qt5 
#set( QT5_ROOT /cvmfs/sft.cern.ch/lcg/releases/LCG_88/qt5/5.6.0/x86_64-slc6-gcc62-opt )
#set( ENV{CMAKE_PREFIX_PATH} ${QT5_ROOT} )
find_package( Qt5 COMPONENTS Core OpenGL Gui Widgets REQUIRED )

# Generate UI files automatically:
set( CMAKE_AUTOUIC TRUE )
# Generate MOC files automatically:
set( CMAKE_AUTOMOC TRUE )
# Generate resource files automatically:
set( CMAKE_AUTORCC TRUE )



set(SOQT_HEADERS
   SoAny.h 
   SoGuiComponentP.h 
   SoGuiGLWidgetP.h 
   SoGuiP.h 
   SoQt.h 
   SoQtBasic.h 
   SoQtColorEditor.h 
   SoQtComponent.h 
   SoQtComponentP.h 
   SoQtCursor.h 
   SoQtGLWidget.h 
   SoQtGLWidgetP.h 
   SoQtImageReader.h 
   SoQtInternal.h 
   SoQtLightSliderSet.h 
   SoQtMaterialEditor.h 
   SoQtMaterialSliderSet.h 
   SoQtObject.h 
   SoQtP.h 
   SoQtRenderArea.h 
   SoQtSignalThread.h 
   SoQtSliderSet.h 
   SoQtSliderSetBase.h 
   SoQtTransformSliderSet.h 
   devices/6DOFEvents.h 
   devices/SoGuiDeviceP.h 
   devices/SoGuiInputFocusP.h 
   devices/SoGuiKeyboardP.h 
   devices/SoGuiMouseP.h 
   devices/SoQtDevice.h 
   devices/SoQtDeviceP.h 
   devices/SoQtInputFocus.h 
   devices/SoQtKeyboard.h 
   devices/SoQtMouse.h 
   devices/spwinput.h 
   devices/spwinput_win32.h 
   editors/RadioGroupKit.h 
   editors/RGBCubeEditorKit.h 
   editors/SoQtColorEditor.h 
   editors/SoQtMaterialEditor.h 
   engines/SoGuiEngines.h 
   engines/SoGuiFormat.h 
   engines/SoGuiRadioGroup.h 
   nodes/SoGuiClickCounter.h 
   nodes/SoGuiColorEditor.h 
   nodes/SoGuiFrame.h 
   nodes/SoGuiImage.h 
   nodes/SoGuiLabel.h 
   nodes/SoGuiMaterialEditor.h 
   nodes/SoGuiNodes.h 
   nodes/SoGuiPane.h 
   nodes/SoGuiPosition.h 
   nodes/SoGuiRadioButton.h 
   nodes/SoGuiSceneTexture2.h 
   nodes/SoGuiSlider1.h 
   nodes/SoGuiSlider2.h 
   nodes/SoGuiToggleButton.h 
   nodes/SoGuiTranslation.h 
   nodes/SoGuiViewpointWrapper.h 
   nodes/SoGuiViewportFix.h 
   viewers/SoGuiExaminerViewerP.h 
   viewers/SoGuiFullViewerP.h 
   viewers/SoGuiPlaneViewerP.h 
   viewers/SoGuiViewerP.h 
   viewers/SoQtConstrainedViewer.h 
   viewers/SoQtExaminerViewer.h 
   viewers/SoQtExaminerViewerP.h 
   viewers/SoQtFlyViewer.h 
   viewers/SoQtFullViewer.h 
   viewers/SoQtFullViewerP.h 
   viewers/SoQtPlaneViewer.h 
   viewers/SoQtPlaneViewerP.h 
   viewers/SoQtViewer.h 
   widgets/QtNativePopupMenu.h 
   widgets/SoAnyThumbWheel.h 
   widgets/SoQtGLArea.h 
   widgets/SoQtPopupMenu.h 
   widgets/SoQtThumbWheel.h 
)

set( SOQT_SOURCES
	SoAny.cpp 
   	SoQt.cpp 
   	SoQtCommon.cpp 
   	SoQtComponent.cpp 
   	SoQtComponentCommon.cpp 
   	SoQtCursor.cpp 
   	SoQtGLWidget.cpp 
   	SoQtGLWidgetCommon.cpp 
   	SoQtImageReader.cpp 
    SoQtLightSliderSet.cpp 
   	SoQtObject.cpp 
	SoQtRenderArea.cpp 
	SoQtSignalThread.cpp 
	SoQtSliderSet.cpp 
	SoQtSliderSetBase.cpp 
	SoQtTransformSliderSet.cpp 
	devices/6DOFEvents.cpp 
	devices/SoQtDevice.cpp 
	devices/SoQtDeviceCommon.cpp 
	devices/SoQtInputFocus.cpp 
	devices/SoQtInputFocusCommon.cpp 
	devices/SoQtKeyboard.cpp 
	devices/SoQtKeyboardCommon.cpp 
	devices/SoQtMouse.cpp 
	devices/SoQtMouseCommon.cpp 
	devices/spwinput_win32.c 
	devices/spwinput_x11.cpp 
	editors/RadioGroupKit.cpp 
	editors/RGBCubeEditorKit.cpp 
	editors/SoQtColorEditor.cpp 
	editors/SoQtMaterialEditor.cpp 
	engines/Engines.cpp 
	engines/Format.cpp 
	engines/RadioGroup.cpp 
	nodes/ClickCounter.cpp 
	nodes/ColorEditor.cpp 
	nodes/Frame.cpp 
	nodes/Image.cpp 
	nodes/Label.cpp 
	nodes/MaterialEditor.cpp 
	nodes/Nodes.cpp 
	nodes/Pane.cpp 
	nodes/Position.cpp 
	nodes/RadioButton.cpp 
	nodes/SceneTexture2.cpp 
	nodes/Slider1.cpp 
	nodes/Slider2.cpp 
	nodes/ToggleButton.cpp 
	nodes/Translation.cpp 
	nodes/ViewpointWrapper.cpp 
	nodes/ViewportFix.cpp 
	viewers/ExaminerViewer.cpp 
	viewers/FullViewer.cpp 
	viewers/PlaneViewer.cpp 
	viewers/SoQtConstrainedViewer.cpp 
	viewers/SoQtExaminerViewer.cpp 
	viewers/SoQtFlyViewer.cpp 
	viewers/SoQtFullViewer.cpp 
	viewers/SoQtPlaneViewer.cpp 
	viewers/SoQtViewer.cpp 
	widgets/QtNativePopupMenu.cpp 
	widgets/SoAnyThumbWheel.cpp 
	widgets/SoQtGLArea.cpp 
	widgets/SoQtPopupMenu.cpp 
	widgets/SoQtThumbWheel.cpp 
	)

message("CMAKE_SOURCE_DIR: " ${CMAKE_SOURCE_DIR}) # this points to 'athena/Projects/WorkDir'
message("CMAKE_CURRENT_SOURCE_DIR: " ${CMAKE_CURRENT_SOURCE_DIR}) # this points to 'athena/graphics/SoQt'

# adding the top folder storing the headers
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/Inventor/Qt )


# Component(s) in the package:
add_library( SoQt SHARED ${SOQT_SOURCES} )

target_compile_definitions( SoQt PRIVATE SOQT_INTERNAL SOQT_DEBUG=1 ) # adding "-DSOQT_INTERNAL -DSOQT_DEBUG=1" compilation definitions to the compilation command of the SoQt library
target_link_libraries( SoQt ${COIN3D_LIBRARIES} Qt5::Core Qt5::OpenGL Qt5::Gui GL )

# default installation path is under /usr/local, but you can modify it at setup time with, e.g.: 'cmake -DCMAKE_INSTALL_PREFIX=$PWD/local ../SoQt'
message( "Files will be installed under the path: " ${CMAKE_INSTALL_PREFIX} ) 
install( TARGETS SoQt DESTINATION lib )
install( FILES ${SOQT_HEADERS} DESTINATION include )
