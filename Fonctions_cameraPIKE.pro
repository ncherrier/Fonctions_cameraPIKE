SOURCES += \
    main_tests.cpp \
    camera.cpp

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../../../Program Files/Allied Vision/Vimba_1.4/VimbaCPP/Lib/Win64/' -lVimbaCPP
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../../../Program Files/Allied Vision/Vimba_1.4/VimbaCPP/Lib/Win64/' -lVimbaCPPd

#INCLUDEPATH += $$PWD/'../../../../../../../Programmes/Allied Vision/Vimba_1.4/VimbaCPP/Lib/Win64'
#DEPENDPATH += $$PWD/'../../../../../../../Programmes/Allied Vision/Vimba_1.4/VimbaCPP/Lib/Win64'

#INCLUDEPATH += $$PWD/'../../../../../../../Programmes/Allied Vision/Vimba_1.4/VimbaCPP/Include'
#DEPENDPATH += $$PWD/'../../../../../../../Programmes/Allied Vision/Vimba_1.4/VimbaCPP/Include'

#LIBS+=-L$$PWD/'../../../../../../../Programmes/Allied Vision/Vimba_1.4/VimbaCPP/Lib/Win64/'-lVimbaCPP

INCLUDEPATH += '/Lib/Win64'
INCLUDEPATH += '/Include'
LIBS+=-L'/Lib/Win64/'-lVimbaCPP

HEADERS += \
    camera.h
