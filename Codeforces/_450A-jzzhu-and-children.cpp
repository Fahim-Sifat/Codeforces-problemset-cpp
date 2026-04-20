#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;


    int last_child=1;
    double max_round=0;

    for(int i=1;i<=n;i++){
        int a;
        cin>>a;


    
    double round=ceil((double)a/m);

    if(round>=max_round){
        max_round=round;
        last_child=i;
    }
    }
    cout<<last_child<<endl;

    return 0;
}