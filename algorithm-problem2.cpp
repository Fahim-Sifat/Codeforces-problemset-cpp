#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>

using namespace std;

double getDotProduct(vector<double>v1,vector<double>v2){

    double dotProduct=0;
    for(int i=0;i<v1.size();i++){
        dotProduct+=v1[i]*v2[i];   
    }
    return dotProduct;
}


double magnitude(vector<double>v){

    double sum=0;
    for(int i=0;i<v.size();i++){
        sum+=pow((v[i]),2);
    }
    return sqrt(sum);
}


int main(){

    vector<double> v1={1,1,1,1,1,0,0};
    vector<double> v2={0,0,1,1,0,1,1};

    double similarity= getDotProduct(v1,v2)/(magnitude(v1)*magnitude(v2));


    double radAngle=acos(similarity);
    double radDegree=radAngle*(180/M_PI);



    cout<<setprecision(5)<<endl;
    cout<<"-----------Results-----------"<<endl;
    cout<<"The similarity of two vectors are: "<<similarity<<endl;
    cout<<"Magnitude of vector1 is: "<<magnitude(v1)<<endl;
        cout<<"Magnitude of vector2 is: "<<magnitude(v2)<<endl;
        cout<<"Angle in radian is: "<<radAngle<<endl;
        cout<<setprecision(4)<<endl;
        cout<<"angle in degree is: "<<radDegree<<endl;



        return 0;
}