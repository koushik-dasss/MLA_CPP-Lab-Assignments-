#include<iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    Matrix2f A;
    A<<10,12,16,8;
    Matrix2f B;
    B<<2,4,8,3;
    cout<<"Matrix A: "<<endl<<A<<endl;
    cout<<"Matrix B: "<<endl<<B<<endl;
    Matrix2f C = A.cwiseProduct(B);
    cout<<"Element wise matrix multiplication: "<<endl<<C<<endl;
    Matrix2f D = A.cwiseQuotient(B);
    cout<<"Element wise matrix divison: "<<endl<<D<<endl;
    return 0;
}
// Output :-
//  g++ -I /usr/include/eigen3 Q6.cpp -o Q6 
// ./Q6
// Matrix A: 
// 10 12
// 16  8
// Matrix B: 
// 2 4
// 8 3
// Element wise matrix multiplication: 
//  20  48
// 128  24
// Element wise matrix divison: 
//       5       3
//       2 2.66667