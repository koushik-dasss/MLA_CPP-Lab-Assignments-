// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     MatrixXf X(4,3);
//     X<<1,1,1,1,2,1,1,1,2,1,2,2;
//     MatrixXf Y(4,1);
//     Y<<5,7,8,9;
//     VectorXf B(3);
//     B=((X.transpose()*X).inverse()*(X.transpose()*Y));
//     cout<<endl<<X<<endl;
//     cout<<endl<<Y<<endl;
//     cout<<endl<<B<<endl;
//     return 0;
// }


// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     MatrixXf X(4,3);
//     X<<1,1,1,1,2,1,1,1,2,1,2,2;
//     MatrixXf Y(4,1);
//     Y<<5,7,8,9;
//     VectorXf B(3);
//     B = ((X.transpose()*X).inverse()*(X.transpose()*Y));
//     cout<<"Matrix X: "<<endl<<X<<endl;
//     cout<<"Matrix Y: "<<endl<<Y<<endl;
//     cout<<"Beta Matrix: "<<endl<<B<<endl;
//     return 0;
// }


// 2.2 Write a program to develop a Multiple Linear Regression Model on the given data set.
// x1 x2 y
// 1 1 5
// 2 1 7
// 1 2 8
// 2 2 9
// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     MatrixXd X(4,3);
//     MatrixXd Y(4);
//     VectorXd B(3);
//     X<<1,1,2,1,1,2,2,2;
//     Y<<5,7,8,9;
//     B=((X.transpose()*X).inverse())*(X.transpose()*Y);
//     cout<<X<<endl<<Y<<endl<<B<<endl;
//     return 0;
// }



// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     MatrixXd X(4,3);
//     MatrixXd Y(4);
//     VectorXd B(3);
//     X<<1,1,2,1,1,2,2,2;
//     Y<<5,7,8,9;
//     B=((X.transpose()*X).inverse())*(X.transpose()*Y);
//     cout<<X<<endl<<Y<<endl<<B<<endl;
//     return 0;
// }

// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     MatrixXf X(4,3);
//     MatrixXf Y(4,1);
//     VectorXf B(3);
//     X<<1,1,1,1,2,1,1,1,2,1,2,2;
//     Y<<5,7,8,9;
//     B=((X.transpose()*X).inverse()*(X.transpose()*Y));
//     cout<<X<<endl<<Y<<endl<<B<<endl;
//     return 0;
// }
















#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXd X(4,3);
    MatrixXd Y(4,1);
    VectorXd B(3);
    X<<1,1,1,1,2,1,1,1,2,1,2,2;
    Y<<5,7,8,9;
    B=((X.transpose()*X).inverse()*(X.transpose()*Y));
    cout<<X<<endl<<Y<<endl<<B<<endl;
    return 0;
}