#include <iostream>
using namespace std;

class character {
public:
  character() : hp(100), power(100)
  {};

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
  void get_damage(int _damage) {};
  void attack(player target_player) {};
  virtual void attack_special(player target_player);
};

void monster::attack_special(player target_player) {
  cout << "�⺻ ���� : ������ - 10 hp" << endl;
}

//���� A�� �⺻ Monster Ŭ�����κ��� ���
class monster_a : public monster, character {
public:
  //��ӹ��� �Լ� �������̵� 
  virtual void attack_special(player target_player) override;
};

void monster_a::attack_special(player target_player) {
  cout << "���ޱ� ���� : ������ - 15 hp" << endl;
}

//���� B�� �⺻ Monster Ŭ�����κ��� ���
class monster_b : public monster, character {
public:
  //��ӹ��� �Լ� �������̵�
  virtual void attack_special(player target_player) override;
};

void monster_b::attack_special(player target_player) {
  cout << "���� ���� : ������ - 0 hp" << endl;
}

//���� C�� �⺻ Monster Ŭ�����κ��� ���
class monster_c : public monster, character {
public:
  //��ӹ��� �Լ� �������̵�
  virtual void attack_special(player target_player) override;
};

void monster_c::attack_special(player target_player) {
  cout << "���� ���� ���� : ������ - 100 hp" << endl;
}

int main() {
  player player_1;

  monster_a forest_monster;
  
  monster& mon = forest_monster;
  monster_a& mon_a = forest_monster;

  cout << endl << "�θ� Ŭ���� ���۷��� �� ����" << endl;
  mon.attack_special(player_1);

  cout << endl << "�ڽ� Ŭ���� ���۷��� �� ����" << endl;
  mon_a.attack_special(player_1);

  cout << endl << "���� ������ Ȱ�� ����" << endl;
  mon_a.monster::attack_special(player_1);

  return 0;
}