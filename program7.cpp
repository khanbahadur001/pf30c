#include<iostream>
using namespace std;
int main()
{
    int rollNo=101;
    float pf=85,ic=78,cg=92,total,avg;
    total=pf+ic+cg;
    avg=total/3;
        cout<<"Enter Roll No: 101"<<endl;
    cout<<"Enter marks in Programming Fundamentals: 85"<<endl;
    cout<<"Enter marks in Introduction to Computing: 78"<<endl;
    cout<<"Enter marks in Computer Graphics: 92"<<endl<<endl;
    cout<<"Roll No: "<<rollNo<<endl;
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Average: "<<avg<<endl;
     
    return 0;
}