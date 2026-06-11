#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXf A(2,2);
    A<<3,5,6,8;
    cout<<"Matrix A: "<<endl<<A<<endl;
    Matrix2f B;
    B<<1,2,3,4;
    cout<<"Matrix B: "<<endl<<B<<endl;
    cout<<"Addition: "<<endl<<A+B<<endl;
    cout<<"Subtraction: "<<endl<<A-B<<endl;
    cout<<"Mul "<<endl<<A*B<<endl;
    cout<<"Div "<<endl<<A*B.inverse()<<endl;
    return 0;
}