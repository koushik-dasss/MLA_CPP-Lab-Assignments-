#include<iostream>
#include<Eigen/Dense>
#include<vector>
using namespace std;
using namespace Eigen;
void standardize(MatrixXd &X, VectorXd &mean , VectorXd &stddev){
    int cols = X.cols();
    mean = X.colwise().mean();
    stddev.resize(cols);
    for(int i = 0 ; i<cols;i++){
        stddev(i) = sqrt((X.col(i).array()-mean(i)).square().mean());
        if(stddev(i) == 0){
            stddev(i) = 1; 
        }
    }
    for(int i = 0; i< X.rows(); i++){
        for(int j = 0; j< cols; j++){
            X(i,j) = (X(i,j) - mean(j)) / stddev(j);
        }
    }
}
MatrixXd addBias(MatrixXd X){
    MatrixXd X_bias(X.rows(), X.cols() + 1);
    X_bias.col(0) = VectorXd::Ones(X.rows());
    X_bias.block(0,1,X.rows(),X.cols()) = X;
    return X_bias;
}
int main(){
    MatrixXd X(5,3);
    X << 2,80,70,
         4,85,75,
         6,90,80,
         8,70,65,
         10,100,90;
    VectorXd y(5);
    y << 60,70,80,90,100;
    VectorXd mean,stddev;
    standardize(X,mean,stddev);
    MatrixXd X_bias = addBias(X);
    VectorXd theta = (X_bias.transpose()*X_bias).inverse()*X_bias.transpose()*y;
    cout<<"Theta(Model Parameters):\n"<<theta<<endl;
    MatrixXd X_test(3,3);
    X_test<< 11,82,95,
            12,89,92,
            13,91,98;
    for(int i=0;i<X_test.rows();i++){
        for(int j=0;j<X_test.cols();j++){
            X_test(i,j) = (X_test(i,j) - mean(j)) / stddev(j);
        }
    }
    MatrixXd X_test_bias = addBias(X_test);
    VectorXd predictions = X_test_bias*theta;
    cout<<"\nPredicted Exam Scores:\n";
    cout<<predictions<<endl;
    return 0;
}

// Output :- 
// g++ Q1.cpp -o Q1 -I /usr/include/eigen3

// ./Q1

// Theta(Model Parameters):
//       80
//   18.125
// -5.78125
//     6.25

// Predicted Exam Scores:
//  127.58
// 127.761
// 137.372