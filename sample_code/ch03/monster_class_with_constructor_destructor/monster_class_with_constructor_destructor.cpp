#include <iostream>
#include <random>
using namespace std;

class character {
public:
  character(){
    cout << "character Ŭ���� ������" << endl;
  };
  ~character() {
    cout << "charactor Ŭ���� �Ҹ���" << endl;
  }
};

class monster {
public:
  monster() {
    cout << "monster Ŭ���� ������" << endl;
  };
  virtual ~monster() {
  //~monster() {
    cout << "monster Ŭ���� �Ҹ���" << endl;
  };
};

//���� A�� �⺻ Monster Ŭ�����κ��� ���
//class monster_a : public monster, character {
class monster_a : public monster {
public:
  //monster_a() {
   monster_a() : monster_a(10, 10) {
    //cout << this << " monster_a Ŭ���� ������" << endl;
    cout << "monster_a Ŭ���� ������" << endl;
    //monster_a(10, 10);
  };

  monster_a(int x, int y) : location{x, y} {
    //cout << this << " monster_a Ŭ���� ������ (���� �߰�)" << endl;
    cout << "monster_a Ŭ���� ������ (���� �߰�)" << endl;
  };
  virtual ~monster_a() {
  //~monster_a() {
    //cout << this << " monster_a Ŭ���� �Ҹ���" << endl;
    cout << "monster_a Ŭ���� �Ҹ���" << endl;
  }

  void show_location() {
    //cout << this << " ��ġ(" << location[0] << " , " << location[1] << ")" << endl;
    cout << "��ġ(" << location[0] << " , " << location[1] << ")" << endl;
  };

private:
  int location[2];
};

int main() {
  //character player;

  //monster_a forest_monster;
  //forest_monster.show_location();

  //monster_a wood_monster(10, 25);
  //wood_monster.show_location();

  monster *forest_monster = new monster_a();
  delete forest_monster;
  return 0;
}