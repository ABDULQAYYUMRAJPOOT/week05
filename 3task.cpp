#include <iostream>
using namespace std;
void symmetrical(int num);
main()
{
    int num;
    cout<<"Enter the five digit number: ";
    cin>> num;
    symmetrical(num);
}

void symmetrical(int num)
{
    int first;
    int second;
    int third;
    int fourth;
    fourth = num%10;
    third = (num/10)%10;
    second = (num/1000)/10;
    first = (num/1000)%10;
    
    if (first == third & second == fourth)
    {
        cout<<"The number is symmetrical.";
    }
    else
    {
        cout<<"The number is non symmetrical.";
    }
    
}