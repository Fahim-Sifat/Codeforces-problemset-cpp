#include<iostream>
#include<string>
#include<list>
 
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;

    int count=0;
    list<int> ans;
    for(char c:s){
        if(c=='B'){
          count++;
        }
        else{

            if(count>0){
            ans.push_back(count);
            count=0;
            }
        }
    }
    if(count>0){
        ans.push_back(count);
    }

    cout<<ans.size()<<endl;
    for(auto it=ans.begin();it!=ans.end();it++){
        if(it!=ans.begin()){
            cout<<" ";
        }
        cout<<*it;
    }
    cout<<endl;

    return 0;
}












































































/*A. One-dimensional Japanese Crossword

Recently Adaltik discovered japanese crosswords. Japanese crossword is a picture, represented as a table sized a × b squares, and each square is colored white or black. There are integers to the left of the rows and to the top of the columns, encrypting the corresponding row or column. The number of integers represents how many groups of black squares there are in corresponding row or column, and the integers themselves represents the number of consecutive black squares in corresponding group (you can find more detailed explanation in Wikipedia https://en.wikipedia.org/wiki/Japanese_crossword).

Adaltik decided that the general case of japanese crossword is too complicated and drew a row consisting of n squares (e.g. japanese crossword sized 1 × n), which he wants to encrypt in the same way as in japanese crossword.

The example of encrypting of a single row of japanese crossword.
Help Adaltik find the numbers encrypting the row he drew.

Input
The first line of the input contains a single integer n (1 ≤ n ≤ 100) — the length of the row. The second line of the input contains a single string consisting of n characters 'B' or 'W', ('B' corresponds to black square, 'W' — to white square in the row that Adaltik drew).

Output
The first line should contain a single integer k — the number of integers encrypting the row, e.g. the number of groups of black squares in the row.

The second line should contain k integers, encrypting the row, e.g. corresponding to sizes of groups of consecutive black squares in the order from left to right.

Examples
InputCopy
3
BBW
OutputCopy
1
2 
InputCopy
5
BWBWB
OutputCopy
3
1 1 1 
InputCopy
4
WWWW
OutputCopy
0
InputCopy
4
BBBB
OutputCopy
1
4 
InputCopy
13
WBBBBWWBWBBBW
OutputCopy
3
4 1 3 
Note
The last sample case correspond to the picture in the statement.


*/