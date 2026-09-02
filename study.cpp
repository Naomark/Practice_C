#include <iostream>
#include <ctime>
#include <cstdlib>
#define CARD_NUMBER 13
#define TWO_DORROW 2

int sum = 0;

int draw(){
    int card_number = 1 + rand() % CARD_NUMBER; //1～13の乱数

    switch(card_number){
        case 1:  if(sum > 11) return sum += 1;
                 else return sum += 10;

        case 11: return sum += 10;

        case 12: return sum += 10;  

        case 13: return sum += 10;   

        default: return sum += card_number;
    }
}

int main(){
    srand(time(NULL));

    std::cout << "Lets start BLACK JACK!!" << std::endl;

    int number;

    do{
        std::cout << "CHALLENGE? (1:Yes : 2:No):";  
        std::cin >> number;

        std::cout << number;
        switch(number){
            case 1 : break;                                                             //そのまま続行
            case 2 : std::cout << "What? why don't you take part with this game ??";           
                     return 0;                                                           //終了
            default : std::cout << "Its wrong. imput the number 1 or 2" << std::endl;   //やり直し
        }
    } while(number < 1 || number > 2);  //1,2しか進められない

    // 最初の手札2枚を引く
    for(int i = 0; i < TWO_DORROW; i++){
       draw();
    }

    while(1){
        int choose;
        
        do{
        std::cout << "Hit or Stand ? (1:Hit : 2:Stand):";
        std::cin >> choose;
        
        switch(choose){
            case 1: break;
            case 2: ;
        }
    }while( choose < 1 || choose > 2);

    int char;

    }
}

   
