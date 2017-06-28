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
find_package( Qt5 COMPONENTS Core OpenGL Gui Widgets REQUIRED )

# Generate UI files automatically:
set( CMAKE_AUTOUIC TRUE )
# Generate MOC files automatically:
set( CMAKE_AUTOMOC TRUE )
# Generate resource files automatically:
set( CMAKE_AUTORCC TRUE )


set( SOQT_TOP_SOURCE_DIR src/Inventor/Qt )

# --- HEADERS

set(SOQT_HEADERS
   ${SOQT_TOP_SOURCE_DIR}/SoAny.h 
   ${SOQT_TOP_SOURCE_DIR}/SoGuiComponentP.h 
   ${SOQT_TOP_SOURCE_DIR}/SoGuiGLWidgetP.h 
   ${SOQT_TOP_SOURCE_DIR}/SoGuiP.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQt.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtBasic.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtColorEditor.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtComponent.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtComponentP.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtCursor.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtGLWidget.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtGLWidgetP.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtImageReader.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtInternal.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtLightSliderSet.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtMaterialEditor.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtMaterialSliderSet.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtObject.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtP.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtRenderArea.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtSignalThread.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtSliderSet.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtSliderSetBase.h 
   ${SOQT_TOP_SOURCE_DIR}/SoQtTransformSliderSet.h   
)

set(SOQT_HEADERS_DEVICES
   ${SOQT_TOP_SOURCE_DIR}/devices/6DOFEvents.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/SoGuiDeviceP.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/SoGuiInputFocusP.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/SoGuiKeyboardP.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/SoGuiMouseP.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/SoQtDevice.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/SoQtDeviceP.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/SoQtInputFocus.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/SoQtKeyboard.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/SoQtMouse.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/spwinput.h 
   ${SOQT_TOP_SOURCE_DIR}/devices/spwinput_win32.h
)

set(SOQT_HEADERS_EDITORS
   ${SOQT_TOP_SOURCE_DIR}/editors/RadioGroupKit.h 
   ${SOQT_TOP_SOURCE_DIR}/editors/RGBCubeEditorKit.h 
   ${SOQT_TOP_SOURCE_DIR}/editors/SoQtColorEditor.h 
   ${SOQT_TOP_SOURCE_DIR}/editors/SoQtMaterialEditor.h
)

set(SOQT_HEADERS_ENGINES
   ${SOQT_TOP_SOURCE_DIR}/engines/SoGuiEngines.h 
   ${SOQT_TOP_SOURCE_DIR}/engines/SoGuiFormat.h 
   ${SOQT_TOP_SOURCE_DIR}/engines/SoGuiRadioGroup.h 
)

set(SOQT_HEADERS_NODES
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiClickCounter.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiColorEditor.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiFrame.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiImage.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiLabel.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiMaterialEditor.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiNodes.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiPane.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiPosition.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiRadioButton.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiSceneTexture2.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiSlider1.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiSlider2.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiToggleButton.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiTranslation.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiViewpointWrapper.h 
   ${SOQT_TOP_SOURCE_DIR}/nodes/SoGuiViewportFix.h 
)

set(SOQT_HEADERS_VIEWERS
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoGuiExaminerViewerP.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoGuiFullViewerP.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoGuiPlaneViewerP.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoGuiViewerP.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoQtConstrainedViewer.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoQtExaminerViewer.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoQtExaminerViewerP.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoQtFlyViewer.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoQtFullViewer.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoQtFullViewerP.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoQtPlaneViewer.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoQtPlaneViewerP.h 
   ${SOQT_TOP_SOURCE_DIR}/viewers/SoQtViewer.h
)  

set(SOQT_HEADERS_WIDGETS
   ${SOQT_TOP_SOURCE_DIR}/widgets/QtNativePopupMenu.h 
   ${SOQT_TOP_SOURCE_DIR}/widgets/SoAnyThumbWheel.h 
   ${SOQT_TOP_SOURCE_DIR}/widgets/SoQtGLArea.h 
   ${SOQT_TOP_SOURCE_DIR}/widgets/SoQtPopupMenu.h 
   ${SOQT_TOP_SOURCE_DIR}/widgets/SoQtThumbWheel.h
)



