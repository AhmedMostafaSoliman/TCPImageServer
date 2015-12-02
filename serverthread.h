#ifndef SERVERTHREAD_H
#define SERVERTHREAD_H
#include <QThread>


class ServerThread : public QThread
{
public :
    ServerThread (int descriptor, QObject *parent);
    void run();

private:
    QImage randomImage();
    int m_descriptor;

};

#endif // SERVERTHREAD_H
