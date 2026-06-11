// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     MatrixXd X(4,3);
//     X<<1,1,3,1,2,2,1,3,1,1,4,3;
//     MatrixXd Y(4,1);
//     Y<<11,12,13,20;
//     VectorXd B(3);
//     B=((X.transpose()*X).inverse()*(X.transpose()*Y));
//     cout<<B<<endl;
//     return 0;
// }
#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXd X(3,2);
    X<<1,2,3,4,5,6;
    MatrixXd Y(3,1);
    Y<<5,7,8;
    VectorXd B(3);
    B = ((X.transpose()*X).inverse()*(X.transpose()*Y));
    cout<<X<<endl<<Y<<endl<<B<<endl;
    return 0;
}