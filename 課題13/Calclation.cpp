#include "Calclation.h"
#include <iostream>

// a�̒l��ݒ肷��
void Calclation::SetA(float value) {
    a = value;
}

// b�̒l��ݒ肷��
void Calclation::SetB(float value) {
    b = value;
}

// a�̒l���擾����
float Calclation::GetA() const {
    return a;
}

// b�̒l���擾����
float Calclation::GetB() const {
    return b;
}

// �v�Z���ʂ�\������
void Calclation::Disp() const {
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
}
