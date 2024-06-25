#include "Calclation.h"
#include <iostream>

// aの値を設定する
void Calclation::SetA(float value) {
    a = value;
}

// bの値を設定する
void Calclation::SetB(float value) {
    b = value;
}

// aの値を取得する
float Calclation::GetA() const {
    return a;
}

// bの値を取得する
float Calclation::GetB() const {
    return b;
}

// 計算結果を表示する
void Calclation::Disp() const {
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
}
