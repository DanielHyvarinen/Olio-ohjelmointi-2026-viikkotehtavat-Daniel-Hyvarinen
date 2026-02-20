#include "consumer.h"
#include <QDebug>

Consumer::Consumer(QObject * p) : QObject(p)
{
    qDebug()<<"Consumer constructor";
}

Consumer::~Consumer()
{
    qDebug()<<"Consumer destructor";
}

void Consumer::handleProducerSignal()
{

}
