#include<iostream>
using namespace std;
int main()
{

    int sub , *marks,sum=0;
    float avg;
    cout<<"Enter no of Subjects:\n";
    cin>>sub;
    marks=new int[sub];
    cout<<"Enter"<<sub<<"\n marks:"<<endl;
    for(int i=0;i<sub;i++){
        cin>>marks[i];
        sum +=marks[i];
    }
    avg = (float)sum/sub;
    cout<<"\n Sum: "<<sum;
    cout<<" Avg: "<<avg;

    delete[] marks;
}