#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    Matrix2f A;
    A<<1,2,3,4;
    cout<<"Matrix A: "<<endl<<A<<endl;
    Matrix2f B;
    B<<5,6,7,8;
    cout<<"Matrix B: "<<endl<<B<<endl;
    cout<<"Matrix Addition: "<<endl<<A+B<<endl;
    cout<<"Matrix Subtraction: "<<endl<<A-B<<endl;
    cout<<"Matrix Multiplication: "<<endl<<A*B<<endl;
    cout<<"Matrix Division: "<<endl<<A*B.inverse()<<endl;
    return 0;
}