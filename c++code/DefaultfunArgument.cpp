#include<iostream>
using namespace std;
void Simple(double P,float T,float R=8)
{
    cout<<"Simple Interest: "<<(P*R*T)/100;
    
   
    
}
int main()
{
    Simple(10,20);
    cout<<endl;
    Simple(5000,3,12);
    return 0;
}