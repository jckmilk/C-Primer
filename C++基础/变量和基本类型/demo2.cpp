#include<iostream>
using namespace std;

int main()
{
    int a=10,d=10;
    int& b=a, c=d;
    int* p=&a, p2=a;
    int &e= *p;
    cout<<*p<<endl;
    cout<<e<<endl;



    return 0;
}