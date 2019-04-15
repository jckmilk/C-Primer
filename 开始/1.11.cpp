#include<iostream>
using namespace std;

bool compare(int a, int b)
{
    if(a<=b)
    {
    return true;
    }
    else
    {
       return false; /* code */
    }
    
}
void swap(int& a, int& b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
   int v1=0;
   int v2=0;
   cin>>v1>>v2;
   bool flag=compare(v1,v2);
   if(flag==false)
   {
    swap(v1,v2);
   }

   for( ; v1<=v2;v1++)
    cout<<v1<<endl;

//    while(v1<=v2)
//    {
//        cout<<v1<<endl;
//        v1++;
//    }
  return 0;

}