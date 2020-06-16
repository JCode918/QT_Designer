#include <QApplication>
#include <qpushbutton.h>

int main (int argc, char **argv)
{
    QApplication app( argc, argv);

    QPushButton helloButton ("Hello World", 0);
    helloButton.resize(100, 30);
    helloButton.setWindowTitle("My First Qt Program");
    //app.setMainWidget (&helloButton);
    helloButton.show();

    return app.exec();
}
