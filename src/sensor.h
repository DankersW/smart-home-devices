#ifndef SENSOR_H
#define SENSOR_H

#include <DHT.h>
#include "types.h"

class Sensor
{
private:
    DHT *_dht;

    const uint8_t _pin_dht11 = D2;
    const uint8_t _type_dht = 11;

    SensorData _data;

public:
    
    Sensor();
    ~Sensor();
    void begin();
    SensorData poll();
};

#endif
