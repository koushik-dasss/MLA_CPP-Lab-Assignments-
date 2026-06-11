// // 2.1 Write a program to develop a Simple Linear Regression Model on the given data set.
// // x
// // 1
// // 2
// // 3
// // 4
// // 5
// // y
// // 2
// // 4
// // 5
// // 4
// // 5
// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     VectorXf X(5);
//     X<<1,2,3,4,5;
//     VectorXf Y(5);
//     Y<<2,4,5,4,5;
//     int n = X.size();
//     cout<<"Input Data: "<<endl<<X<<endl;
//     cout<<"Output Data: "<<endl<<Y<<endl;
//     cout<<"No. of samples: "<<endl<<n<<endl;
//     VectorXf XX = X.array() - X.mean();
//     VectorXf YY = Y.array() - Y.mean();
//     double num_sum = XX.dot(YY);
//     double den_sum = XX.dot(XX);
//     double slope = num_sum/den_sum;
//     double intercept = Y.mean() - (slope*X.mean());
//     cout<<"Slope: "<<slope<<endl;
//     cout<<"Intercept: "<<intercept<<endl;
//     return 0;
// }
#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXf X(5);
    VectorXf Y(5);
    X<<1,2,3,4,5;
    Y<<2,4,5,4,5;
    int n = X.size();
    cout<<"Input Data: "<<endl<<X<<endl;
    cout<<"Output Data: "<<endl<<Y<<endl;
    cout<<"No. of samples: "<<endl<<n<<endl;
    VectorXf XX = X.array() - X.mean();
    VectorXf YY = Y.array() - Y.mean();
    double num_sum = XX.dot(YY);
    double den_sum = XX.dot(XX);
    double slope = num_sum/den_sum;
    double intercept = Y.mean() - (slope*X.mean());
    cout<<"Slope: "<<endl<<slope<<endl;
    cout<<"Intercept: "<<endl<<intercept<<endl;
    return 0;
}