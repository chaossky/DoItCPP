#include "riding_object.h"
#include <iostream>

using namespace std;

int car::check_energy() {
  cout << "���� üũ" << endl;
  return 30;
}

void car::set_destination(int x, int y) {
}

void car::run_to_destination() {
  cout << "�θ�������" << endl;
}

int horse::check_energy() {
  cout << "ü�� üũ" << endl;
  return 30;
}

void horse::set_destination(int x, int y) {
}

void horse::run_to_destination() {
  cout << "�ٱ״� �ٱ״�" << endl;
}

int motor_cycle::check_energy() {
  cout << "���� üũ" << endl;
  return 30;
}

void motor_cycle::set_destination(int x, int y) {
}

void motor_cycle::run_to_destination() {
  cout << "�δٴٴٴ�" << endl;
}