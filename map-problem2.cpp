#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

int main(){

  vector<pair<string, int>> records = {
        {"Student1", 90},
        {"Student2", 80},
        {"Student2", 85},
        {"Student3", 95},
        {"Student4", 99},
        {"Student5", 91},
        {"Student5", 20}
    };



               map<string,int> highestmarks;
               for(const auto &record:records){

               string Name=record.first;
               int score=record.second;
                highestmarks[Name]=max(highestmarks[Name],score);
               }

               for(const auto &[Name,score]:highestmarks){

                cout<<"Name: "<<Name<<" "<<"Score: "<<Score<<endl;
               }


               return 0;

}