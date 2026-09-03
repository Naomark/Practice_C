//二つの名前空間
#include <iostream>

using namespace std;

namespace English{
    int x = 1;

    void print_x(){
        cout << "x : " << x << endl;
    }

    void hello(){
        cout << "hello!\n";
    }
}

namespace Japanese{
    int x = 2;

    void print_x(){
        cout << "x : " << x << endl;
    }

    void hello(){
        cout << "hello!\n";
    }
}

int main(){
    cout << "English::x = " << English::x << endl;
    English::print_x();
    English::hello();
    
    cout << "Japanese::x = " << Japanese::x << endl;
    Japanese::print_x();
    Japanese::hello();
    
}