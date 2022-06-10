#include <iostream>


//Dynamic Memory allocation

using namespace std;
void fun(int n){
    int *p = new int[n];

    time_t t = time(NULL);
    srand(t);

    for(int i=0; i<n; ++i){
        p[i]= rand() % 100;
    }
    /*delete [] p;*/ //to Deallocate the memory

    return p;
}

int main()
{
    int *ptr = fun(10000);
    process(ptr);
    delete [] ptr;

    fun(5000);
    return 0;
}
