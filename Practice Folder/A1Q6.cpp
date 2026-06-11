#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    Matrix2f A;
    A<<1,2,3,4;
    Matrix2f B;
    B<<5,6,7,8;
    Matrix2f C = A.cwiseProduct(B);
    Matrix2f D = A.cwiseQuotient(B);
    cout<<endl<<C<<endl;
    cout<<endl<<D<<endl;
    return 0;
}