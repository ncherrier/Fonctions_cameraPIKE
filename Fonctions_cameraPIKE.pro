QT += widgets # Indispensable pour interface graphique !!!

SOURCES += \
    main_tests.cpp \
    camera.cpp \
    MainWindow.cpp \
    SettingsWindow.cpp



HEADERS += \
    camera.h \
    main_tests.h


win32: LIBS += -L$$PWD/VimbaCPP/Lib/Win64/ -lVimbaCPP

INCLUDEPATH += $$PWD/VimbaCPP/Lib/Win64
DEPENDPATH += $$PWD/VimbaCPP/Lib/Win64
