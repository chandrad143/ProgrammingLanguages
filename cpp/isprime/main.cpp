#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int);

bool isPrime(int num){

    int i;

    for (i=2; i < sqrt(num); ++i){
        if (num % i ==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    for (n = 0; n <= 1000; ++n){
        if (isPrime(n)){
            cout << n << " , ";
        }
    }

    return 0;
}
