QT += widgets # Indispensable pour interface graphique !!!

SOURCES += \
    main_tests.cpp \
    camera.cpp \
    MainWindow.cpp \
    GlobalSettingsWindow.cpp



HEADERS += \
    camera.h \
    main_tests.h \
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
    VimbaImageTransform/Include/VmbTransformTypes.h


win32: LIBS += -L$$PWD/VimbaCPP/Lib/Win64/ -lVimbaCPP

INCLUDEPATH += $$PWD/VimbaCPP/Lib/Win64
DEPENDPATH += $$PWD/VimbaCPP/Lib/Win64

INCLUDEPATH += $$PWD/VimbaCPP/Bin/Win64
DEPENDPATH += $$PWD/VimbaCPP/Bin/Win64
