#pragma once
#include "transceiver.h"



class Terminal : public Transceiver
{
    public:
        void get_send();

        virtual void send_message(std::string message);

};