#include <QApplication>
#include <qpushbutton.h>
#include <QLabel>

int main (int argc, char **argv)
{
    QApplication app( argc, argv);

    QPushButton helloButton ("Hello World", 0);
    QLabel WindowLabel("<center>Welcome to my first Qt program</center>");
    WindowLabel.resize(400, 400);
    helloButton.resize(100, 30);
    helloButton.setWindowTitle("My First Qt Program");
    //app.setMainWidget (&helloButton);
    helloButton.show();
    WindowLabel.show();

    return app.exec();
}
