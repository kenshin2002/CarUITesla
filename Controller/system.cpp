#include "system.h"

System::System(QObject *parent)
    : QObject{parent},m_carLocked(true),m_outDoorTemp(65),m_userName("Hoang")
{
  //  m_timeSystemTimer=new QTimer(this);
    //m_timeSystemTimer->setInterval(500);
   // m_timeSystemTimer->setSingleShot(true);
   // connect(m_timeSystemTimer,&QTimer::timeout,this,&System::timeSystemTimerTimeOut);
   // timeSystemTimerTimeOut();
}

bool System::carLocked() const
{
    return m_carLocked;
}

void System::setCarLocked(bool newCarLocked)
{
    if (m_carLocked == newCarLocked)
        return;
    m_carLocked = newCarLocked;
    emit carLockedChanged();
}

int System::outDoorTemp() const
{
    return m_outDoorTemp;
}

void System::setOutDoorTemp(int newOutDoorTemp)
{
    if (m_outDoorTemp == newOutDoorTemp)
        return;
    m_outDoorTemp = newOutDoorTemp;
    emit outDoorTempChanged();
}

QString System::userName() const
{
    return m_userName;
}

void System::setUserName(const QString &newUserName)
{
    if (m_userName == newUserName)
        return;
    m_userName = newUserName;
    emit userNameChanged();
}






