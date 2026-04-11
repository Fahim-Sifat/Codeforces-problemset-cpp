#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
#include<sstream>


using namespace std;

void recursiveFunction(queue <string> & q){

    if(q.empty()){
        return;
    }


    
       string word=q.front();
        q.pop();
    

    recursiveFunction(q);

    
    cout<<word<<endl;

}


int main(){

    string text="Technical Interview Preparation";

   
    stringstream ss(text);
    string word;

   queue<string> q;

   while(ss>>word){
    q.push(word);
   }
   

   cout<<"Reverse of Technical Interview Preparation is: "<<endl;
   recursiveFunction(q);

cout<<endl;
   return 0;

}