#include <iostream>
#include <memory>

using namespace std;

class class_object {
public:
  class_object() {
    cout << "�޸𸮰� �Ҵ� �Ǿ����ϴ�." << endl;
  };
  ~class_object() {
    cout << "�޸𸮰� ���� �Ǿ����ϴ�." << endl;
  }
};

int main() {
  unique_ptr<class_object> unique_pointer(new class_object());
  return 0;
}