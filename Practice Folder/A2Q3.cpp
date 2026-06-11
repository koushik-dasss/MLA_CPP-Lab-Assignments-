// 2.3 Write a program to apply the following Data Normalization Methods on the given single input
// feature.
// x=[10,20,30,40,50]
// a. Standardization
// b. Min-Max Normalization
// c. Mean Normalization
#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXf A(5);
    A<<10,20,30,40,50;
    int n = A.size();
    double sig = sqrt((((A.array() - A.mean()).square().sum()/(n-1))));
    VectorXf S(5);
    S = (A.array() - A.mean())/sig;
    VectorXf MM(5);
    MM = (A.array() - A.minCoeff())/(A.maxCoeff() - A.minCoeff());
    VectorXf MN(5);
    MN = (A.array() - A.mean())/(A.maxCoeff() - A.minCoeff());
    cout<<"Vector A: "<<endl<<A<<endl;
    cout<<"Standardised Vector: "<<endl<<S<<endl;
    cout<<"Min-max Normalised Vector: "<<endl<<MM<<endl;
    cout<<"Mean Normalised Vector: "<<endl<<MN<<endl;
    return 0;
}
// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     VectorXf A(5);
//     A<<10,20,30,40,50;
//     int n = A.size();
//     double m = A.mean();
//     double sig = sqrt((((A.array() - m).square()).sum())/(n-1));
//     VectorXf S(5);
//     S = (A.array() - m)/ sig;
//     VectorXf MM(5);
//     MM = (A.array() - A.minCoeff())/(A.maxCoeff() - A.minCoeff());
//     VectorXf MN(5);
//     MN = (A.array() - m)/(A.maxCoeff()-A.minCoeff());
//     cout<<"Vector A: "<<endl<<A<<endl;
//     cout<<"Standardised Vector: "<<endl<<S<<endl;
//     cout<<"Min-Max Normalised Vector: "<<endl<<MM<<endl;
//     cout<<"Mean Normalised Vector: "<<endl<<MN<<endl;
//     return 0;
// }