#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXf X(4,3);
    X<<1,1,1,1,2,1,1,1,2,1,2,2;
    MatrixXf Y(4,1);
    Y<<5,7,8,9;
    VectorXf B(3);
    B = ((X.transpose()*X).inverse()*(X.transpose()*Y));
    cout<<"Matrix X: "<<endl<<X<<endl;
    cout<<"Matrix Y: "<<endl<<Y<<endl;
    cout<<"Beta Matrix: "<<endl<<B<<endl;
    return 0;
}
// Output :-
// g++ -I /usr/include/eigen3 Q2.cpp -o Q2
// ./Q2
// Matrix X: 
// 1 1 1
// 1 2 1
// 1 1 2
// 1 2 2
// Matrix Y: 
// 5
// 7
// 8
// 9
// Beta Matrix: 
// 1.24998
//     1.5
//     2.5