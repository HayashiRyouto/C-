#ifndef CALCLATION_H
#define CALCLATION_H

class Calclation {
private:
    float a;
    float b;

public:
    // a��b�̒l��ݒ肷�郁�\�b�h
    void SetA(float value);
    void SetB(float value);

    // a��b�̒l���擾���郁�\�b�h
    float GetA() const;
    float GetB() const;

    // a��b�̑����Z�̌��ʂ�\�����郁�\�b�h
    void Disp() const;
};

#endif // CALCLATION_H

