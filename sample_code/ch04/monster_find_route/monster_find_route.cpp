#include <iostream>
#include <list>
using namespace std;

class character {
public:
  character() : hp(100), power(100) {};

protected:
  int hp;
  int power;
};

//character Ŭ������ ��� ���� player Ŭ����
class player : public character {
public:
  player() {};
};

//�߻� Ŭ���� Monster
class monster {
public:
  monster();
  virtual ~monster();
  virtual void find_route() = 0;
  virtual void attack_special(player target_player) = 0;
};

monster::monster() {
  cout << "Monster �θ� Ŭ���� ������" << endl;
}

monster::~monster() {
  cout << "Monster �θ� Ŭ���� �Ҹ���" << endl;
}

//���� A�� �߻� Ŭ���� Monster Ŭ�����κ��� ���
class monster_a : public monster {
public:
  virtual void attack_special(player target_player) override;
  virtual void find_route() override;
};

void monster_a::attack_special(player target_player) {
  cout << "���ޱ� ���� : ������ - 15 hp" << endl;
}

void monster_a::find_route() {
  cout << "���� �켱 Ž��(DFS)" << endl;
}

//���� B�� �߻� Ŭ���� Monster Ŭ�����κ��� ���
class monster_b : public monster {
public:
  virtual void attack_special(player target_player) override;
  virtual void find_route() override;
};

void monster_b::attack_special(player target_player) {
  cout << "���� ���� : ������ - 0 hp" << endl;
}


void monster_b::find_route() {
  cout << "�ʺ� �켱 Ž��(BFS)" << endl;
}


//���� C�� �߻� Ŭ���� Monster Ŭ�����κ��� ���
class monster_c : public monster {
public:
  virtual void attack_special(player target_player) override;
  virtual void find_route() override;
};

void monster_c::attack_special(player target_player) {
  cout << "���� ���� ���� : ������ - 100 hp" << endl;
}


void monster_c::find_route() {
  cout << "���ͽ�Ʈ�� �ִ� ��� �˰���" << endl;
}

void monster_routine(monster* mon, player target_player) {
  mon->find_route();
  mon->attack_special(target_player);
}

int main() {
  list<monster*> mon_list;
  monster_a first_mon;
  monster_b second_mon;
  monster_c third_mon;
  player target_player;

  mon_list.push_back(&first_mon);
  mon_list.push_back(&second_mon);
  mon_list.push_back(&third_mon);

  for (auto mon : mon_list) {
    monster_routine(mon, target_player);
  }

  return 0;
}