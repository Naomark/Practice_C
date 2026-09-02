#include <iostream>
#include <ctime>
#include <cstdlib>
#define CARD_NUMBER 13
#define TWO_DORROW 2

int main(){
    srand(time(NULL));

    std::cout << "Lets start BLACK JACK!!" << std::endl;

    int number;
    static int sum = 0;

    do{
        std::cout << "CHALLENGE? (1:Yes : 2:No):";  
        std::cin >> number;

    switch(number){
        case 1 : break;                                                              //そのまま続行
        case 2 : std::cout << "What? why don't you take part with this game??";           
                 return 0;                                                           //終了
        default : std::cout << "Its wrong. imput the number 1 or 2" << std::endl;   //やり直し
    }
    } while(number < 1 || number > 2);  //1,2しか進められない

    // 最初の手札2枚を引く
    for(int i = 0; i < TWO_DORROW; i++){
        int card_number = 1 + rand() % CARD_NUMBER; //1～13の乱数

    switch(card_number){
        case 1:  if(sum > 11) sum += 1;
                 else sum += 10;
                 break;

        case 11: std::cout << "J ";
                 sum += 10;
                 break;   
        case 12: std::cout << "Q ";
                 sum += 10;
                 break;   

        case 13: std::cout << "K ";
                 sum += 10;
                 break;    
        default: std::cout << card_number << " ";
                 sum += card_number;
                 break;
    }
    }

    while(1){
        int choose;
        
        do{
        std::cout << "Hit or Stand ? (1:Hit : 2:Stand):";
        std::cin >> choose;

        if(choose == 1){

        }
    }while( choose < 1 || choose > 2);


    }
}

   





