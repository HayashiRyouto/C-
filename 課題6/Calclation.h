#ifndef CALCLATION_H
#define CALCLATION_H

class Calclation {
private:
    float a;
    float b;

public:
    // aとbの値を設定するメソッド
    void SetA(float value);
    void SetB(float value);

    // aとbの値を取得するメソッド
    float GetA() const;
    float GetB() const;

    // aとbの足し算の結果を表示するメソッド
    void Disp() const;
};

#endif // CALCLATION_H

