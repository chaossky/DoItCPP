#include "terrain_class.h"

void forest_terrain::allocate_monster(monster* mon) {
  if (monster_a_type == mon->get_monster_type()) {
    update_monster_list(mon);
    cout << "Monster A�� ���� ��ġ �մϴ�." << endl;
  }
}

void forest_terrain::bost_monster(monster* mon) {
  if (monster_a_type == mon->get_monster_type()) {
    cout << "����A�� �������� ���� �� ���� ���ϴ�." << endl;
  }
}

void cyber_terrain::allocate_monster(monster* mon) {
  update_monster_list(mon);
  cout << "��� ������ Monster�� ���̹� ������ ��ġ �մϴ�." << endl;
}

void cyber_terrain::bost_monster(monster* mon) {
  cout << "��� ���Ͱ� ���̹� ���������� �ӵ��� ���� ���ϴ�." << endl;
}

void urban_terrain::allocate_monster(monster* mon) {
  if (monster_a_type != mon->get_monster_type()) {
    update_monster_list(mon);
    cout << "Monster B, C�� ���ɿ� ��ġ �մϴ�." << endl;
  }
}

void urban_terrain::bost_monster(monster* mon) {
  if (monster_c_type == mon->get_monster_type()) {
    update_monster_list(mon);
    cout << "Monster C�� ���ɿ� ���� ���� ���ϴ�." << endl;
  }
}

void terrain::update_monster_list(monster* mon) {
  mon_list.push_back(mon);
}