# --- SOURCES

set( SOQT_SOURCES
	${SOQT_TOP_SOURCE_DIR}/SoAny.cpp 
   	${SOQT_TOP_SOURCE_DIR}/SoQt.cpp 
   	${SOQT_TOP_SOURCE_DIR}/SoQtCommon.cpp 
   	${SOQT_TOP_SOURCE_DIR}/SoQtComponent.cpp 
   	${SOQT_TOP_SOURCE_DIR}/SoQtComponentCommon.cpp 
   	${SOQT_TOP_SOURCE_DIR}/SoQtCursor.cpp 
   	${SOQT_TOP_SOURCE_DIR}/SoQtGLWidget.cpp 
   	${SOQT_TOP_SOURCE_DIR}/SoQtGLWidgetCommon.cpp 
   	${SOQT_TOP_SOURCE_DIR}/SoQtImageReader.cpp 
    ${SOQT_TOP_SOURCE_DIR}/SoQtLightSliderSet.cpp 
   	${SOQT_TOP_SOURCE_DIR}/SoQtObject.cpp 
	${SOQT_TOP_SOURCE_DIR}/SoQtRenderArea.cpp 
	${SOQT_TOP_SOURCE_DIR}/SoQtSignalThread.cpp 
	${SOQT_TOP_SOURCE_DIR}/SoQtSliderSet.cpp 
	${SOQT_TOP_SOURCE_DIR}/SoQtSliderSetBase.cpp 
	${SOQT_TOP_SOURCE_DIR}/SoQtTransformSliderSet.cpp 
	${SOQT_TOP_SOURCE_DIR}/devices/6DOFEvents.cpp 
	${SOQT_TOP_SOURCE_DIR}/devices/SoQtDevice.cpp 
	${SOQT_TOP_SOURCE_DIR}/devices/SoQtDeviceCommon.cpp 
	${SOQT_TOP_SOURCE_DIR}/devices/SoQtInputFocus.cpp 
	${SOQT_TOP_SOURCE_DIR}/devices/SoQtInputFocusCommon.cpp 
	${SOQT_TOP_SOURCE_DIR}/devices/SoQtKeyboard.cpp 
	${SOQT_TOP_SOURCE_DIR}/devices/SoQtKeyboardCommon.cpp 
	${SOQT_TOP_SOURCE_DIR}/devices/SoQtMouse.cpp 
	${SOQT_TOP_SOURCE_DIR}/devices/SoQtMouseCommon.cpp 
	${SOQT_TOP_SOURCE_DIR}/devices/spwinput_win32.c 
	${SOQT_TOP_SOURCE_DIR}/devices/spwinput_x11.cpp 
	${SOQT_TOP_SOURCE_DIR}/editors/RadioGroupKit.cpp 
	${SOQT_TOP_SOURCE_DIR}/editors/RGBCubeEditorKit.cpp 
	${SOQT_TOP_SOURCE_DIR}/editors/SoQtColorEditor.cpp 
	${SOQT_TOP_SOURCE_DIR}/editors/SoQtMaterialEditor.cpp 
	${SOQT_TOP_SOURCE_DIR}/engines/Engines.cpp 
	${SOQT_TOP_SOURCE_DIR}/engines/Format.cpp 
	${SOQT_TOP_SOURCE_DIR}/engines/RadioGroup.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/ClickCounter.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/ColorEditor.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/Frame.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/Image.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/Label.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/MaterialEditor.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/Nodes.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/Pane.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/Position.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/RadioButton.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/SceneTexture2.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/Slider1.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/Slider2.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/ToggleButton.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/Translation.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/ViewpointWrapper.cpp 
	${SOQT_TOP_SOURCE_DIR}/nodes/ViewportFix.cpp 
	${SOQT_TOP_SOURCE_DIR}/viewers/ExaminerViewer.cpp 
	${SOQT_TOP_SOURCE_DIR}/viewers/FullViewer.cpp 
	${SOQT_TOP_SOURCE_DIR}/viewers/PlaneViewer.cpp 
	${SOQT_TOP_SOURCE_DIR}/viewers/SoQtConstrainedViewer.cpp 
	${SOQT_TOP_SOURCE_DIR}/viewers/SoQtExaminerViewer.cpp 
	${SOQT_TOP_SOURCE_DIR}/viewers/SoQtFlyViewer.cpp 
	${SOQT_TOP_SOURCE_DIR}/viewers/SoQtFullViewer.cpp 
	${SOQT_TOP_SOURCE_DIR}/viewers/SoQtPlaneViewer.cpp 
	${SOQT_TOP_SOURCE_DIR}/viewers/SoQtViewer.cpp 
	${SOQT_TOP_SOURCE_DIR}/widgets/QtNativePopupMenu.cpp 
	${SOQT_TOP_SOURCE_DIR}/widgets/SoAnyThumbWheel.cpp 
	${SOQT_TOP_SOURCE_DIR}/widgets/SoQtGLArea.cpp 
	${SOQT_TOP_SOURCE_DIR}/widgets/SoQtPopupMenu.cpp 
	${SOQT_TOP_SOURCE_DIR}/widgets/SoQtThumbWheel.cpp 
)


