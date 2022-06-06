﻿#include <iostream>

using namespace std;

int main()
{
    char char_value = 'A';
    int int_value = 123;
    double double_value = 123.456;

    char* char_pointer_value = &char_value;
    int* int_pointer_value = &int_value;
    double* double_pointer_value = &double_value;

    //일반 변수의 데이터 출력을 통해 원래 데이터 확인하기
    cout << "char_value: " << char_value << endl;
    cout << "int_value: " << int_value << endl;
    cout << "double_value: " << double_value << endl;
    cout << endl;

    //역참조 연산자를 통한 데이터 접근 및 출력
    cout << "*char_pointer_value: " << *char_pointer_value << endl;
    cout << "*int_pointer_value: " << *int_pointer_value << endl;
    cout << "*double_pointer_value: " << *double_pointer_value << endl;
    cout << endl;

    //역참조 연산자를 통해 원본 데이터 덮어쓰기
    *char_pointer_value = 'Z';
    *int_pointer_value = 321;
    *double_pointer_value = 654.321;

    //일반 변수의 데이터 출력을 통해 업데이트 확인하기
    cout << "char_value: " << char_value << endl;
    cout << "int_value: " << int_value << endl;
    cout << "double_value: " << double_value << endl;

    return 0;
}
