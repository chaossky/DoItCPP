#include <iostream>

using namespace std;
const int loop_count = 5;
const int change_count = 5;

int main() {
  int payments[loop_count] = { 1000, 500, 15000, 1000, 200 };
  int price[loop_count] = { 450, 390, 11340, 900, 150 };
  int changes[change_count] = { 0, };

  for (int i = 0; i < loop_count; ++i) {
    cout << payments[i] << "���� ���� " << price[i] << "�� ¥�� ���Ḧ �����߽��ϴ�." << endl;
    cout << "�Ž��� ���� ���� " << [&changes](int payment, int price)->int {
      int change = payment - price;
      changes[0] = change / 1000;
      change %= 1000;
      changes[1] = change / 500;
      change %= 500;
      changes[2] = change / 100;
      change %= 100;
      changes[3] = change / 50;
      change %= 50;
      changes[4] = change / 10;
      return payment - price;
    }(payments[i], price[i]) << "�Դϴ�." << endl;
    cout << "õ�� ¥�� " << changes[0] << "��, ����� ¥�� " << changes[1] << "��, ��� ¥�� " << changes[2] << "��, ";
    cout << "���ʿ� ¥�� " << changes[3] << "��, �ʿ� ¥��" << changes[4] << "���� �޽��ϴ�." << endl;
  }

  auto calcu_changes = [&changes](int payment, int price)->int {
    int change = payment - price;
    changes[0] = change / 1000;
    change %= 1000;
    changes[1] = change / 500;
    change %= 500;
    changes[2] = change / 100;
    change %= 100;
    changes[3] = change / 50;
    change %= 50;
    changes[4] = change / 10;
    return payment - price;
  };

  cout << "--------------------------------------------------------------------" << endl;

  for (int i = 0; i < loop_count; ++i) {
    cout << payments[i] << "���� ���� " << price[i] << "�� ¥�� ���Ḧ �����߽��ϴ�." << endl;
    cout << "�Ž��� ���� ���� " << calcu_changes(payments[i], price[i]) << "�Դϴ�." << endl;
    cout << "õ�� ¥�� " << changes[0] << "��, ����� ¥�� " << changes[1] << "��, ��� ¥�� " << changes[2] << "��, ";
    cout << "���ʿ� ¥�� " << changes[3] << "��, �ʿ� ¥��" << changes[4] << "���� �޽��ϴ�." << endl;
  }

  return 0;
}