#include <iostream>
#include <string>

using namespace std;


bool isCreditcardNum(string cc_num){
    int cc_arr[16];

    for (int i=0; i < 16; ++i ){
        cc_arr[i] = cc_num[i];
    }

    for (int i=0; i< 16; ++i){
        cout << "This is the number at index : "<< i << " " << cc_arr[i] << endl;
    }
}

int main()
{
    string cnum;
    cout << "Please enter the cc number: ";
    cin >> cnum;

    int lenght = 16;

    int cnt =0;
    for (char c:cnum){
        cnt+=1;
    }

    cout << "this is the count of the number you entered: " << cnt << endl;

    if (cnt != lenght){
            cout << "Please enter a valid cc num: ";
            cin >> cnum;
        }

    cout << ((isCreditcardNum(cnum)) ? "It is a correct num": "Wrong number entered") << endl;
    return 0;
}
