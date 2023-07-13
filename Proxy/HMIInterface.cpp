#include "HMIInterface.h"

HMIInterface::HMIInterface(const QString& servicePath,
                           const QString& object,
                           const QDBusConnection& connection,
                           QObject* parent )
    : QDBusAbstractInterface(servicePath, object, staticInterfaceName(), connection, parent)
{

}

HMIInterface& HMIInterface::getInstance(){
    static HMIInterface instance("controller.service", "/service", QDBusConnection::sessionBus());
    return instance;
}