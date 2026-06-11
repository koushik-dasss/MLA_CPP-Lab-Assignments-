#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXd actual(10);
    VectorXd predicted(10);
    actual<<1,0,1,1,0,1,0,0,1,0;
    predicted<<1,0,1,0,0,1,0,1,1,0;
    int TP = 0 , FP = 0 , TN = 0 , FN = 0;
    for(int i=0 ; i<10 ; i++){
        if(actual(i) == 0 && predicted(i) == 0 ){
            TN++;
        }else if(actual(i) == 1 && predicted(i) == 1){
            TP++;
        }else if(actual(i) == 1 && predicted(i) == 0){
            FN++;
        }else{
            FP++;
        }
    }
    double accuracy = (TP+TN)/10.0;
    double precision = TP/double(TP+FP);
    double recall = TP/double(TP+FN);
    double fscore = 2*precision*recall/(precision+recall);
    cout<<TP<<endl<<TN<<endl<<FP<<endl<<FN<<endl;
    cout<<accuracy<<endl<<precision<<endl<<recall<<endl<<fscore<<endl;
    return 0;
}