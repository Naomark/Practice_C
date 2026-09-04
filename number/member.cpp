//---会員クラス（ソース部）---//
#include <iostream>
#include "member.h"

using namespace std;

//コンストラクタ
Member::Member(std::string name, int number, int grade){
    full_name = name;
    no = number;
    rank = grade;
}

//表示
void Member::print(){
    cout << "No." << no << " : " << full_name << "[RANK :" << rank << "]\n";
}