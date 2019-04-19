#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

int main()
{
    vector<int> ivec(10,1);
    // int input;
    // while(cin>>input)
    //     ivec.push_back(input);
    for(auto i=ivec.begin();i!=ivec.end();++i)
    {
        (*i)=(*i)*2;

        cout<<(*i)<<endl;
    }
    return 0;


    
}