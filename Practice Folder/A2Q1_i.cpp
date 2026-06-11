#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXd  X(5);
    X<<1,2,3,4,5;
    MatrixXd Y(5);
    Y<<2,4,5,4,5;
    int n = X.size();
    cout<<"Input Data: "<<endl<<X<<endl;
    cout<<"Output Data: "<<endl<<Y<<endl;
    cout<<"No. of inputs: "<<endl<<n<<endl;
    VectorXd XX = X.array() - X.mean();
    VectorXd YY = Y.array() - Y.mean();
    double num_sum = XX.dot(YY);
    double den_sum = XX.dot(XX);
    double slope = num_sum/den_sum;
    double intercept = Y.mean() - (X.mean()*slope);
    return 0;
}
// B= ((X.transpose()*X).inverse()*(X.transpose()*Y);