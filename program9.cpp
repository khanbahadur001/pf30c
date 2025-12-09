#include<iostream>
using namespace std;
int main()
{
    int a=10,b=25,c=18,d=32,max;
     
    max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;
     
    cout<<"Maximum number is: "<<max<<endl;
     
    return 0;
}