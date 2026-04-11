#include<iostream>
#include<string>
#include<algorithm>

using namespace std;



    string removeDuplicates(string str){

        string result="";

        for(char c:str){
            if(!result.empty()&&result.back()==c){
                result.pop_back();
            }
            else{
                result.push_back(c);
                       
            }
            
        }
        return result.empty()? "String is empty":result;
    }

int main(){

    string input1="azxxzy";

    cout<<"Input1 is: "<<input1<<endl;
    cout<<"Output of input1 is: "<<removeDuplicates(input1)<<endl;


    string input2="aaccdd";
     cout<<"Input2 is: "<<input2<<endl;
    cout<<"Output of input2 is: "<<removeDuplicates(input2)<<endl;


    return 0;
}
