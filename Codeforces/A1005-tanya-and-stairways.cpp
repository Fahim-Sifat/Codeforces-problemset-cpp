#include<iostream>
#include<vector>
#include<deque>
 using namespace std;

 int main(){

    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    deque<int> dq;
    for(int i=0;i<n;i++){
        if(i==n-1 || a[i+1]==1){

            dq.push_back(a[i]);
        }
    }

cout<<dq.size()<<endl;
    while(!dq.empty()){
        cout<<dq.front();
        dq.pop_front();
    }

    
    

    return 0;
 }