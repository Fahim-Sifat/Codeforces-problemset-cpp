#include<iostream>
#include<string>
#include<vector>
#include<queue>

using namespace std;



int main(){
    int n;
    cin>>n;

    vector<string> grid(n);
    for(int i=0;i<n;i++) cin>>grid[i];

    priority_queue <pair<int,int>> pq;
   
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                pq.push({i,j});
            }
        }
 int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};

 while(!pq.empty()){
        pair<int,int> current=pq.top();
        pq.pop();
        int r=current.first;
        int c=current.second;
        int count_o=0;

      
        for(int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
        


        if(nr>=0 && nr<n && nc>=0 && nc<n){
            
            if(grid[nr][nc]=='o'){
                count_o++;
            }
        }
    }
 

 if(count_o%2!=0){
    cout<<"NO"<<endl;
    return 0;
 }
}
 
    cout<<"YES";
     return 0;
 

}




/*
 Appleman and Easy Task

Toastman came up with a very easy task. He gives it to Appleman, but Appleman doesn't know how to solve it. Can you help him?

Given a n × n checkerboard. Each cell of the board has either character 'x', or character 'o'. Is it true that each cell of the board has even number of adjacent cells with 'o'? Two cells of the board are adjacent if they share a side.

Input
The first line contains an integer n (1 ≤ n ≤ 100). Then n lines follow containing the description of the checkerboard. Each of them contains n characters (either 'x' or 'o') without spaces.

Output
Print "YES" or "NO" (without the quotes) depending on the answer to the problem.

Examples
InputCopy
3
xxo
xox
oxx
OutputCopy
YES
InputCopy
4
xxxo
xoxo
oxox
xxxx
OutputCopy
NO
*/