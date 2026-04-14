#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;
int main(){
int k;
string s;
cin>>k>>s;

map<char,int> frequency;

for(char c:s){

    frequency[c]++;
}

string pattern="";
for(auto it=frequency.begin();it!=frequency.end();it++){
    char ch=it->first;
    int count=it->second;




    if(count%k!=0){
        cout<<-1<<endl;
        return 0;
    }





int times=count/k;
for(int i=0;i<times;i++){

     pattern+=ch;
}
}


string result="";
for(int i=0;i<k;i++)
{
     result+=pattern;
}


cout<<result<<endl;

return 0;
}