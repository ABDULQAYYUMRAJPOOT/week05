#include <iostream>
using namespace std;
int hours(int num1, int num2);
int minutes(int num2);
int main()
{
    int clockHour;
    int clockMinute;
    int num1;
    int num2;

    cout << "Enter hours b/w 0 to 24: ";
    cin >> num1;

    cout << "Enter minutes b/w 0 to 60: ";
    cin >> num2;

    clockHour = hours(num1, num2);
    clockMinute = minutes(num2);
    if(num2 + 15 >= 60)
    {
        cout<< "Time is: 0:"<< clockMinute ;
    }
    else
    {
        cout << "Time is: " << clockHour << ":" << clockMinute << endl;
    }
    
}

int hours(int num1, int num2)
{

    if (num1 > 23)
    {
        int h;
        h = num1 = 0;
        return h;
    }
    if (num1 >= 24)
    {
        int h;
        h = num1 + 1;
        return h;
    }
}
int minutes(int num2)
{
    if (num2 < 60)
    {
        int min;

        min = num2 + 15;

        if (min >= 60)
        {

            int minte;
            minte = min - 60;
            return minte;
        }

        return min;
    }
}
