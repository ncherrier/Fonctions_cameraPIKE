QT += widgets # Indispensable pour interface graphique !!!

SOURCES += \
    main_tests.cpp \
    camera.cpp \
    MainWindow.cpp \
    SettingsWindow.cpp

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../../../Program Files/Allied Vision/Vimba_1.4/VimbaCPP/Lib/Win64/' -lVimbaCPP
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../../../Program Files/Allied Vision/Vimba_1.4/VimbaCPP/Lib/Win64/' -lVimbaCPPd

#INCLUDEPATH += $$PWD/'../../../../../../../Programmes/Allied Vision/Vimba_1.4/VimbaCPP/Lib/Win64'
#DEPENDPATH += $$PWD/'../../../../../../../Programmes/Allied Vision/Vimba_1.4/VimbaCPP/Lib/Win64'

#INCLUDEPATH += $$PWD/'../../../../../../../Programmes/Allied Vision/Vimba_1.4/VimbaCPP/Include'
#DEPENDPATH += $$PWD/'../../../../../../../Programmes/Allied Vision/Vimba_1.4/VimbaCPP/Include'

#LIBS+=-L$$PWD/'../../../../../../../Programmes/Allied Vision/Vimba_1.4/VimbaCPP/Lib/Win64/'-lVimbaCPP

### Try antislash before space !!!###
### + éventuellement chemins locaux, avec tous les fichiers nécessaires ds répertoire courant

#INCLUDEPATH += '/Lib/Win64'
#INCLUDEPATH += '/Include'
#LIBS+=-L'/Lib/Win64/'-lVimbaCPP

#HEADERS += \
#    camera.h

unix|win32: LIBS += -L$$PWD/Lib/Win64/ -lVimbaCPP

INCLUDEPATH += $$PWD/Lib/Win64
DEPENDPATH += $$PWD/Lib/Win64
INCLUDEPATH += $$PWD/Lib/Win64
DEPENDPATH += $$PWD/Lib/Win64

HEADERS += \
    camera.h \
    main_tests.h \
    Include/AncillaryData.h \
    Include/BasicLockable.h \
    Include/Camera.h \
    Include/Camera.hpp \
    Include/EnumEntry.h \
    Include/EnumEntry.hpp \
    Include/Feature.h \
    Include/Feature.hpp \
    Include/FeatureContainer.h \
    Include/FeatureContainer.hpp \
    Include/FileLogger.h \
    Include/Frame.h \
    Include/ICameraFactory.h \
    Include/ICameraListObserver.h \
    Include/IFeatureObserver.h \
    Include/IFrameObserver.h \
    Include/IInterfaceListObserver.h \
    Include/Interface.h \
    Include/Interface.hpp \
    Include/IRegisterDevice.h \
    Include/LoggerDefines.h \
    Include/Mutex.h \
    Include/SharedPointer.h \
    Include/SharedPointer_impl.h \
    Include/SharedPointerDefines.h \
    Include/UserLoggerDefines.h \
    Include/UserSharedPointerDefines.h \
    Include/VimbaCPP.h \
    Include/VimbaCPPCommon.h \
    Include/VimbaSystem.h \
    Include/VimbaSystem.hpp
