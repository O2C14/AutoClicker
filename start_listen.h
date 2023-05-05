#ifndef START_LISTEN_H
#include <QThread> 
#define START_LISTEN_H


class start_listen:public QThread
{
    Q_OBJECT
public:
    start_listen();
};

#endif // START_LISTEN_H
