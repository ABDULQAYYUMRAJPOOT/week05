#include <iostream>
using namespace std;
void counting(int num);
int main()
{
    int num;
    cout<< "Enter the number: ";
    cin>> num;
    counting(num);
    
}
void counting(int num)
{
    if(num/10 == 1)
    {
        cout<<"Ten";
    }
    if(num/10 == 2)
    {
        cout<<"Twenty ";
    }
    if(num/10 == 3)
    {
        cout<<"Thirty ";
    }
    if(num/10 == 4)
    {
        cout<<"Fourty ";
    }
    if(num/10 == 5)
    {
        cout<<"Fifty ";
    }
    if(num/10 == 6)
    {
        cout<<"Sixty ";
    }
    if(num/10 == 7)
    {
        cout<<"Seventy ";
    }
    if(num/10 == 8)
    {
        cout<<"Eighty ";
    }
    if(num/10 == 9)
    {
        cout<<"Ninety ";
    }



    if (num%10 ==1)
    {
        cout<<" one";
    }
    if (num%10 ==2)
    {
        cout<<" two";
    }
    if (num%10 ==3)
    {
        cout<<" Three";
    }
    if (num%10 ==4)
    {
        cout<<" Four";
    }
    if (num%10 == 5)
    {
        cout<<" Five";
    }
    if (num%10 ==6)
    {
        cout<<" Six";
    }
    if (num%10 ==7)
    {
        cout<<" Seven";
    }
    if (num%10 ==8)
    {
        cout<<" Eight";
    }
    if (num%10 ==9)
    {
        cout<<" Nine";
    }

    
    
}