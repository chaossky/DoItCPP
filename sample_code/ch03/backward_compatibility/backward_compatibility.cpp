#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class file_reader_original {
public:
  static int read_header();
  static file_reader_original* get_reader_instance();
  virtual void read_contents() = 0;
};

  

int file_reader_original::read_header() {
  // v1.0 �̶�� ����
  //return 1;

  // v2.0 �̶�� ����
  return 2;
}
  
class file_reader_v0100 : public file_reader_original {
private:
  virtual void read_contents() override;
};

void file_reader_v0100::read_contents() {
  cout << "v1.0 ���� ���� �б�" << endl;
}

class file_reader_v0200 : public file_reader_original {
public:
  virtual void read_contents() override;
};

void file_reader_v0200::read_contents() {
  cout << "v2.0 ���� ���� �б�" << endl;
}

int main(void) {

  file_reader_original* reader = nullptr;

  reader = file_reader_original::get_reader_instance();
  if (nullptr != reader) {
    reader->read_contents();
    delete reader;
  }

  return 0;
}