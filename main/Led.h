#ifndef LedArduino_h
#define LedArduino_h

class Led {
    private: 
        byte pin;
    public:
        Led(byte pin);
        void init();
        void on();
        void off();
};

#endif