#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXf X(5);
    X<<1,2,3,4,5;
    VectorXf Y(5);
    Y<<2,4,5,4,5;
    int n = X.size();
    cout<<"Input values: "<<endl<<X<<endl;
    cout<<"Output values: "<<endl<<Y<<endl;
    cout<<"No. of samples: "<<n<<endl;
    VectorXf XX = X.array() - X.mean();
    VectorXf YY = Y.array() - Y.mean();
    double num_sum = XX.dot(YY);
    double den_sum = XX.dot(XX);
    double slope = num_sum/den_sum;
    double intercept = Y.mean() - (X.mean()*slope);
    cout<<"Slope: "<<slope<<endl;
    cout<<"Intercept: "<<intercept<<endl;
    return 0;
}