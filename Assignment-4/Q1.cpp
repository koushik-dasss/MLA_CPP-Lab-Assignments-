#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXd xtrain(5,2);
    xtrain<<1,1,1,2,1,3,1,4,1,5;
    VectorXd theta(2);
    theta<<-4,1.5;
    int n = xtrain.rows();
    for(int i=0 ; i<n ;i++){
        double z = xtrain.row(i).dot(theta);
        double p = 1.0/(1.0+exp(-z));
        int prediction = (p>0.5)?1:0;
        cout<<"The predicted probability of "<<i+1<<" sample is  "<<prediction<<endl
        <<"and the predicted class is "<<prediction<<endl;
    }
    return 0;
}
// Output :- 
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