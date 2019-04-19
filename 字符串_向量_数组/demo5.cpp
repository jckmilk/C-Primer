#include<iostream>
using namespace std;

int main()
{
    int i=4;
    const int& j=i;
    int k=6;
    i=k;
    // j=k;
    cout<<i<<endl;
}