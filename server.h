#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>

class Server : public QTcpServer
{
public:
    Server();
protected:
    void incomingConenction(int descriptor);
};

#endif // SERVER_H
