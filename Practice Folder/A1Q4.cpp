#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    Matrix3f A;
    A<<1,2,3,4,5,6,7,8,9;
    cout<<A.transpose()<<endl;
    cout<<A.trace()<<endl;
    return 0;
}