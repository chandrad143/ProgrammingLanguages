#include <iostream>
#include <cmath>
using namespace std;

int nDigits(int a){

    int count = 0;

    while (a >0){
        a = a/10;
        count++;
    }

    return count;
}

bool isArmstrong(int num){

    int count = nDigits(num);

    int sum = 0;
    int temp = num;

    while (num > 0){
            int rem = num % 10;
            num = num/10;
            sum += pow(rem, count);
    }
    if (temp == sum){
        return true;
    }
    else{
        return false;
    }
    return 0;
}

int main()
{
    int checker;

    cout << "Enter the number you want to check: ";
    cin >> checker;

    if (isArmstrong(checker)){
        cout << "the number you entered is an armstrong num" << endl;
    }
    else{
        cout << "Not an armstrong number";
    }
    return 0;
}
