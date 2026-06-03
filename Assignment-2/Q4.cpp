#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    MatrixXf A(4,3);
    A<<150,50,25,160,60,30,170,65,35,180,80,40;
    cout<<"Matrix A: "<<endl<<A<<endl;
    int c = A.cols();
    MatrixXf S(4,3);
    MatrixXf MM(4,3);
    MatrixXf MN(4,3);
    for(int i=0 ; i<c ; i++){
        double sig = sqrt(((A.col(i).array() - A.col(i).mean()).square()).sum())/(A.col(i).size()-1);
        double min = A.col(i).minCoeff();
        double max = A.col(i).maxCoeff();
        S.col(i) = (A.col(i).array() - A.col(i).mean())/sig;
        MM.col(i) = (A.col(i).array() - min)/ (max-min);
        MN.col(i) = (A.col(i).array() - A.col(i).mean())/ (max - min);
    }
    cout<<"Standardised Vector: "<<endl<<S<<endl;
    cout<<"Min-Max Normalised Vector: "<<endl<<MM<<endl;
    cout<<"Mean Normalised Vector: "<<endl<<MN<<endl;
    return 0;
}
// Output :- 
//  g++ -I /usr/include/eigen3 Q4.cpp -o Q4
//  ./Q4
// Matrix A: 
// 150  50  25
// 160  60  30
// 170  65  35
// 180  80  40
// Standardised Vector: 
//  -2.01246  -1.90526  -2.01246
//  -0.67082 -0.519615  -0.67082
//   0.67082  0.173205   0.67082
//   2.01246   2.25167   2.01246
// Min-Max Normalised Vector: 
//        0        0        0
// 0.333333 0.333333 0.333333
// 0.666667      0.5 0.666667
//        1        1        1
// Mean Normalised Vector: 
//      -0.5 -0.458333      -0.5
// -0.166667    -0.125 -0.166667
//  0.166667 0.0416667  0.166667
//       0.5  0.541667       0.5