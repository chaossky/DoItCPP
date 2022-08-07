#include "terrain_class.h"

bool forest_terrain::allocate_monster(monster* mon) {
  if (monster_a_type == mon->get_monster_type()) {
    update_monster_list(mon);
    cout << "Monster A�� ���� ��ġ �մϴ�." << endl;
    return true;
  }

  return false;
}

void forest_terrain::bost_monster(monster* mon) {
  if (monster_a_type == mon->get_monster_type()) {
    mon->increase_power(30);
    cout << "����A�� �������� ���� �� ���� ���ϴ�." << endl;
  }
}

bool cyber_terrain::allocate_monster(monster* mon) {
  update_monster_list(mon);
  cout << "��� ������ Monster�� ���̹� ������ ��ġ �մϴ�." << endl;
  return true;
}

void cyber_terrain::bost_monster(monster* mon) {
  mon->increase_hp(20);
  cout << "��� ���Ͱ� ���̹� ���������� ü���� �ö󰩴ϴ�." << endl;
}

bool urban_terrain::allocate_monster(monster* mon) {
  if (monster_a_type != mon->get_monster_type()) {
    update_monster_list(mon);
    cout << "Monster B, C�� ���ɿ� ��ġ �մϴ�." << endl;
    return true;
  }

  return false;
}

void urban_terrain::bost_monster(monster* mon) {
  if (monster_c_type == mon->get_monster_type()) {
    mon->increase_power(10);
    cout << "Monster C�� ���ɿ� ���� ���� ���ϴ�." << endl;
  }
}

void terrain::update_monster_list(monster* mon) {
  mon_list.push_back(mon);
}

bool terrain::check_terrain_area(int x, int y) {
  if (x >= start_location_x && x <= end_location_x) {
    if (y >= start_location_y && y <= end_location_y) {
      return true;
    }
  }

  return false;
}
