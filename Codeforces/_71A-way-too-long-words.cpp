#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
    string s;
    cin>>s;
    int len=s.length();
    

    if(len>10){
         stack<char> st;
        char first=s[0];

        for(int i=1;i<len;i++){
          
           st.push(s[i]);

        }
        char last=st.top();
        int middleCount=st.size()-1;

        cout<<first<<middleCount<<last<<endl;
    }
    else{
        cout<<s<<endl;
    }
    
    
}
return 0;
}