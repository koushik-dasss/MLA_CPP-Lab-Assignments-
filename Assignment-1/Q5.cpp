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
// Output:- 
// g++ -I /usr/include/eigen3 Q5.cpp -o Q5 
// ./Q5
// Matrix A: 
// 1 2
// 3 4
// Matrix B: 
// 5 6
// 7 8
// Matrix Addition: 
//  6  8
// 10 12
// Matrix Subtraction: 
// -4 -4
// -4 -4
// Matrix Multiplication: 
// 19 22
// 43 50
// Matrix Division: 
//  3 -2
//  2 -1