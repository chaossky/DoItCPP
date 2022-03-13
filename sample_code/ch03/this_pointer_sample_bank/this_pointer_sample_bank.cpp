#include <iostream> 

using namespace std;

class bank {
private:
  int safe; //�ݰ� 

public:
  bank() { safe = 0; };                 //�⺻ ������  
  ~bank() {};
  void use_counter(int _in, int _out);  //����� â�� �Լ� 
  void transfer_account(int safe);      // ���� ���� �Լ�
  bank& deposit_interest(int interest); // ���� �Ա�
  bank& withdraw_utility(int utility);  // ������ ���
  bank& withdraw_tax(int tax);          // ���� ���
  int get_safe() { return safe; };      // �ݰ� �ݾ� ��ȯ
};

void bank::use_counter(int _in, int _out) {
  safe += _in;
  safe -= _out;
}

void bank::transfer_account(int safe) {
  this->safe = safe;
}

bank& bank::deposit_interest(int interest) {
  safe += interest;
  return *this;
}

bank& bank::withdraw_utility(int utility) {
  safe -= utility;
  return *this;
}

bank& bank::withdraw_tax(int tax) {
  safe -= tax;
  return *this;
}

int main() {
  bank rich_bank, global_bank, new_bank;
  rich_bank.use_counter(10, 10);
  global_bank.use_counter(20, 5);

  new_bank.transfer_account(global_bank.get_safe());
  cout << "New bank account total: " << new_bank.get_safe() << endl;
  
  new_bank.deposit_interest(10).withdraw_utility(1).withdraw_tax(2);
  cout << "New bank account total: " << new_bank.get_safe() << endl;
  
  return 0;
}
