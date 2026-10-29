#include<iostream>
using namespace std;
class Box{
    private:
    int h,w,l;
    public:
    void Accept(){
        cout<<"Enter height,weight,length: \n";
        cin>>h>>w>>l;

    }
    void Display(){
        cout<<h<<w<<l<<endl;

    }
     void calculate(){
        int cal=h*w*l;
        cout<<cal<<endl;

     }
};
int main(){
    Box B;
    B.Accept();
    B.Display();
    B.calculate();

    return 0;
}