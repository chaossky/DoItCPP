#include <iostream>
using namespace std;

//�⺻ Monster Ŭ����
class monster {
public:
  monster();
  //~monster();
  virtual ~monster();
private:
  int* dummy;
};

monster::monster() {
  cout << "monster() ������ ȣ��" << endl; 
  dummy = new int;
}

monster::~monster() { 
  cout << "~monster() �Ҹ��� ȣ��" << endl;
  delete dummy;
}

//���� A�� �⺻ Monster Ŭ�����κ��� ���
class monster_a : public monster{
public:
  monster_a();
  //~monster_a();
  virtual ~monster_a();
private:
  int* dummy_a;
};

monster_a::monster_a() { 
  cout << "monster_a() ������ ȣ��" << endl;
  dummy_a = new int;
}

monster_a::~monster_a() { 
  cout << "~monster_a() �Ҹ��� ȣ��" << endl; 
  delete dummy_a;
}

int main() {
  // �ڽ� Ŭ���� ������ ����
  //monster_a* mon = new monster_a();

  // �θ� Ŭ������ �������� �Ͽ� ����
  monster* mon = new monster_a();

  delete mon;
  return 0;
}