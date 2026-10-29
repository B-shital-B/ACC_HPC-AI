#include<iostream>
using namespace std;
inline int Square(int x){
    return x*x;
}
int main()
{
    int x;
    cout<<"Enter num:";
    cin>>x;
    int square=Square(x);
    cout<<"Square of num:"<<square;
}