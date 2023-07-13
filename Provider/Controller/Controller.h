#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
class Controller: public QObject{
    Q_OBJECT
    Q_PROPERTY(bool status READ status NOTIFY statusChanged)
    public:
        Controller(QObject* parent = nullptr);
        bool status() const {return m_status;}
    public slots:
        void modifyStatus(bool status);
    signals:
        void statusChanged();
    private:
        bool m_status = false;
};
#endif // CONTROLLER_H