#include<iostream>
#include<set>
#include<string>

using namespace std;
int main(){

    int n;
    cin>>n;

    set<int> passed_levels;

    int p,levels;
    cin>>p;

    for(int i=0;i<p;i++){

        cin>>levels;
        passed_levels.insert(levels);
    }

    int q;
    cin>>q;

    for(int i=0;i<q;i++){
        cin>>levels;
        passed_levels.insert(levels);
    }


    if(passed_levels.size()==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}