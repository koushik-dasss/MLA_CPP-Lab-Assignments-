// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     VectorXd y(5);
//     y<<5,10,15,20,25;
//     VectorXd yhat(5);
//     yhat<<6,9,14,22,24;
//     int n = y.size();
//     VectorXd error = y-yhat;
//     double mse = error.array().square().mean();
//     double mae = error.array().abs().mean();
//     double ymean = y.mean();
//     double sstot = (y.array()-y.mean()).square().sum();
//     double ssres = error.array().square().sum();
//     double rsquared = 1-(ssres/sstot);
//     cout<<"Mean Squared Error = "<<mse<<endl;
//     cout<<"Mean Absolute Error = "<<mae<<endl;
//     cout<<"R-Squared = "<<rsquared<<endl;
//     return 0;
// }
// // Output :- 
// // g++ -I /usr/include/eigen3 Q2.cpp -o  Q2 
// // ./Q2
// // Mean Squared Error = 1.6
// // Mean Absolute Error = 1.2
// // R-Squared = 0.968


#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXd y(5);
    VectorXd yhat(5);
    y<< 5,10,15,20,25;
    yhat<<6,9,14,22,24;
    VectorXd error = y - yhat;
    double mse = error.array().square().mean();
    double mae = error.array().abs().mean();
    double ymean = y.mean();
    double sstot = (y.array()-y.mean()).square().sum();
    double ssres = error.array().square().sum();
    double rsquared = 1-(ssres/sstot);
    cout<<"MSE: "<<mse<<endl;
    cout<<"MAE: "<<mae<<endl;
    cout<<"R-Squared: "<<rsquared<<endl;
    return 0;
}