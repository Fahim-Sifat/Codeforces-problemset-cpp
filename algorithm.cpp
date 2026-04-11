#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> numbers(6);

    numbers.push_back(50);
    numbers.push_back(70);
    numbers.push_back(80);
    numbers.push_back(90);
    numbers.push_back(50);


   int  i=50;
    cout<<i<<" appears "<<count(numbers.begin(),numbers.end(),i)<<" times in the vector..."<<endl;

     i=85;
     cout<<i<<" appears "<<count(numbers.begin(),numbers.end(),i)<<" times in the vector..."<<endl;
}