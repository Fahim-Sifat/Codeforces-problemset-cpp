#include<iostream>
#include<stack>
#include<string>
#include<sstream>


using namespace std;



    void line(string str){
        stack<string> s;
        stringstream ss(str);

        string word;

        while(ss>>word){
            s.push(word);
            cout<< word<<endl;
        }

        while(!s.empty()){
            cout<<s.top();
            s.pop();
        if(!s.empty())
        cout<<" "<<endl;
        }

    }

        int main(){

           

            string input= "Technical Interview Preparation";
            line(input);

            return 0;
        }
        


    
