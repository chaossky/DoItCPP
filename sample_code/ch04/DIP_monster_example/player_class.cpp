#include "player_class.h"

void player::find_route(int x, int y) {
}

void player::set_location(int x, int y) {
  location_x = x;
  location_y = y;
}

int player::get_location(bool x) {
  if (x) {
    return location_x;
  }

  return location_y;
}

void npc_object::find_route(int x, int y) {
  cout << "������ ���������� ���� �ٴϱ�." << endl;
}

void npc_object::set_location(int x, int y) {
  location_x = x;
  location_y = y;
}

int npc_object::get_location(bool x) {
  if (x) {
    return location_x;
  }

  return location_y;
}