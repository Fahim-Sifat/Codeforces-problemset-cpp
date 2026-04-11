#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    set<int> num={25,35,55,60,95};


    cout<<*num.lower_bound(25)<<endl;
    cout<<*num.lower_bound(40)<<endl;
    cout<<*num.lower_bound(65)<<endl;
   cout<<*num.upper_bound(60)<<endl;
  


   auto it=num.upper_bound(99);
   

   if(it!=num.end()){
    cout<<*it<<endl;
   }
   else{
    cout<<"No upper bound found..."<<endl;
   }


   auto itt=num.lower_bound(94);

   if(itt!=num.end()){
     cout<<*itt<<endl;
   }
    else{
    cout<<"No lower bound found..."<<endl;
   }


    return 0;


}