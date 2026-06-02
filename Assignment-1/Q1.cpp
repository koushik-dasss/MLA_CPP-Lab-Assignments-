#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXf A(5);
    A<<1,2,3,4,5;
    cout<<"Vector A: "<<endl<<A<<endl;
    Matrix2f B;
    B<<1,2,3,4;
    cout<<"Square Matrix B: "<<endl<<B<<endl;
    Matrix<float,2,3>C;
    C<<1,2,3,4,5,6;
    cout<<"Rectangular Matrix C: "<<endl<<C<<endl;
    return 0;
}
//  Output :- 
// g++ -I /usr/include/eigen3 Q1.cpp -o  Q1
// ./Q1
// Vector A: 
// 1
// 2
// 3
// 4
// 5
// Square Matrix B: 
// 1 2
// 3 4
// Rectangular Matrix C: 
// 1 2 3
// 4 5 6