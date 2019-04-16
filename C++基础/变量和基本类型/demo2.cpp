#include<iostream>
using namespace std;

int main()
{
    int a=10,d=10;
    int& b=a, c=d;
    int* p=&a, p2=a;
    int &e= *p;
    const int &f = 42;
    double pi = 3.14159;
    const double *const pip = &pi;
    cout<<*p<<endl;
    cout<<e<<endl;



    return 0;
}