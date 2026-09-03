#include <ctime>
#include <cstdlib>
#include "kazuate.h"

using namespace std;

static int kotae = 0;

//---初期化---//
void initialize(){
    srand(time(NULL));
}

//---問題の作成---//
void gen_no(){
    kotae = rand() % (max_no + 1);
}

//---解答の作成---//
int judge(int card){
    if(card == kotae){
        return 0;   //正解
    }else if(card > kotae){
        return 1;   //大きい
    }else{
        return 2;   //小さい
    }
}