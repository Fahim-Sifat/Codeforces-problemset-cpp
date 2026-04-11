#include<iostream>
#include<cmath>
#include<vector>


using namespace std;

double cosineSimilarity(vector<double>A,vector<double> B){

    double dotProduct=0.0,normA=0.0,normB=0.0;


    for(int i=0;i<A.size();i++){
         dotProduct+=A[i]*B[i];
         normA+=A[i]*A[i];
         normB+=B[i]*B[i];
    }
      return dotProduct=dotProduct/(sqrt(normA)*sqrt(normB));

}


int main(){
    vector <double>A={5.0,2.0};
    vector <double> B={2.0,5.0};

    double similarity=cosineSimilarity(A,B);


    cout<<"Cosine similarity of vector A and Vector B is: "<<similarity<<endl;


    return 0;
}