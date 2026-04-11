#include<iostream>
#include<stack>
#include<string>
#include<sstream>


using namespace std;

int main(){

    string str="csecu";

    stack<char> s;

    for(int i=0;i<=str.size();i++){
        
        s.push(str[i]);
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();

        cout<<endl;
    }





}