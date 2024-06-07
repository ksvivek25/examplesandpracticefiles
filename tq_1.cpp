#include<iostream>
using namespace std;
int main(){
    int x=0;
    cout<< "enter the value of x"<< endl;
    cin >> x ;
    if (x > 100)
    {
        cout << "HIGH"<< endl;
    }
    else
        {
        cout << "Entered Value is LOW" << endl;
        }
    
    return 0;
}