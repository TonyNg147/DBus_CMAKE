#ifndef DBUS_INTERFACE_H
#define DBUS_INTERFACE_H
#include <QDBusAbstractInterface>
#include <QDBusConnection>
#include <QDBusPendingReply>
class HMIInterface: public QDBusAbstractInterface{
    Q_OBJECT
    private:
        HMIInterface(const QString& servicePath,
                     const QString& object,
                     const QDBusConnection& connection,
                     QObject* parent = nullptr);
        static const char* staticInterfaceName() {
            return "controller.service";
        }
    public:
        static HMIInterface& getInstance();
    public:
        QDBusPendingReply<> modifyStatus(bool status){
            QList<QVariant> argumentList;
            argumentList << status;
            return asyncCallWithArgumentList("modifyStatus", argumentList);
        } 

};
#endif //DBUS_INTERFACE_H
