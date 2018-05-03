#pragma once

#include "transceiver.h"
#include <string>



class FakeTransceiver : public Transceiver {

    public:
        virtual void send_message(std::string message);
    
};