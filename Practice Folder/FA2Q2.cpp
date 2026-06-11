// 2.2 Write a program to develop a Multiple Linear Regression Model on the given data set.
// x1
// 1
// 2
// 1
// 2
// x2
// 1
// 1
// 2
// 2
// y
// 5
// 7
// 8
// 9
#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXd X(4,3);
    X<<1,1,1,1,2,1,1,1,2,1,2,2;
    MatrixXd Y(4,1);
    Y<<5,7,8,9;
    VectorXd B(3);
    B = ((X.transpose()*X).inverse()*(X.transpose()*Y));
    cout<<"Matrix X: "<<endl<<X<<endl;
    cout<<"Matrix Y: "<<endl<<Y<<endl;
    cout<<"Beta Matrix: "<<endl<<B<<endl;
    return 0;
}