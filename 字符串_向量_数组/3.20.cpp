#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int input=0;
    vector<int> ivec;
    while(cin>>input)
        ivec.push_back(input);
    // for(decltype(ivec.size()) ix=0;ix!=ivec.size()-1;ix++)
    //     cout<<(ivec[ix]+ivec[ix+1])<<endl;

    for(decltype(ivec.size()) ix=0;ix<(ivec.size()-1)/2+1 ;ix++)
    if(ix!=ivec.size()-ix-1)
        cout<<ivec[ix]+ivec[ivec.size()-ix-1]<<endl;
    else
    {
        cout<<ivec[ix]<<endl;
    }
    // 以下表示中间点的下一个值.
    decltype(ivec.size()) size = ivec.size();
    if (size % 2 != 0)
        size = size / 2 + 1;
    else
        size /= 2;

    

    return 0;




}