#include <iostream>
#include "Data.h"

//メイン関数
int main()
{
	//変数 i に適当な値を代入させる
	 int i;
	 std::cin >> i;

	//Dataクラスのインスタンスを作る
	 Data x;

	//メンバ関数を呼び出す
	 x.SetValue(i);		//変数 i の値を渡す（アクセス関数）
	 x.Disp();         //表示する
	 
}