#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
#include<sstream>


using namespace std;


int main(){

    priority_queue<int> qu;

    qu.push(34);
       qu.push(44);
          qu.push(54);
             qu.push(64);
                qu.push(84);
                   qu.push(94);

                   qu.pop();
                
                
                while(!qu.empty()){
                   cout<<qu.top();
                    qu.pop();

                    
                }
                cout<<endl;
                return 0;
                }