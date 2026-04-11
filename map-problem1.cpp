#include<iostream>
#include<string>
#include<map>
#include<sstream>
#include<algorithm>

using namespace std;

int main(){

    string text="learning to code is learning to create and innovate";

    map<string,int> wordcount;
    stringstream ss(text);
    string word;

    while(ss>>word){

        wordcount[word]++;
    }


    cout<<"Word frequencies: "<<endl;
    for(auto it=wordcount.begin();it!=wordcount.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }


    return 0;
}