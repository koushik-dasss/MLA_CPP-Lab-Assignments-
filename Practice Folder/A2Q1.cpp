// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     VectorXf X(5);
//     VectorXf Y(5);
//     X<<1,2,3,4,5;
//     Y<<2,4,5,4,5;
//     int n = X.size();
//     cout<<"Input Data: "<<X<<endl;
//     cout<<"Output Data: "<<Y<<endl;
//     cout<<"No. of samples: "<<n<<endl;
//     double Xm = X.mean();
//     double Ym = Y.mean();
//     VectorXf XX = X.array() - Xm;
//     VectorXf YY = Y.array() = Ym;
//     double num_sum = XX.dot(YY);
//     double den_sum = XX.dot(XX);
//     double slope = num_sum/den_sum;
//     cout<<"Slope of Regression Equation: "<<slope<<endl;
//     double intercept = Ym - (slope*Xm);
//     cout<<"Intercept : "<<intercept<<endl;
//     return 0;
// }
// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     VectorXf X(5);
//     VectorXf Y(5);
//     X<<1,2,3,4,5;
//     Y<<2,4,5,4,5;
//     int n = X.size();
//     cout<<"Input Data: "<<endl<<X<<endl;
//     cout<<"Output Data: "<<endl<<Y<<endl;
//     cout<<"No. of samples: "<<n<<endl;
//     double Xm = X.mean();
//     double Ym = Y.mean();
//     VectorXf XX = X.array() - Xm;
//     VectorXf YY = Y.array() - Ym;
//     double num_sum = XX.dot(YY);
//     double den_sum = XX.dot(XX);
//     double slope = num_sum/den_sum;
//     cout<<"Slope of Regression Equation: "<<slope<<endl;
//     double intercept = Ym - (slope*Xm);
//     cout<<"Intercept of Regression Equation: "<<intercept<<endl;
//     return 0;
// }

// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     VectorXf X(5);
//     VectorXf Y(5);
//     X<<1,2,3,4,5;
//     Y<<6,7,8,9,10;
//     int n = X.size();
//     cout<<"Input Data: "<<endl<<X<<endl;
//     cout<<"Output Data: "<<endl<<Y<<endl;
//     cout<<"No. of samples: "<<n<<endl;
//     double Xm = X.mean();
//     double Ym = Y.mean();
//     VectorXf XX = X.array() - Xm;
//     VectorXf YY = Y.array() - Ym;
//     double num_sum = XX.dot(YY);
//     double den_sum = XX.dot(XX);
//     double slope = num_sum/den_sum;
//     double intercept = Ym - (slope*Xm);
//     cout<<"Slope: "<<slope<<endl;
//     cout<<"Intercept: "<<intercept<<endl;
//     return 0;
// }

// #include<iostream>
// #include<Eigen/Dense>
// using namespace std;
// using namespace Eigen;
// int main(){
//     VectorXf X(5);
//     VectorXf Y(5);
//     X<<1,2,3,4,5;
//     Y<<6,7,8,9,10;
//     int n = X.size();
//     cout<<"Input Data: "<<X<<endl;
//     cout<<"Output Data: "<<Y<<endl;
//     cout<<"No. of samples: "<<n<<endl;
//     VectorXf XX = X.array() - X.mean();
//     VectorXf YY = Y.array() - Y.mean();
//     double num_sum = XX.dot(YY);
//     double den_sum = XX.dot(XX);
//     double slope = num_sum/den_sum;
//     double intercept = Y.mean() - (slope*X.mean());
//     cout<<"Slope : "<<slope<<endl;
//     cout<<"Intercept: "<<intercept<<endl;
//     return 0;
// }


#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;
int main(){
    VectorXf X(5);
    VectorXf Y(5);
    X<<1,2,3,4,5;
    Y<<6,7,8,9,10;
    int n = X.size();
    cout<<"Input Data: "<<endl<<X<<endl;
    cout<<"Output Data: "<<endl<<Y<<endl;
    cout<<"No. of samples: "<<endl<<n<<endl;
    VectorXf XX = X.array() - X.mean();
    VectorXf YY = Y.array() - Y.mean();
    double num_sum = XX.dot(YY);
    double den_sum = XX.dot(XX);
    double slope = num_sum/den_sum;
    double intercept = Y.mean() - (slope*X.mean());
    cout<<"Slope: "<<slope<<endl;
    cout<<"Intercept: "<<intercept<<endl;
    return 0;
}
