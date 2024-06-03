#include<iostream>
using namespace std;
int main(){
    double x = 1.2;
    //explicit conversion from double to int 
    int sum = (int)x + 1;
    cout << "Sum=" << sum;

    return 0;
}