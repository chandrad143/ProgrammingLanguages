#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i;

    srand(time(NULL));

    for (i=0; i<=10; ++i){
        cout << rand() %100 << endl;
    }
    return 0;
}
