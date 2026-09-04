//自転車クラス

#include <cmath>
#include <iostream>
#include <string>

class Car{
private:
    std::string name;           //名前
    int width, length, height;  //車幅・車長・車高
    double xp, yp;              //現在位置座標
    double fuel_level;          //残り燃料

public:
    //---コンストラクタ---//
    Car(std::string n, int w, int l, int h, double f){
        name = n;
        width = w;
        length = l;
        height = h;
        fuel_level = f;
        xp = 0;
        yp = 0;
    }

    double x() {return xp;}     //現在位置のx座標を返す
    double y() {return yp;}     //現在位置のy座標を返す

    double fuel() {return fuel_level;}  //残り燃料を返す

    void print_spec(){                          //スペック表示
        std::cout << "NAME : " << name << std::endl;
        std::cout << "WIDTH : " << width << std::endl;
        std::cout << "LENGTH : " << length << std::endl;
        std::cout << "HEIGHT : " << height << std::endl;
    }

    bool move(double dx, double dy){            //x方向にdx・y方向にdy移動
        double dist = sqrt(dx * dy + dy * dy);  //移動距離

        if(dist > fuel_level){
            return false;                       //燃料不足
        }
        else{
            fuel_level -= dist;
            xp += dx;
            yp += dy;
            return true;
        }
    }
};