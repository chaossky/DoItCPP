#include <iostream>
#include "weapon.h"

using namespace std;

void gun::reload_bullet() {
  cout << "źâ ��ü" << endl;
}

bool gun::is_bullet_empty() {
  cout << "źâ�� ���� �Ѿ��� �ִ°�?" << endl;
  return true; // ���������� ���Ƿ� ����ٰ� ������
}

void gun::shoot_weapon(void* target_plaery) {
  cout << "\"��\"" << endl;
}

void machine_gun::reload_bullet() {
  cout << "���� źâ ��ü" << endl;
}

bool machine_gun::is_bullet_empty() {
  cout << "źâ�� ���� �Ѿ��� �ִ°�?" << endl;
  return true; // ���������� ���Ƿ� ����ٰ� ������
}

void machine_gun::shoot_weapon(void* target_plaery) {
  cout << "\"�εεεεε�\"" << endl;
}

void arrow::reload_bullet() {
  cout << "ȭ���� ä���" << endl;
}

bool arrow::is_bullet_empty() {
  cout << "ȭ������ �񿴴°�?" << endl;
  return true; // ���������� ���Ƿ� ����ٰ� ������
}

void arrow::shoot_weapon(void* target_plaery) {
  cout << "��������" << endl;
}