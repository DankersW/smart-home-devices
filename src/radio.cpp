#include "radio.h"

Radio::Radio(/* args */)
{
    _state = 1;
}

Radio::~Radio()
{

}

int Radio::get_state()
{
    return _state;
}