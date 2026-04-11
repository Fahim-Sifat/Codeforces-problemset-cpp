#include<iostream>
#include<queue>


using namespace std;

int main(){

priority_queue<int> qu;
 qu.push(39);
       qu.push(49);
          qu.push(59);
             qu.push(69);
                qu.push(89);
                   qu.push(99);


while(!qu.empty()){
    cout<<qu.top();
    qu.pop();
}

return 0;



}