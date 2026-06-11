// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     VectorXf A(5);
//     VectorXf B(5);
//     A<<1,2,3,4,5;
//     B<<6,7,8,9,10;
//     int n = A.size();
//     cout<<"Input Vector: "<<endl<<A<<endl;
//     cout<<"Output Vector: "<<endl<<B<<endl;
//     cout<<"No. of outcomes: "<<n<<endl;
//     VectorXf XX = A.array() - A.mean();
//     VectorXf YY = B.array() - B.mean();
//     double num_sum = XX.dot(YY);
//     double den_sum = XX.dot(XX);
//     double slope = num_sum/den_sum;
//     double intercept = B.mean()-(slope*A.mean());
//     cout<<"Slope: "<<slope<<endl;
//     cout<<"Intercept: "<<intercept<<endl;
//     return 0;
// }
#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXf X(5,1);
    VectorXf Y(5);
    X<<1,2,3,4,5;
    Y<<2,4,5,4,5;
    int n = X.size();
    cout<<"Input Matrix: "<<endl<<X<<endl;
    cout<<"Output Matrix: "<<endl<<Y<<endl;
    cout<<n<<endl;
    VectorXf XX = X.array() - X.mean();
    VectorXf YY = Y.array() - Y.mean();
    double num_sum = XX.dot(YY);
    double den_sum = XX.dot(XX);
    double slope = num_sum/den_sum;
    double intercept = Y.mean()-(slope*X.mean());
    cout<<slope<<endl<<intercept<<endl;
    return 0;
}