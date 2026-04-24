#include<iostream>

using namespace std;


void solve(){
    long long x,y;
    cin>>x>>y;

    if(y==2*x){
        cout<<"NO"<<endl;

    }
    else{
        cout<<"YES"<<endl;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;


    while(t--){
        solve();
    }

    return 0;

}























/*A. A Number Between Two Others
time limit per test2 seconds
memory limit per test512 megabytes
You are given two integers x
 and y
 such that y>x
 and ymodx=0
 (that is, y
 is divisible by x
).

Your task is to determine whether there exists an integer z
 such that

z
 lies between x
 and y
 (that is, x<z<y
);
z
 is divisible by x
 (that is, zmodx=0
);
y
 is not divisible by z
 (that is, ymodz≠0
).
Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

Each test case consists of a single line containing two integers x
 and y
 (1≤x<y≤1018
; ymodx=0
).

Output
For each test case, print the answer as follows: if the required number z
 exists, print YES; otherwise, print NO. You may print each letter in any case.

Example
InputCopy
5
1 2
1 3
1234567890 12345678900
2 8
7 84
OutputCopy
NO
YES
YES
YES
YES
Note
In the second test case of the example, you can use z=2
.

In the third test case of the example, you can use z=7407407340
.


*/