// 4.1 Write a program to apply Logistic Classification Model using Eigen, on the given data set to
// predict the class labels by using a threshold of 0.5. (The model is given by: z = - 4 + 1.5*x)
// x y
// 1 0
// 2 0
// 3 0
// 4 1
// 5 1
// 4.2 The following table shows the actual values and predicted values obtained from a regression
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
// 4

// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     MatrixXd xtrain(5,2);
//     xtrain<<1,1,1,2,1,3,1,4,1,5;
//     VectorXd theta(2);
//     theta<<-4,1.5;
//     int n = xtrain.rows();
//     for(int i=0 ; i<n ;i++){
//         double z = xtrain.row(i).dot(theta);
//         double p = 1.0/(1.0+exp(-z));
//         int prediction = (p>0.5)?1:0;
//         cout<<"The predicted probability of "<<i+1<<" sample is  "<<prediction<<endl
//         <<"and the predicted class is "<<prediction<<endl;
//     }
//     return 0;
// }
// // Output :- 
// g++ -I /usr/include/eigen3 Q1.cpp -o  Q1 
// ./Q1
// The predicted probability of 1 sample is  0
// and the predicted class is 0
// The predicted probability of 2 sample is  0
// and the predicted class is 0
// The predicted probability of 3 sample is  1
// and the predicted class is 1
// The predicted probability of 4 sample is  1
// and the predicted class is 1
// The predicted probability of 5 sample is  1
// and the predicted class is 1
#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXd xtrain(5,2);
    xtrain<<1,0,2,0,3,0,4,1,5,1;
    VectorXd theta(2);
    theta<<-4,1.5;
    int n = xtrain.rows();
    for(int i=0 ; i<n ; i++){
        double z = xtrain.row(i).dot(theta);
        double p = 1.0/(1.0+exp(-z));
        int prediction = (p>0.5)?1:0;
        cout<<prediction<<endl;
    }
    return 0;
}