#include<iostream>
using namespace std;
class complex
{
    private:
    int rel , img ;
    public:
    void Accept(){
        cout<<"Enter real number: ";
        cin>>rel;
        cout<<"Enter img number: ";
        cin>>img;

    }
    void display(){
        cout<<"Complex Number: "<<rel<<"+"<<img<<"i"<<endl;

    }
    void complexnumber(complex C1,complex C2){
        rel = C1.rel + C2.rel;
        img = C1.img + C2.img;
         
       
      
    }  

};

int main()
{
    complex C1,C2,C3;
    C1.Accept();
    C2.Accept();
    C3.complexnumber(C1,C2);
    C1.display();
    C2.display();
    C3.display();
    
    return 0;
}