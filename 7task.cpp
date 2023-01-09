#include <iostream>
using namespace std;
float pool(float v, float p1, float p2);
float pipe1( float p1,float v, float total);
float pipe2(float p2, float v, float total) ;

float time;
main()
{
    float v;
    float p1;
    float p2;
    float water;
    float p1Prcnt;
    float p2Prcnt;


    cout<< "Enter volume from 1 to 10000 liters: ";
    cin>> v;
    cout<<"Enter flow rate of first pipe: ";
    cin>> p1;
    cout<< "Enter flow rate of second pipe: ";
    cin>> p2;
    cout<< "Enter time: ";
    cin>>time;
    water = pool(v,p1,p2);
    p1Prcnt = pipe1(p1,water,v);
    p2Prcnt = pipe2(p2, water,v);
    if (water < 100)
    {
        cout<<"The pool is "<<water<<"%"<<"full, Pipe 1: "<< p1Prcnt<<"%. "<<"Pipe 2: "<<p2Prcnt<<"%";
    }
    if(water > 100)
    {
        cout<<"For "<< time <<" hours pool overflows with " << water <<" liters.";
    }
    


}

float pool(float v, float p1 , float p2)
{
    float totalFlow;
    float fillPool;
    totalFlow = p1 + p2;
    fillPool = ((totalFlow/v)*100)*time;
    if(fillPool < 100)
    {
        return fillPool;
    }    
    if(fillPool> 100)
    {
        float over;
        over = ((p1 + p2)*time)-v;
        return over;
        
    }
}
float pipe1(float p1, float v, float total)
{
    float vol = (v/100)*total;
    float pip1;
    pip1 = ((p1 * time)/vol)*100;
    return pip1;
}
float pipe2( float p2, float v, float total)
{   
    float vol = (v/100)*total;
    float pip2;
    pip2 = ((p2 * time)/vol)*100;
    return pip2;
}






