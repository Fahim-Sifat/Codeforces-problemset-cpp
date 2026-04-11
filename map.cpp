#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int main(){

    map<string,int> teams;

    teams.insert({"Brazil",5});
    teams["Argentina"]=3;
    teams.insert(make_pair("Germany",4));


    for(auto wc:teams){
        cout<<wc.first<<" won "<<wc.second<<" World cups. "<<endl;
    }


    return 0;
}