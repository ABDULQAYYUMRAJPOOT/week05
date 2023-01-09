#include <iostream>
using namespace std;

float mili(float length, float width, float height);
float centi(float length, float width, float height);
float meter(float length, float width, float height);
float kilo(float length, float width, float height);
float calling(string unit);


float length;
float width;
float height;
string unit;

main()
{   float final;
    cout<<"Enter the length: ";
    cin>> length;
    cout<< "Enter the width: ";
    cin>> width;
    cout<< "Enter the height: ";
    cin>> height;
    cout<<"Enter the unit: ";
    cin>> unit;
    final = calling(unit);
    
}
float mili(float length, float width, float height)
{
    float vol;
    vol = (length * width * height)/3 * 1000* 1000* 1000;
    cout<<vol <<" cubic milimeters.";
}

float centi(float length, float width, float height)
{
    float vol;
    vol = (length * width * height)/3 * 100 *100 *100;
    cout<<vol <<" cubic centimeters.";
}

float meter(float length, float width, float height)
{
    float vol;
    vol = (length * width * height)/3 ;
    cout<<vol <<" cubic meters.";
    
}
float kilo(float length, float width, float height)
{
    float vol;
    vol = (length * width * height)/3 * 0.001* 0.001* 0.001;
    cout<<vol <<" cubic kilometers.";
    
}


float calling(string unit)
{
    if (unit == "centimeters")
    {
        return centi(length, width, height);
    }
    if (unit == "milimeters")
    {
        return mili(length, width, height);
    }
    if (unit == "meters")
    {
        return meter(length, width, height);
    }
    if (unit == "kilometers")
    {
        return kilo(length, width, height);
    }
}