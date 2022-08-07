#include "monster_class.h"
#include "base_classes.h"
#include "terrain_class.h"
#include "const_string.h"
#include "const_int.h"
#include <random>

using namespace std;

int monster::calculate_distance(int x, int y) {
  return (int)sqrt(pow(x - get_location(true), 2) + pow(y - get_location(false), 2));
}

void monster::depence_strike_back(void* target_player) {
  player* target_player_inst = (player*)target_player;
  IWeapon* weapon = (IWeapon*)target_player_inst->get_weapon();
  IRiding_object* riding_object = (IRiding_object*)target_player_inst->get_riding_object();
  if (nullptr == weapon) {
    return;
  }

  if (weapon->is_bullet_empty()) {
    weapon->reload_bullet();
  }
  weapon->shoot_weapon(this);

  if (riding_object->check_energy() > 10) {
    riding_object->set_destination(get_location(true) + 30, get_location(false) + 30);
    riding_object->run_to_destination();
  }
}

void monster_a::attack_special(void* target_player) {
  cout << "���ޱ� ���� : ������ - 15 hp" << endl;
  depence_strike_back(target_player);
}

void monster_a::find_route(int x, int y) {
  cout << "Ÿ�� ã�� ���� - �ִ� �Ÿ� �켱" << endl;
}

bool monster_a::attach_target(void* target_player) {
  player* target = (player*)target_player;
  if (calculate_distance(target->get_location(true), target->get_location(false)) < 30) {
    this->target_player = (character*)target_player;
    cout << "�ڵ��� ���鼭 �÷��̾� �Ѿ� ����" << endl;
    return true;
  }

  return false;
}

void monster_a::check_target(void* target_player) {
  player* target = (player*)target_player;
  if (target->get_hp() < 40) {
    attack_special(target_player);
    return;
  }
}

void monster_b::attack_special(void* target_player) {
  cout << "���� ���� : ������ - 0 hp" << endl;
  depence_strike_back(target_player);
}

void monster_b::find_route(int x, int y) {
  cout << "Ÿ�� ã�� ���� - �ּ� �ð� �켱" << endl;
}

bool monster_b::attach_target(void* target_player) {
  player* target = (player*)target_player;
  if (calculate_distance(target->get_location(true), target->get_location(false)) > 30) {
    this->target_player = (character*)target_player;
    cout << "��ġ ������ ���ؼ� ã�� ����" << endl;
    return true;
  }

  return false;
}

void monster_b::check_target(void* target_player) {
  player* target = (player*)target_player;
  if (target->get_hp() < 10) {
    attack_special(target_player);
    return;
  }
}

void monster_c::attack_special(void* target_player) {
  cout << "���� ���� ���� : ������ - 100 hp" << endl;
  depence_strike_back(target_player);
}

void monster_c::find_route(int x, int y) {
  cout << "Ÿ�� ã�� ���� - Ÿ�� �ü��� ������ �ʵ���" << endl;
}

bool monster_c::attach_target(void* target_player) {
  this->target_player = (character*)target_player;
  cout << "���� ��� ������ ����" << endl;
  return true;
}

void monster_c::check_target(void* target_player) {
  attack_special(target_player);
}

