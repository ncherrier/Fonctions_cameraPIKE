QT += core gui

QT += widgets # Indispensable pour interface graphique !!!



SOURCES += \
    camera.cpp \
    FramingWindow.cpp \
    SettingsWindow.cpp \
    cameraSettingsWindow.cpp \
    webcamSettingsWindow.cpp \
    ProcessWindow.cpp \
    MainProg.cpp \
    camera_settings.cpp \
    TakePictureTest.cpp

HEADERS += \
    camera.h \
#    ThirdParty/TinyXML/Include/tinystr.h \
#    ThirdParty/TinyXML/Include/tinyxml.h \
 #   Tools/ClassGenerator/Win32/Templates/CppTemplate.h \
  #  VimbaC/Include/VimbaC.h \
   # VimbaC/Include/VmbCommonTypes.h \
 #   VimbaCPP/Include/AncillaryData.h \
 #   VimbaCPP/Include/BasicLockable.h \
 #   VimbaCPP/Include/Camera.h \
 #   VimbaCPP/Include/Camera.hpp \
 #   VimbaCPP/Include/EnumEntry.h \
 #   VimbaCPP/Include/EnumEntry.hpp \
 #   VimbaCPP/Include/Feature.h \
 #   VimbaCPP/Include/Feature.hpp \
 #   VimbaCPP/Include/FeatureContainer.h \
 #   VimbaCPP/Include/FeatureContainer.hpp \
 #   VimbaCPP/Include/FileLogger.h \
 #   VimbaCPP/Include/Frame.h \
 #   VimbaCPP/Include/ICameraFactory.h \
 #   VimbaCPP/Include/ICameraListObserver.h \
 #  VimbaCPP/Include/IFeatureObserver.h \
 #   VimbaCPP/Include/IFrameObserver.h \
 #   VimbaCPP/Include/IInterfaceListObserver.h \
 #   VimbaCPP/Include/Interface.h \
 #   VimbaCPP/Include/Interface.hpp \
 #   VimbaCPP/Include/IRegisterDevice.h \
 #   VimbaCPP/Include/LoggerDefines.h \
 #   VimbaCPP/Include/Mutex.h \
 #   VimbaCPP/Include/SharedPointer.h \
 #   VimbaCPP/Include/SharedPointer_impl.h \
 #   VimbaCPP/Include/SharedPointerDefines.h \
 #   VimbaCPP/Include/UserLoggerDefines.h \
 #   VimbaCPP/Include/UserSharedPointerDefines.h \
 #   VimbaCPP/Include/VimbaCPP.h \
 #   VimbaCPP/Include/VimbaCPPCommon.h \
 #   VimbaCPP/Include/VimbaSystem.h \
 #   VimbaCPP/Include/VimbaSystem.hpp \
 #   VimbaImageTransform/Include/VmbCommonTypes.h \
 #   VimbaImageTransform/Include/VmbTransform.h \
 #   VimbaImageTransform/Include/VmbTransformTypes.h \
    FramingWindow.h \
    SettingsWindow.h \
    webcamSettingsWindow.h \
    cameraSettingsWindow.h \
    ProcessWindow.h \
    MainProg.h \
    Vimba_2.0/VimbaCPP/Include/AncillaryData.h \
    Vimba_2.0/VimbaCPP/Include/BasicLockable.h \
    Vimba_2.0/VimbaCPP/Include/Camera.h \
    Vimba_2.0/VimbaCPP/Include/Camera.hpp \
    Vimba_2.0/VimbaCPP/Include/EnumEntry.h \
    Vimba_2.0/VimbaCPP/Include/EnumEntry.hpp \
    Vimba_2.0/VimbaCPP/Include/Feature.h \
    Vimba_2.0/VimbaCPP/Include/Feature.hpp \
    Vimba_2.0/VimbaCPP/Include/FeatureContainer.h \
    Vimba_2.0/VimbaCPP/Include/FeatureContainer.hpp \
    Vimba_2.0/VimbaCPP/Include/FileLogger.h \
    Vimba_2.0/VimbaCPP/Include/Frame.h \
    Vimba_2.0/VimbaCPP/Include/ICameraFactory.h \
    Vimba_2.0/VimbaCPP/Include/ICameraListObserver.h \
    Vimba_2.0/VimbaCPP/Include/IFeatureObserver.h \
    Vimba_2.0/VimbaCPP/Include/IFrameObserver.h \
    Vimba_2.0/VimbaCPP/Include/IInterfaceListObserver.h \
    Vimba_2.0/VimbaCPP/Include/Interface.h \
    Vimba_2.0/VimbaCPP/Include/Interface.hpp \
    Vimba_2.0/VimbaCPP/Include/IRegisterDevice.h \
    Vimba_2.0/VimbaCPP/Include/LoggerDefines.h \
    Vimba_2.0/VimbaCPP/Include/Mutex.h \
    Vimba_2.0/VimbaCPP/Include/SharedPointer.h \
    Vimba_2.0/VimbaCPP/Include/SharedPointer_impl.h \
    Vimba_2.0/VimbaCPP/Include/SharedPointerDefines.h \
    Vimba_2.0/VimbaCPP/Include/UserLoggerDefines.h \
    Vimba_2.0/VimbaCPP/Include/UserSharedPointerDefines.h \
    Vimba_2.0/VimbaCPP/Include/VimbaCPP.h \
    Vimba_2.0/VimbaCPP/Include/VimbaCPPCommon.h \
    Vimba_2.0/VimbaCPP/Include/VimbaSystem.h \
    Vimba_2.0/VimbaCPP/Include/VimbaSystem.hpp \
    TakePictureTest.h

### VimbaC ###
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/Vimba_2.0/VimbaC/Lib/Win32 -lVimbaC
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/Vimba_2.0/VimbaC/Lib/Win32 -lVimbaCd

INCLUDEPATH += $$PWD/Vimba_2.0/VimbaC/Include
DEPENDPATH += $$PWD/Vimba_2.0/VimbaC/Include

win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/Vimba_2.0/VimbaC/Lib/Win32/VimbaC.lib
#else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/Vimba_2.0/VimbaC/Lib/Win32/VimbaCd.lib

### VimbaCPP ###
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/Vimba_2.0/VimbaCPP/Lib/Win32 -lVimbaCPP
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/Vimba_2.0/VimbaCPP/Lib/Win32 -lVimbaCPPd

INCLUDEPATH += $$PWD/Vimba_2.0/VimbaCPP/Include
DEPENDPATH += $$PWD/Vimba_2.0/VimbaCPP/Include

win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/Vimba_2.0/VimbaCPP/Lib/Win32/VimbaCPP.lib
#else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/Vimba_2.0/VimbaCPP/Lib/Win32/VimbaCPPd.lib

