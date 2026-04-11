#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    set<string> fruits;


    fruits.insert("banana");
    fruits.insert("mango");
    fruits.insert("berry");
    fruits.insert("apple");
    fruits.insert("orange");


    fruits.erase("orange");

    for(string i:fruits){
        cout<<i<<endl;
    }
 
      
        cout<<"First element of the set is:"<<*fruits.begin()<<endl;
        

         cout<<"Last element of the set is: ";
        if(!fruits.empty()){
            auto it=fruits.end();
            --it;

            cout<<*it<<endl;
        }


        cout<<"Last:";
        cout<<*fruits.rbegin()<<endl;

        cout<<"first:";
  if(!fruits.empty()){
            auto it=fruits.rend();
            --it;

            cout<<*it<<endl;
        }
        

        cout<<"Size of the set is:"<< fruits.size()<<endl;
         cout<<"maximum Size of the set is:"<< fruits.max_size()<<endl;
        
         cout<<"Banana present?";
         if(fruits.count("banana"))
         {
            cout<<"true";
        }
        else{
            cout<<"false";
        }

        cout<<endl;
        


        
}