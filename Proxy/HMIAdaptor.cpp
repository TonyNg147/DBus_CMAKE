#include "HMIAdaptor.h"

HMIAdaptor::HMIAdaptor(QObject* parent)
    :QDBusAbstractAdaptor{parent}
{
    setAutoRelaySignals(true);
}

void HMIAdaptor::modifyStatus(bool status){
    QMetaObject::invokeMethod(parent(), "modifyStatus", Q_ARG(bool, status));
}