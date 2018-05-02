#pragma once
#include "transceiver.h"

class Terminal : public Transceiver
{
    private:
        void send();
        SensorData dataCluster;


    public:
        void get_send();

        virtual void send_message(std::string message) {
            std::cout << "Message = " << message << std::endl;
        }
};