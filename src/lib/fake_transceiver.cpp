#include <iostream>

using namespace std;


class FakeTransceiver : public Transceiver {

    virtual void send_message(std::string message);
    
};
