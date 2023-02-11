#include <iostream>
#include <string>
#include <locale>

using namespace std;

class A {
private:
    int x;

public:
    int setX(int x_value) {
        int error_code_x;
        if (x_value > 0) {
            x = x_value;
            error_code_x = 0;
        }
        else {
            error_code_x = -1;
        }
        return error_code_x;
    };
    int getX() {
        return x;
    };
};

class B : public A {
public:
    int y;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int x_value;
    A objA;
    B objB;
    cin >> x_value;
    int error_code_x = objB.setX(x_value);
    cout << "Код ошибки\n";
    objB.y = 3;
    cout << error_code_x << endl;
    if (error_code_x == 0) {
        cout << objB.getX();
    }
    else {
        cout << "Ошибка в присвоении х";
    }
    return 0;
}