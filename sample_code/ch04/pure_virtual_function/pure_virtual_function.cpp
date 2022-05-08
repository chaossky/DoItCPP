#include <iostream>
#include <list>
using namespace std;

class character {
public:
  character() : hp(100), power(100)
  {};
  void get_damage(int _damage) {};

protected:
  int hp;
  int power;
};

//Player Ŭ����
class player : public character {
public:
  player() {};
};

//�⺻ Monster Ŭ����
class monster {
public:
  monster() {};
  void attack(player target_player) {};
  virtual void attack_special(player target_player);
  virtual void attack_at_dawn() = 0;
};

void monster::attack_special(player target_player) {
  cout << "�⺻ ���� : ������ - 10 hp" << endl;
}

//���� A�� �⺻ Monster Ŭ�����κ��� ���
class monster_a : public monster, character {
public:
  //��ӹ��� �Լ� �������̵� 
  virtual void attack_special(player target_player) override;
  virtual void attack_at_dawn() override;
};

void monster_a::attack_at_dawn() {
  cout << "���ʿ��� ���!" << endl;
}

void monster_a::attack_special(player target_player) {
  cout << "���ޱ� ���� : ������ - 15 hp" << endl;
}

//���� B�� �⺻ Monster Ŭ�����κ��� ���
class monster_b : public monster, character {
public:
  //��ӹ��� �Լ� �������̵�
  virtual void attack_special(player target_player) override;
  virtual void attack_at_dawn() override;
};

void monster_b::attack_special(player target_player) {
  cout << "���� ���� : ������ - 0 hp" << endl;
}

void monster_b::attack_at_dawn() {
  cout << "������ ������ ħ���Ͽ� ��ȭ!" << endl;
}

//���� C�� �⺻ Monster Ŭ�����κ��� ���
class monster_c : public monster, character {
public:
  //��ӹ��� �Լ� �������̵�
  virtual void attack_special(player target_player) override;
  virtual void attack_at_dawn() override;
};

void monster_c::attack_special(player target_player) {
  cout << "���� ���� ���� : ������ - 100 hp" << endl;
}

void monster_c::attack_at_dawn() {
  cout << "���ʿ��� ������ ���� ���� �߻�!" << endl;
}

int main() {
  list<monster*> mon_list;

  monster_a first_monster;
  mon_list.push_back(&first_monster);

  monster_b second_monster;
  mon_list.push_back(&second_monster);

  monster_c third_monster;
  mon_list.push_back(&third_monster);

  for (auto item : mon_list) {
    item->attack_at_dawn();
  }
  
  return 0;
}