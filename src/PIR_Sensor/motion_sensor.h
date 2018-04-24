#pragma once

class MotionSensor{

    public:
        virtual int get_motion(void) = 0;

    public:
        int pulsecount = 0;
};