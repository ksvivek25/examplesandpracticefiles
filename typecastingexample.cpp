#include<iostream>
using namespace std;
int main (){
    //y implicitly converted to int type. ASCII Value of a is 97
    int x=10;
    char y='a';
    x=x+y;
    // x is implicitly converted to float in the following lines 
    float z = x + 1.0;
    cout<< "x=" << x <<endl
        << "y=" << y<< endl
        << "z=" << z << endl;

    return 0;

}