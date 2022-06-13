#include <iostream>
#include <vector>

using namespace std;

 int main() {

     int arr[]={1,2,3,4,5};

     vector <int> v;
     int k;
     for (int k:arr){
        if (k%2==0){
        v.push_back(k);
        }
     }
     for (int vec:v){
        cout << vec << ", ";
     }
     return 0;
 }
