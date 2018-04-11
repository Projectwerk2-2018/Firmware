#pragma once

class Transceiver
{
    /*
    private:
        double temperature;
        bool motion;
        double humidity;
    
    public:
        double get_temparure();
        bool get_motion();
        double get_humidity();

    public:
<<<<<<< HEAD
        void set_send(void send);
    */
=======
        void send(double temperature, bool motion, double humidity);
>>>>>>> 1875b628b6fafdd05dfddc23d3f8597910db9e76

    public:

    virtual void send();
    
};