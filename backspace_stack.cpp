#include<iostream>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

string getFinalString(string s){

    stack<char> st;

    for(char ch: s){
        if(ch=='#'){
            if(!st.empty()){
            st.pop();
        }}
        else{
            st.push(ch);
        }
    }
        string result="";
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }

        reverse(result.begin(),result.end());
        return result;

}

int main(){

    string s1,s2;

    cout<<"Enter s1: "<<endl;
    cin>>s1;
    cout<<"Enter s2: "<<endl;
    cin>>s2;


    if(getFinalString(s1)== getFinalString(s2)){
        cout<<"True";
    }
    else{
        cout<<"false";
    }

  return 0;
}