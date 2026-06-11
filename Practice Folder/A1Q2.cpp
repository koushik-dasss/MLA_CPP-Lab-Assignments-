// Write a program to create a zero matrix, identity matrix and a matrix with random elements.
#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    cout<<"Matrix with zero elements: "<<endl<<Matrix3f::Zero()<<endl;
    cout<<"Matrix with identity elements: "<<endl<<Matrix3f::Identity()<<endl;
    cout<<"Matrix with random elements: "<<endl<<Matrix3f::Random()<<endl;
    return 0;
}