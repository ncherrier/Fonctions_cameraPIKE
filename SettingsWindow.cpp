#include <QApplication>
#include <QPushButton>

using namespace std;

int main(int argc, char *argv[])

{

    QApplication app(argc, argv);



    QPushButton bouton("Appuyez ici");

    bouton.show();



    return app.exec();

}



