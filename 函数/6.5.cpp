#include<iostream>
using namespace std;

//use template to extend other type

int abs(int val)
{
    if(val>=0)
        return val;
    else
    {
        return -val;
    }
    
}

int main()
{
    int input=0;
    int result=0;

    cin>>input;
    result=abs(input);
    cout<<result<<endl;

    return 0;

    

}