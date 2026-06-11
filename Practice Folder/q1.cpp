#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXi actual(10);
    actual<< 1,0,1,0,1,0,0,1,1,1;
    VectorXi predicted(10);
    predicted<< 1,0,1,1,0,1,1,0,1,1;
    int TP = 0 , FP = 0 , FN = 0 , TN = 0;
    for(int i=0 ; i<10 ; i++){
        if(actual(i) == 1 && predicted(i) == 1){
            TP++;
        }else if(actual(i) == 0 && predicted(i) == 0){
            TN++;
        }else if(actual(i) == 0 && predicted(i) == 1){
            FP++;
        }else{
            FN++;
        }
    }
    double accuracy = (TP+TN)/10.0;
    double precision = TP/double(TP+FP);
    double recall = TP/double(TP+FN);
    double fscore = 2*precision*recall/(precision+recall);
    cout<<"TP = "<<TP<<endl;
    cout<<"TN = "<<TN<<endl;
    cout<<"FP = "<<FP<<endl;
    cout<<"FN = "<<FN<<endl;
    cout<<"Accuracy = "<<accuracy<<endl;
    cout<<"Precision = "<<precision<<endl;
    cout<<"Recall ="<<recall<<endl;
    cout<<"F1-Score ="<<fscore<<endl;
    return 0;
}