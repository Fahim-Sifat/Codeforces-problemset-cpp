#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    map<string,int> pricemap;

    pricemap["Mango"]=70;
    pricemap.insert({"avocado",80});

    pricemap.insert(make_pair("Melon",90));


    for(auto price:pricemap){
        cout<<price.first<<" "<<price.second<<endl;
    }


    for(auto itr=pricemap.begin();itr!=pricemap.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
return 0;
}