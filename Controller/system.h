#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>
#include <QString>
#include <QTimer>
#include <QDatetime>
class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged FINAL) // for icon car lock
    Q_PROPERTY(int outDoorTemp READ outDoorTemp WRITE setOutDoorTemp NOTIFY outDoorTempChanged FINAL) // for temperature
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged FINAL)
    //Q_PROPERTY(int timeSystem READ timeSystem WRITE setTimeSystem NOTIFY timeSystemChanged FINAL)
public:
    explicit System(QObject *parent = nullptr);

    bool carLocked() const;
    Q_INVOKABLE void setCarLocked(bool newCarLocked);

    int outDoorTemp() const;
    Q_INVOKABLE void setOutDoorTemp(int newOutDoorTemp);

    QString userName() const;
    Q_INVOKABLE void setUserName(const QString &newUserName);







public slots:

signals:
    void carLockedChanged();
    void outDoorTempChanged();
    void userNameChanged();








private:
    bool m_carLocked;
    int m_outDoorTemp;
    QString m_userName;



   // QTimer*m_timeSystemTimer;
};

#endif // SYSTEM_H
