// The following table shows the actual values and predicted values obtained from a regression
// model. This data will be used to examine the model’s performance using various regression
// metrics.
// Actual (y) Predicted (ˆy)
// 5 6
// 10 9
// 15 14
// 20 22
// 25 24
// Write a program to evaluate the following regression metrics.
// (a) Mean Squared Error (MSE)
// (b) Mean Absolute Error (MAE)
// (c) R-squared
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
    double MSE = error.array().square().mean();
    double MAE = error.array().abs().mean();
    double ssres = error.array().square().sum();
    double sstot = (y.array() - y.mean()).square().sum();
    double rsquare = 1-(ssres/sstot);
    cout<<MSE<<endl<<MAE<<endl<<rsquare<<endl;
    return 0;
}