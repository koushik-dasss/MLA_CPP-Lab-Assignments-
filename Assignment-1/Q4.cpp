#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    Matrix3f A;
    A<<1,2,3,4,5,6,7,8,9;
    cout<<"Matrix A: "<<endl<<A<<endl;
    cout<<"Transpose of Matrix A: "<<endl<<A.transpose()<<endl;
    cout<<"Trace of Matrix A: "<<endl<<A.trace()<<endl;
    return 0;
}
// Output:-
// g++ -I /usr/include/eigen3 Q4.cpp -o Q4
// ./Q4
// Matrix A: 
// 1 2 3
// 4 5 6
// 7 8 9
// Transpose of Matrix A: 
// 1 4 7
// 2 5 8
// 3 6 9
// Trace of Matrix A: 
// 15