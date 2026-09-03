#include <iostream>
#include "kazuate.h"

using namespace std;

int max_no = 9;

int main(){
    initialize();   //初期化
    cout << "LETS start KAZUATE!!\n";

    do{
        gen_no();   //問題の作成
        int hantei;

        do{
            hantei = judge(imput());    //解答の判定
            if(hantei == 1){
                cout << "ITS SMALL!!\n";
            }else if(hantei == 2){
                cout << "ITS BIG!!\n";
            }
        }while (hantei != 0);

        cout << "ITS CORRECT!\n";
    }while(confirm_retry());
   
}