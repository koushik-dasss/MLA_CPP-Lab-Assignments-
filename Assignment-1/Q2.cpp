#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    cout<<"Zero Matrix: "<<endl<<Matrix3f::Zero()<<endl;
    cout<<"Identity Matrix: "<<endl<<Matrix3f::Identity()<<endl;
    cout<<"Matrix with random elements: "<<endl<<Matrix2f::Random()<<endl;
    return 0;
}
// Output :-
// g++ -I /usr/include/eigen3 Q2.cpp -o  Q2
// ./Q2
// Zero Matrix: 
// 0 0 0
// 0 0 0
// 0 0 0
// Identity Matrix: 
// 1 0 0
// 0 1 0
// 0 0 1
// Matrix with random elements: 
//  0.680375  0.566198
// -0.211234   0.59688