#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

int main()
{
    vector<string> words;
    string word;
    while(cin>>word)
        words.push_back(word);
//输入一行
// vector<string> text;
// for (string line; getline(cin, line);) text.push_back(line);
    for(auto i=words.begin();i!=words.end() && !i->empty();++i)
    {
        for(auto &x:(*i))
        {
            x=toupper(x);
        }

        cout<<(*i)<<endl;
    }
    return 0;


    
}