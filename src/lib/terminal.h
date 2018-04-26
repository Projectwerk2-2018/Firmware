#pragma once
#include "transceiver.h"

class Terminal
{
    private:
        void send();
        SensorData dataCluster;


    public:
        void get_send();

        void displayData(SensorData dataCluster);
};