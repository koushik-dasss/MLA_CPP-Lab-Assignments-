#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXd y(5);
    y<<4,8,12,16,20;
    VectorXd yhat(5);
    yhat<<3,10,11,19,18;
    VectorXd error;
    error = y - yhat;
    double MSE = error.array().square().mean();
    double MAE = error.array().abs().mean();
    double ssres= error.array().square().sum();
    double sstot = (y.array() - y.mean()).square().sum();
    double rsquare = 1- (ssres/sstot);
    cout<<MSE<<endl<<MAE<<endl<<rsquare<<endl;
    return 0;
}