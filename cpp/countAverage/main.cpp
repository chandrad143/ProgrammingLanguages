#include <iostream>

using namespace std;

double findAvg(int arr[], int n){

    double sum =0;
    for(int i=0; i< n; ++i){
        sum+=arr[i];
    }
    double avg = sum/n;

    cout << "this is the avg: " << avg;
    return avg;

}

int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9,10};
    findAvg(arr, 10);
    return 0;
}
