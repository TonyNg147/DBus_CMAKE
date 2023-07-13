#include <QDBusAbstractAdaptor>
#include <QDBusConnection>
class HMIAdaptor: public QDBusAbstractAdaptor{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface","controller.service")
    Q_CLASSINFO("D-Bus Introspection", ""
                                        " <interface name=\"controller.service\">  \n"
                                        "     <method name=\"modifyStatus\">       \n" 
                                        "         <arg direction=\"out\" type=\"b\"> \n"  
                                        "     </method>                          \n"  
                                        " </interface>                           \n"   
                                       ""
    )
    public: 
        HMIAdaptor(QObject* parent);
    public slots:
        void modifyStatus(bool status);
};