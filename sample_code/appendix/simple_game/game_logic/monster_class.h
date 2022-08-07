#pragma once
#include "interface.h"
#include "base_classes.h"
#include "player_class.h"

using namespace std;

//Monster �������̽�
class monster : public IRoute, public IAttack, public Icocos2d {
public:
  int get_monster_type() { return monster_type; };
  void increase_power(int increase_number) { monster_body.increase_power(increase_number); };
  void increase_hp(int increase_number) { monster_body.increase_hp(increase_number); };
  
  virtual void set_location(int x, int y) override { monster_body.set_location(x, y); };
  virtual int get_location(bool x) override { return monster_body.get_location(x); };
  virtual void set_sprite(void* sprite) override { monster_body.set_sprite((cocos2d::Sprite*)sprite); };

protected:
  int calculate_distance(int x, int y);
  void depence_strike_back(void* target_player);
  character* target_player = nullptr;
  int monster_type;
  character monster_body;

};

//���� A�� �߻� Ŭ���� Monster Ŭ�����κ��� ���
class monster_a : public monster {
public:
  monster_a() {
    monster_type = monster_a_type;
  };
  virtual void find_route(int x, int y) override;
  virtual bool attach_target(void* target_player) override;
  virtual void check_target(void* target_player) override;
  virtual void attack_special(void* target_player) override;
};


//���� B�� �߻� Ŭ���� Monster Ŭ�����κ��� ���
class monster_b : public monster {
public:
  monster_b() {
    monster_type = monster_b_type;
  };
  virtual void find_route(int x, int y) override;
  virtual bool attach_target(void* target_player) override;
  virtual void check_target(void* target_player) override;
  virtual void attack_special(void* target_player) override;
};


//���� C�� �߻� Ŭ���� Monster Ŭ�����κ��� ���
class monster_c : public monster {
public:
  monster_c() {
    monster_type = monster_c_type;
  };
  virtual void find_route(int x, int y) override;
  virtual bool attach_target(void* target_player) override;
  virtual void check_target(void* target_player) override;
  virtual void attack_special(void* target_player) override;
};



