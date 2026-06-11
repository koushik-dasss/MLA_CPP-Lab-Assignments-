#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXd y(5);
    VectorXd yhat(5);
    y<<5,10,15,20,25;
    yhat<<6,9,14,22,24;
    VectorXd error;
    error = y - yhat;
    double MSE = error.array().square().mean();
    double MAE = error.array().abs().mean();
    double ssres = error.array().square().sum();
    double sstot = (y.array()-y.mean()).square().sum();
    double rsquared = 1-(ssres/sstot);
    cout<<MSE<<endl<<MAE<<endl<<rsquared<<endl;
    return 0;
}