#include<iostream>
#include<string>
#include<set>
#include<algorithm>

using namespace std;

int main(){

    multiset <int> ms={10,20,50,60,40,50,90};

  auto it=ms.find(75);

  if(it!=ms.end()){
    cout<<*it<<endl;
  }
  else{
    cout<<"value not found";
  }


  return 0;
}