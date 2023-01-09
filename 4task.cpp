#include <iostream>
using namespace std;
void oddEven(int num);
main()
{
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    oddEven(num);
}

void oddEven(int num)
{
    int five;
    int fourth;
    int third;
    int second;
    int first;
    int add;

    five = num%10;
    fourth = (num/10)%10;
    third = (num/100)%10;
    second = (num/1000)%10;
    first = (num/10000);

    add = first + second + third + fourth + five;
    if(add%2 == 1)
    {
        cout<<"Number you entered is oddish.";
    }
    else
    {
        cout<< "Number you entered is evenish.";
    }

}