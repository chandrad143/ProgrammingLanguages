#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7};

    int cnt = 0;
    for(int k:arr){
        cnt+=1;
    }

    cout << "this is the count of ele in arr: " << cnt << endl;
    return 0;
}
