#include "../all_h/all.h"
#include <eigen3/Eigen/Dense>

int main(){
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> a;
    a.resize(2,4);
    a(0,1) = 1.0;
    a(0,2) = 2.0;
    std::cout << a << std::endl;
    return 0;
}