#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    Matrix3f A;
    A<<1,2,3,4,5,6,7,8,9;
    cout<<"Matrix A: "<<endl<<A<<endl;
    cout<<"Determinant of A: "<<endl<<A.determinant()<<endl;
    cout<<"Inverse of A: "<<endl<<A.inverse()<<endl;
    return 0;
}
// Output:- 
// g++ -I /usr/include/eigen3 Q3.cpp -o Q3
// ./Q3
// Matrix A: 
// 1 2 3
// 4 5 6
// 7 8 9
// Determinant of A: 
// 0
// Inverse of A: 
// -inf  inf -inf
//  inf -inf  inf
// -inf  inf -inf