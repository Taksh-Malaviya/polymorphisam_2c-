#include <iostream>
using namespace std;

class Number {
public:
    int value;
public:
    Number(int num) {
        value = num;
    }

     operator<(int Number&other) int {
        return value < other.value;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    if (num1 < num2) {
        cout <<"2 IS BIGGEST"<< endl;
    } else {
        cout << "1 IS BIGGEST" << endl;
    }

    return 0;
}

