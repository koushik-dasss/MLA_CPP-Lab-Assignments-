#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXf X(4,3);
    MatrixXf Y(4,1);
    X<<1,1,2,1,2,1,1,2,2,1,1,1;
    Y<<5,7,8,9;
    VectorXf B(3,1);
    B = ((X.transpose()*X).inverse()*(X.transpose()*Y));
    cout<<B<<endl;
    return 0;
}