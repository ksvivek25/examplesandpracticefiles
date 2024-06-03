#include<iostream>
using namespace std;

int main ()
{
    int a=6, b=4;
    /*logical AND operator The logical AND operator (&&) returns true (which is 1) if both operands are non-zero (true).
     In this case, both a and b are non-zero, so the expression a && b evaluates to true (1).*/
    cout << " a && b is " << (a && b) << endl;

    //logical OR operator
    cout << " a || b is " << (a || b) << endl;

    // Logical NOT Operator
    cout << " !b is " << (!b) << endl;

     return 0;

}