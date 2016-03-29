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
    camera_settings.cpp



HEADERS += \
    camera.h \
    ThirdParty/TinyXML/Include/tinystr.h \
    ThirdParty/TinyXML/Include/tinyxml.h \
    Tools/ClassGenerator/Win32/Templates/CppTemplate.h \
    VimbaC/Include/VimbaC.h \
    VimbaC/Include/VmbCommonTypes.h \
    VimbaCPP/Include/AncillaryData.h \
    VimbaCPP/Include/BasicLockable.h \
    VimbaCPP/Include/Camera.h \
    VimbaCPP/Include/Camera.hpp \
    VimbaCPP/Include/EnumEntry.h \
    VimbaCPP/Include/EnumEntry.hpp \
    VimbaCPP/Include/Feature.h \
    VimbaCPP/Include/Feature.hpp \
    VimbaCPP/Include/FeatureContainer.h \
    VimbaCPP/Include/FeatureContainer.hpp \
    VimbaCPP/Include/FileLogger.h \
    VimbaCPP/Include/Frame.h \
    VimbaCPP/Include/ICameraFactory.h \
    VimbaCPP/Include/ICameraListObserver.h \
    VimbaCPP/Include/IFeatureObserver.h \
    VimbaCPP/Include/IFrameObserver.h \
    VimbaCPP/Include/IInterfaceListObserver.h \
    VimbaCPP/Include/Interface.h \
    VimbaCPP/Include/Interface.hpp \
    VimbaCPP/Include/IRegisterDevice.h \
    VimbaCPP/Include/LoggerDefines.h \
    VimbaCPP/Include/Mutex.h \
    VimbaCPP/Include/SharedPointer.h \
    VimbaCPP/Include/SharedPointer_impl.h \
    VimbaCPP/Include/SharedPointerDefines.h \
    VimbaCPP/Include/UserLoggerDefines.h \
    VimbaCPP/Include/UserSharedPointerDefines.h \
    VimbaCPP/Include/VimbaCPP.h \
    VimbaCPP/Include/VimbaCPPCommon.h \
    VimbaCPP/Include/VimbaSystem.h \
    VimbaCPP/Include/VimbaSystem.hpp \
    VimbaImageTransform/Include/VmbCommonTypes.h \
    VimbaImageTransform/Include/VmbTransform.h \
    VimbaImageTransform/Include/VmbTransformTypes.h \
    FramingWindow.h \
    SettingsWindow.h \
    webcamSettingsWindow.h \
    cameraSettingsWindow.h \
    ProcessWindow.h \
    MainProg.h

LIBS += \
    -L$$PWD/VimbaCPP/Lib/Win32 -lVimbaCPP \
    $$PWD/VimbaCPP/Bin/Win32/VimbaCPP.dll \
    $$PWD/VimbaCPP/Bin/Win32/VimbaC.dll \
    -L$$PWD/VimbaC/Lib/Win32 -lVimbaC \
    $$PWD/VimbaC/Bin/Win32/VimbaC.dll \


INCLUDEPATH += $$PWD/VimbaCPP/Lib/Win32
DEPENDPATH += $$PWD/VimbaCPP/Lib/Win32

