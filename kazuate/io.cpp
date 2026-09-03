#include <iostream>
#include "kazuate.h"

using namespace std;

extern int max_no;

//---入力を促す---//
static void prompt(){
    cout << "0 ~ " << max_no << ":";
}

//---解答の入力---//
int imput(){
    int value;

    while(1){
        prompt();   //入力を促す
        cin >> value;
        if(value > 0 || value < max_no){
            break;
        }
    }
    return value;
}

//---続行の確認---//
bool confirm_retry(){
    int count;

    while(1){
    cout << "RETRY? (1:Yes : 0:No) : ";
    cin >> count;

    if(count == 1 || count == 0){
        break;
    }
    }
    return static_cast<bool>(count);
}
