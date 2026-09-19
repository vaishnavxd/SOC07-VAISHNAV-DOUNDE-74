#include <iostream>
using namespace std;

class Rectangle {
private:
    float l, b;
    float area();
    float perimeter();

public:
    void getData(){
        cout << "ENTER L: ";
        cin >> l;
        cout << "ENTER B: ";
        cin >> b;
    }

    void display(){
        cout << "AREA: " << area() << endl;
        cout << "PERIMETER: " << perimeter() << endl;
    }
};

float Rectangle::area(){
    return l * b;
}

float Rectangle::perimeter(){
    return 2 * (l + b);
}

int main(){
    Rectangle r;
    r.getData();
    r.display();

    return 0;
}
