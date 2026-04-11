#include<iostream>
#include<fstream>
#include<string>
#include<map>

using namespace std;

int main(){

    map<int,double> MasterData;
    int accNo;
    double amount;

    ifstream oldMast("oldMast.txt");

    if(!oldMast){
        cerr<<"oldMast.txt file not found";
        return 1;
    }

    while(oldMast>>accNo>>amount){
        MasterData[accNo]+=amount;
    }
    oldMast.close();


    ifstream transaction("transaction.txt");
    ofstream logFile("logfile.txt");


    if(!transaction){
        cerr<<"Transaction.txt file not found";
        return 1;
    }


    map<int,bool> transApplied;

    while(transaction>>accNo>>amount){
        if(MasterData.find(accNo)!=MasterData.end()){
            MasterData[accNo]+=amount;
        }
        else{
            logFile<<"Transaction of account number "<<accNo<<" cannot be processed"<<endl;
        }
    }

    transaction.close();
    logFile.close();

    ofstream newMast("newMast.txt");

    for(auto const& x:MasterData){
        newMast<<x.first<<" "<<x.second<<endl;
    }

    newMast.close();




    cout<<"Transaction is successful!"<<endl;
    cout<<"Check newMast text file...."<<endl;

    return 0;


}