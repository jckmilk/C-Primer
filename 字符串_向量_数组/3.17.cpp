#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    vector<string> words;
    string word;
    while(cin>>word)
    words.push_back(word);
    for(decltype(words.size()) ix=0;ix<words.size();ix++)
    {
        for(auto &x: words[ix])
        {
            x=toupper(x);
        }
    }
    for(decltype(words.size()) ix=0;ix<words.size();ix++)
    {
        cout<<words[ix]<<endl;
    }
    return 0;



}
