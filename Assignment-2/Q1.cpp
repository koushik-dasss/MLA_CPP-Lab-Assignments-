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
    cout<<"No. of samples: "<<n<<endl;
    double Xm = X.mean();
    double Ym = Y.mean();
    VectorXf XX = X.array() - Xm;
    VectorXf YY = Y.array() - Ym;
    double num_sum = XX.dot(YY);
    double den_sum = XX.dot(XX);
    double slope = num_sum/den_sum;
    cout<<"Slope of Regression Equation: "<<slope<<endl;
    double intercept = Ym - (slope*Xm);
    cout<<"Intercept of Regression Equation: "<<intercept<<endl;
    return 0;
}
// Output :- 
// g++ -I /usr/include/eigen3 Q1.cpp -o Q1
// ./Q1
// Input Data: 
// 1
// 2
// 3
// 4
// 5
// Output Data: 
// 2
// 4
// 5
// 4
// 5
// No. of samples: 5
// Slope of Regression Equation: 0.6
// Intercept of Regression Equation: 2.2