#include "Controller.h"

Controller::Controller(QObject* parent)
    :QObject{parent}
{

}

void Controller::modifyStatus(bool status){
    if (status != m_status){
        m_status = status;
        emit statusChanged();
    }
}