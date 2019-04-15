#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    int val=50;

    for( ;val<=100;val++)
    {
        sum+=val;

    }
    // while(val<=100)
    // {
    //     sum+=val;
    //     val++;
    // }

    cout<<sum<<endl;
    return 0;
}