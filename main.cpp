#include "mainwindow.h"
#include "server.h"
#include <QApplication>


int main(int argc, char *argv[])
{
   QCoreApplication app(argc,argv);
   Server server;
   if(!server.listen(QHostAddress::Any,9876))
   {
       qCritical("Cannot listen to port 9876");
       return 1;
   }
   return app.exec();
}
