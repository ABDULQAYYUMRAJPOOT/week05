#include <iostream>
using namespace std;
float taxAmount(float price, char type);
float final(float price);
char type;
main()
{
    float price;
    float result;
    cout<< "Enter original price of vehicle: ";
    cin>> price;
    cout<<"Enter the type of vehicle: ";
    cin>> type;
    result = final(price);
    cout<< "Final amount is: "<< result;
    
}

float taxAmount(float price, char type)
{
    float tax;
    if (type == 'M')
    {
        tax = (price * 6) / 100;
        return tax;
    }
    if (type == 'E')
    {
        tax = (price * 8) / 100;
        return tax;
    }
    if (type == 'S')
    {
        tax = (price * 10) / 100;
        return tax;
    }
    if (type == 'V')
    {
        tax = (price * 12) / 100;
        return tax;
    }
    if (type == 'T')
    {
        tax = (price * 15) / 100;
        return tax;
    }
}

float final(float price)
{
    float finalAmount;
    finalAmount = taxAmount(price,type) + price;
    return finalAmount;

}