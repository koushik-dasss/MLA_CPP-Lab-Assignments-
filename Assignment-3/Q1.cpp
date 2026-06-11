#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXd X(5,2);
    X<<1,2,2,3,3,1,6,5,7,6;
    VectorXd Y(5);
    Y<<0,0,0,1,1;
    VectorXd P(2);
    P<<4,3;
    int k = 3 ;
    MatrixXd neighbor(5,2);
    int n = X.rows();
    for(int i=0 ; i<n ; i++){
        double dist = (X.row(i).transpose() - P).norm();
        neighbor(i,0) = dist;
        neighbor(i,1) = Y(i);
    }
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ;j++){
            if(neighbor(i,0) > neighbor(j,0)){
                neighbor.row(i).swap(neighbor.row(j));
            }
        }
    }
    int countzero = 0;
    int countone = 0;
    for(int i=0 ; i<k ;i++){
        if(neighbor(i,1) == 0){
            countzero++;
        }else{
            countone++;
        }
    }
    int p = (countone > countzero)?1:0;
    cout<<"The predicted class of the data point P(4,3) is class "<<p<<endl;
    return 0;
}
// Output :- 
//  g++ -I /usr/include/eigen3 Q1.cpp -o Q1
//  ./Q1
// The predicted class of the data point P(4,3) is class 0