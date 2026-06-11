// 2.4 Write a program to apply the following Data Normalization Methods on the given multiple
// input features.
// Height
// 150
// 160
// 170
// 180
// Weight
// 50
// 60
// 65
// 80
// Age
// 25
// 30
// 35
// 40
// a. Standardization
// b. Min-Max Normalization
// c. Mean Normalization
#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXf A(4,3);
    A<<150,50,25,160,60,30,170,65,35,180,80,40;
    int c = A.cols();
    MatrixXf S(4,3);
    MatrixXf MM(4,3);
    MatrixXf MN(4,3);
    
    return 0;
}




















// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     MatrixXf A(4,3);
//     A<<150,50,25,160,60,30,170,65,35,180,80,40;
//     cout<<"Matrix A: "<<endl<<A<<endl;
//     int c = A.cols();
//     MatrixXf S(4,3);
//     MatrixXf MM(4,3);
//     MatrixXf MN(4,3);
//     for(int i=0 ; i<c ; i++){
//         double sig = sqrt(((A.col(i).array() - A.col(i).mean()).square()).sum())/(A.col(i).size()-1);
//         double min = A.col(i).minCoeff();
//         double max = A.col(i).maxCoeff();
//         S.col(i) = (A.col(i).array() - A.col(i).mean())/sig;
//         MM.col(i) = (A.col(i).array() - min)/ (max-min);
//         MN.col(i) = (A.col(i).array() - A.col(i).mean())/ (max - min);
//     }
//     cout<<"Standardised Vector: "<<endl<<S<<endl;
//     cout<<"Min-Max Normalised Vector: "<<endl<<MM<<endl;
//     cout<<"Mean Normalised Vector: "<<endl<<MN<<endl;
//     return 0;
// }