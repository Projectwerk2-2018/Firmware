#pragma once

#include "transceiver.h"



class FakeTransceiver : public Transceiver {

    public:
        virtual void send_message(std::string message) {
            // DO nothing here, its all fake
        }
    
};