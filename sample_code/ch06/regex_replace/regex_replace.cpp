#include <iostream>
#include <regex>
#include <list>
#include <atlbase.h>

using namespace std;

int main() {

  list<wstring> names {L"No.1: ��ö��", L"No.2: �ڿ���", L"No.3: ������", L"N/A: ���̻�", L"Exp: �ϴ�"};
  USES_CONVERSION;

  for (auto&& name : names) {
    cout << CW2A(name.c_str()) << " >> ";

    wregex re(L"([��-�R])([��-�R])([��-�R]*)");
    wstring newstring = regex_replace(name, re, L"$1*$3");
    //wstring newstring = regex_replace(name, re, L"�ƹ���");

    cout << CW2A(newstring.c_str())<< endl;
  }

  return 0;
}