#include <iostream>

using namespace std;

class monster {
public:
  void create_monster() = delete;
  //void create_monster_() {}; // delete ���� ������� �ʰ� ���ŵ� �Լ�
};

int main() {
  monster monster_sample;

  // TODO : ���� �޼����� ���� ���ؼ��� 15, 16 ��° ������ �ڸ�Ʈ�� ���� �ϼ���.
  //monster_sample.create_monster();
  //monster_sample.create_monster_();
  return 0;
}