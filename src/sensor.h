#include <DHT.h>

class Sensor
{
private:
    const uint8_t _pin_dht11 = 2;
    const uint8_t _type_dht = 11;
    DHT _dht;

    float _temp = 0.0;
    float _humi = 0.0;

public:
    struct SensorData
    {
        float temp = NULL;
        float humi = NULL;
    } _data;
    

    Sensor();
    ~Sensor();

    float get_temperature();
    float get_humidity();

    SensorData read();

};

