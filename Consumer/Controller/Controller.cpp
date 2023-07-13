#include "Controller.h"
#include <HMIInterface.h>
Controller::Controller(QObject* parent)
    :QObject{parent}
{

}

void Controller::modifyStatus(bool status){
    printf("Call herer\n");
    HMIInterface::getInstance().modifyStatus(status);
}