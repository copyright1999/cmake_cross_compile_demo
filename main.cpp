#include <iostream>
#include "char_device/char_device.h"
#include "block_device/block_device.h"
#include "block_device/another.h"

using namespace std;

void main_output(void)
{
    cout<<"this output sentence is from main.cpp"<<endl;
}

int main(void)
{
    main_output();
    block_device_output();
    char_device_output();
    another_device_output();
    return 0;
}
