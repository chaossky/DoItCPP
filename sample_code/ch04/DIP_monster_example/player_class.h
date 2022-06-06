#pragma once
#include "interface.h"
#include "base_classes.h"

//character Ŭ������ ��� ���� player Ŭ����
class player : public character, public IRoute {
public:
  virtual void find_route(int x, int y) override;
  virtual void set_location(int x, int y) override;
  virtual int get_location(bool x) override;
private:
  int location_x;
  int location_y;
};

class npc_object : public IRoute {
public:
  virtual void find_route(int x, int y) override;
  virtual void set_location(int x, int y) override;
  virtual int get_location(bool x) override;
private:
  int location_x;
  int location_y;
};