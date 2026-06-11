
// 3.2 Write a program to create a confusion matrix from the given actual and predicted classes.
// Also, calculate accuracy, precision, recall, and F1 score using the confusion matrix.
// Actual Class Predicted Class
// 1 1
// 0 0
// 1 1
// 1 0
// 0 0
// 1 1
// 0 0
// 0 1
// 1 1
// 0 0
// 

// 3.2
// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     VectorXi actual(10);
//     VectorXi predicted(10);
//     actual<<1,0,1,1,0,1,0,0,1,0;
//     predicted<<1,0,1,1,0,1,0,1,1,0;
//     int TP = 0 , TN = 0 , FP = 0 , FN = 0;
//     for(int i=0 ; i<10 ; i++){
//         if( actual(i) == 1 && predicted(i) == 1){
//             TP++;
//         }else if( actual(i) == 0 && predicted(i) == 0){
//             TN++;
//         }else if( actual(i) == 0 && predicted(i) == 1){
//             FP++;
//         }else{
//             FN++;
//         }
//     }
//     double accuracy = (TP+TN)/10.0;
//     double precision = TP/double(TP+FP);
//     double recall = TP/double(TP+FN);
//     double fscore = 2*precision*recall/(precision+recall);
//     cout<<TP<<endl<<FP<<endl<<FN<<endl<<TN<<endl;
//     cout<<accuracy<<endl<<precision<<endl<<recall<<endl<<fscore<<endl;
//     return 0;
// }




// 3.1 Write a program to apply KNN Classification Model using Eigen, on the given data set to
// predict the class for a new datapoint P(4,3).
// Data Point x1 x2 y
// P1 1 2 0
// P2 2 3 0
// P3 3 1 0
// P4 6 5 1
// P5 7 6 1
#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXd X(5,2);
    X<<1,2,2,3,3,1,6,5,7,6;
    VectorXd P(2);
    P<<4,3;
    VectorXd Y(5);
    Y<<0,0,0,1,1;
    int k = 3 ;
    int n = X.rows();
    MatrixXd neighbor(5,2);
    for(int i=0 ; i<n ; i++){
        double dist = (X.row(i).transpose() - P).norm();
        neighbor(i,0) = dist;
        neighbor(i,1) = Y(i);
    }
    for(int i=0 ; i<n  ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(neighbor(i,0) > neighbor(j,0)){
                neighbor.row(i).swap(neighbor.row(j));
            }
        }
    }
    int countzero = 0 ;
    int countone = 0 ;
    for(int i=0 ; i<k ;i++){
        if(neighbor(i,1) == 0){
            countzero++;
        }else{
            countone++;
        }
    }
    int p = (countone>countzero)?1:0;
    cout<<endl<<p<<endl;
    return 0;
}