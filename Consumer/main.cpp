#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQmlContext>
#include "Controller/Controller.h"
int main(int argc, char** argv){
    QGuiApplication app(argc,argv);
    QQmlApplicationEngine engine;
    Controller controller;
    engine.rootContext()->setContextProperty("controller",QVariant::fromValue(&controller));
    engine.load(QUrl("qrc:/HMI/main.qml"));
    return app.exec();
};