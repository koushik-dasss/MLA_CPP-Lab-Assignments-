#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXd y(5);
    VectorXd yhat(5);
    y<<1,2,3,4,5;
    yhat<<6,7,8,9,10;
    VectorXd error;
    error = y - yhat;
    double MSE = error.array().square().mean();
    double MAE = error.array().abs().mean();
    double ssres = error.array().square().sum();
    double sstot = (y.array() - y.mean()).square().sum();
    double rsquared = 1 - (ssres/sstot);
    cout<<"MSE: "<<endl<<MSE<<endl;
    cout<<"MAE: "<<endl<<MAE<<endl;
    cout<<"R-Squared: "<<endl<<rsquared<<endl;
    return 0;
}