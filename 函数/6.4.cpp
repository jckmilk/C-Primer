#include<iostream>
using namespace std;

int jiecheng(int val)
{
    int res=1;
    while(val>1)
    {
     res*=val;
     val--;
    }
    return res;
}
int main()
{
    int input=0;
    int result=0;
    cout<<"Please input a interger:"<<endl;
    cin>>input;
    result=jiecheng(input);
    cout<<result<<endl;
    return 0;


}