message("CMAKE_SOURCE_DIR: " ${CMAKE_SOURCE_DIR}) # this points to 'athena/Projects/WorkDir'
message("CMAKE_CURRENT_SOURCE_DIR: " ${CMAKE_CURRENT_SOURCE_DIR}) # this points to 'athena/graphics/SoQt'

# adding the top folder storing the headers
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )

# Component(s) in the package:
add_library( SoQt SHARED ${SOQT_SOURCES} ${SOQT_HEADERS} ${SOQT_HEADERS_DEVICES} ${SOQT_HEADERS_EDITORS} ${SOQT_HEADERS_ENGINES} ${SOQT_HEADERS_NODES} ${SOQT_HEADERS_VIEWERS}
${SOQT_HEADERS_WIDGETS})

#qt5_wrap_cpp(${SOQT_HEADERS_VIEWERS})

target_compile_definitions( SoQt PRIVATE SOQT_INTERNAL SOQT_DEBUG=1 QT_SHARED NDEBUG ) # adding "-DSOQT_INTERNAL -DSOQT_DEBUG=1 ..." compilation definitions to the compilation command of the SoQt library

SET(GCC_SOQT_COMPILE_FLAGS "-fno-builtin")
add_definitions(${GCC_SOQT_COMPILE_FLAGS})

target_link_libraries( SoQt ${COIN3D_LIBRARIES} Qt5::Core Qt5::OpenGL Qt5::Gui GL )

# adding include directories
target_include_directories( SoQt PUBLIC ${COIN3D_INCLUDE_DIRS} )

### INSTALLATION

# default installation path is under /usr/local, 
# but you can modify it at setup time with, e.g.: 'cmake -DCMAKE_INSTALL_PREFIX=$PWD/local ../SoQt'
message( "Files will be installed under the path: " ${CMAKE_INSTALL_PREFIX} ) 

# Library installation
install( TARGETS SoQt DESTINATION lib )

# Headers installation
install( FILES ${SOQT_HEADERS} DESTINATION include/Inventor/Qt )
install( FILES ${SOQT_HEADERS_DEVICES} DESTINATION include/Inventor/Qt/devices )
install( FILES ${SOQT_HEADERS_EDITORS} DESTINATION include/Inventor/Qt/editors )
install( FILES ${SOQT_HEADERS_ENGINES} DESTINATION include/Inventor/Qt/engines )
install( FILES ${SOQT_HEADERS_NODES} DESTINATION include/Inventor/Qt/nodes )
install( FILES ${SOQT_HEADERS_VIEWERS} DESTINATION include/Inventor/Qt/viewers )
install( FILES ${SOQT_HEADERS_WIDGETS} DESTINATION include/Inventor/Qt/widgets )



