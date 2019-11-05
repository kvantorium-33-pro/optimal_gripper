#ifndef AXIS_H
#define AXIS_H
#include <Arduino.h>

    class Axis
    {
    private:
        uint8_t _id, _endstop_pin,  _encoder_pin;
       
        bool _endstop_mode = false;
        bool _endstop_status = false;
        uint8_t _encoder_value = 0;
    public:
    
        Axis();
        void Ainit(uint8_t _id_,uint8_t _endstop_pin_, uint8_t _encoder_pin_);
        bool endstop_check();
        int encoder_counter();
        void reload();
    
    };
 
    
    

#endif