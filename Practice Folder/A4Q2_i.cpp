#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXd y(5);
    y<<5,10,15,20,25;
    VectorXd yhat(5);
    yhat<<6,9,14,22,24;
    VectorXd error;
    error = y - yhat;
    double mse = error.array().square().mean();
    double mae = error.array().abs().mean();
    double ssres = error.array().square().sum();
    double sstot = (y.array() - y.mean()).square().sum();
    double rsquared = 1 - (ssres/sstot);
    cout<<"MSE: "<<endl<<mse<<endl;
    cout<<"MAE: "<<endl<<mae<<endl;
    cout<<"R-Squared: "<<endl<<rsquared<<endl;
    return 0;
}