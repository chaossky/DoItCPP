#include <iostream>
#include <string>

using namespace std;

template <typename T>
T data_sum(T operand1, T operand2) {
  return operand1 + operand2;
}

int main() {
  int data1 = 3, data2 = 5;
  double data3 = 4.5, data4 = 8.9;
  string data5 = "Hello, ", data6 = "World!";
  char data7[] = "Hello, ", data8[] = "New World!";

  cout << "������ ������ ��: " << data_sum(data1, data2) << endl;
  cout << "�Ǽ��� ������ ��: " << data_sum(data3, data4) << endl;
  cout << "���ڿ� ������ ��: " << data_sum(data5, data6) << endl;

  // ����� �� ���� ���� ����
  //cout << "���ڵ����� �迭�� ��" << data_sum(data7, data8) << endl;
  cout << "���ڵ����� �迭�� ��: " << data_sum<string>(data7, data8) << endl;

  return 0;
}
