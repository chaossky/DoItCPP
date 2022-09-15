#include <iostream>

using namespace std;

string show_doll(string doll) {
  return "'" + doll + "' ���ʿ� ";
}

template<typename... dolls>
string find_doll(dolls... doll_list) {
 return (show_doll(doll_list) + ...);
}

int main() {
  cout << "ù��° ��Ʈ���ī ";
  cout << find_doll(string("����"), string("����"), string("����"));
  cout << "�ֽ��ϴ�." << endl << endl;

  cout << "�ι�° ��Ʈ���ī ";
  cout << find_doll(string("Ư����"), string("����"), string("����"), string("����"), string("�ؼ���"));
  cout << "�ֽ��ϴ�." << endl;

  return 0;
}