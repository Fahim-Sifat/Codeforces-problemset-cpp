#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){

    string s;
    cin>>s;

    stack<char>st;
    for(char c:s){
        if(!st.empty() && st.top()==c){
            st.pop();
        }
        else{
            st.push(c);
        }

    }

    if(st.empty()){
        cout<<"Yes"<<endl;
    }
    else{cout<<"No";}

    return 0;
}