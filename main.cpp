#include <iostream>

int main(){
    std::cout << "Lets start BLACK JACK!!" << std::endl;

    int number;
    int card[4][10];

    int card_size = sizeof(card) / sizeof(card[0]); 
    int card_stype = sizeof(card[0]) / sizeof(card[0][0]);
    do{
        std::cout << "CHALLENGE? (1:Yes : 2:No):";  
        std::cin >> number;

    switch(number){
        case 1: ;                                                                   //そのまま続行
        case 2: std::cout << "What? why don't you part with this game??";           
                return 0;                                                           //終了
        default : std::cout << "Its wrong. imput the number 1 or 2" << std::endl;   //やり直し
    }
    } while(number < 1 || number > 2);

    for(int i = 0; i < card_stype; i++){
        for(int j = 0; j < card_size; j++){
            card[j][i] = i + 1;
        }
    }

   





}