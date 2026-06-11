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
//     for(int i=0 ; i<n ; i++){
//         double z = xtrain.row(i).dot(theta);
//         double p = 1.0/(1.0+exp(-z));
//         int prediction = (p>0.5)?1:0;
//         cout<<"The predicted probability of "<<i+1<<" sample is "<<prediction<<endl<<" and the predicted class is :"<<prediction<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     MatrixXd xtrain(5,2);
//     xtrain<<1,1,1,2,1,3,1,4,1,5;
//     VectorXd theta(2);
//     theta<<-4,1.5;
//     int n  = xtrain.rows();
//     for(int i=0 ; i<n ; i++){
//         double z = xtrain.row(i).dot(theta);
//         double p = 1.0/(1.0+exp(-z));
//         int prediction = (p>0.5)?1:0;
//         cout<<"The predicted probability of "<<i+1<<" sample is "<<prediction<<endl<<" and the predicted class is "<<prediction<<endl;

//     }
//     return 0;
// }

#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXd xtrain(5,2);
    VectorXd theta(2);
    theta<<-4,1.5;
    xtrain<<1,1,1,2,1,3,1,4,1,5;
    int n = xtrain.rows();
    for(int i=0 ; i<n ;i++){
        double z = xtrain.row(i).dot(theta);
        double p = 1.0/(1.0+exp(-z));
        double prediction = (p>0.5)?1:0;
        cout<<"The predicted probability of "<<i+1<<" sample is "<<prediction<<" and the  prediction class is "<<prediction<<endl;
    }
    return 0;
}