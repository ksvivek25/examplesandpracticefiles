// to display numbers from 1 to 5
#include<iostream>
using namespace std;

int main ()
{
    int count =1, i, sum=0;
    cout<< " enter your number" <<endl;
    cin >> i;

    while (count <= i)
    { 
        sum+=count; // ----> sum= sum+ count
        count = count + 1 ;
    }
    cout<< "sum of 1 to " << i << "=" << sum << endl ;
    return 0;
} 
