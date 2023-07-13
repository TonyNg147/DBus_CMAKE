#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQmlContext>
#include "Controller/Controller.h"
#include <HMIAdaptor.h>
int main(int argc, char** argv){
    QGuiApplication app(argc,argv);
    QQmlApplicationEngine engine;
    Controller controller;
    new HMIAdaptor(&controller);
    QDBusConnection::sessionBus().registerObject("/service",&controller);
    QDBusConnection::sessionBus().registerService("controller.service");
    engine.rootContext()->setContextProperty("controller",QVariant::fromValue(&controller));
    engine.load(QUrl("qrc:/HMI/main.qml"));
    return app.exec();
};