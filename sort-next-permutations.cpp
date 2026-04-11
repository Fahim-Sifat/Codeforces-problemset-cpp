#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s="asdf";

    cout<<"Sorted: "<<endl;
   sort(s.begin(),s.end());
    cout<<s<<endl;


    cout<<"Permutations: "<<endl;

    string t(s);

    do{
     next_permutation(s.begin(),s.end());
     cout<<s<<endl;
    }
    while(s!=t);

   


    return 0;
}