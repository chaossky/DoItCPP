#include <iostream>

using namespace std;

template<typename doll>
void find_doll(doll doll_name) {
  cout << "'" << doll_name << "'(��)�� ";
}

template<typename doll, typename... dolls>
void find_doll(doll doll_name, dolls... doll_list) {
  find_doll(doll_list...);
  cout << "'" << doll_name << "' ���ʿ� ";
}

int main() {
  cout << "ù��° ��Ʈ���ī ";
  find_doll("����", "����", "����");
  cout << "�ֽ��ϴ�." << endl << endl;
  
  cout << "�ι�° ��Ʈ���ī ";
  find_doll("Ư����", "����", "����", "����", "�ؼ���");
  cout << "�ֽ��ϴ�." << endl;

  return 0;
}