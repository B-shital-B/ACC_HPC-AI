#include<iostream>
using namespace std;
namespace Math
{
    int square(int n){
        return n*n;
    }

}
int main(){
    int num;
    cout<<"Enter num:\n";
    cin>>num;
    cout<<"Square="<<Math::square(num);
    return 0;
} 
