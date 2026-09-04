//自動車クラスの利用例
#include <iostream>
#include "car.h"

using namespace std;

int main(){
    string name;
    int width, length, height;
    double gas;

    cout <<"imput the car data!!\n";
    cout << "NAME :";
    cin >> name;
    cout << "WIDTH :";
    cin >> width;
    cout << "LENGTH :";
    cin >> length;
    cout << "HEIGHT :";
    cin >> height;
    cout << "FUEL_LEVEL :";
    cin >> gas;

    Car mycar(name, width, length, height, gas);

    mycar.print_spec();         //スペック表示

    while(true){
        cout << "Current(" << mycar.x() << ", " << mycar.y() << ")\n";
        cout << "gas mileage :" << mycar.fuel() << "\n";
        cout << "Move? [0 : No / 1 : Yes]";
        int move;
        cin >> move;

        if(move == 0) break;

        double dx, dy;

        cout << "move_x :";
        cin >> dx;
        cout << "move_y :";
        cin >> dy;

        if(!mycar.move(dx, dy)){
            cout << "Out of fuel.\n";
        }
    }
}