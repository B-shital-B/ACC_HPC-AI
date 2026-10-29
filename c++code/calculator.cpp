#include<iostream>
using namespace std;
namespace calculator 
{
void add(int a,int b)
{
cout<<a<<"\n"<<b<<a+b<<endl;
     }

    void sub(int a,int b){
        cout<<a<<"\n"<<b<<a-b<<endl;
    }

    void mul(int a,int b){
        cout<<a<<"\n"<<b<<a*b<<endl;
    }

    void divide(float a,float b){
        cout<<a<<"\n"<<b<<a/b<<endl;
    }

}
int main(){
    int choice,num1,num2;
    cout<<"_____choice______";
    cout<<"1.addition:\n";
    cout<<"2.subtraction:\n";
    cout<<"3.multiplcation:\n";
    cout<<"4.division:\n";
    cout<<"5.Exit\n";
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    cout<<"Enter 2 no:\n";
    cin>>num1>>num2;
    switch(choice)
    {
        case 1:
        cout<<num1+num2;
        break;

        case 2:
        cout<<num1-num2;
        break;

        case 3:
        cout<<num1*num2;
        break;

        case 4:
        cout<<num1/num2;
        break;

        default:
        cout<<"Exit";
    }
    return 0;

}
