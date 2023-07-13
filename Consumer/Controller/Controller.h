#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
class Controller: public QObject{
    Q_OBJECT
    public:
        Controller(QObject* parent = nullptr);
    public slots:
        void modifyStatus(bool status);
};
#endif // CONTROLLER_H