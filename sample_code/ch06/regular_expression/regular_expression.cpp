#include <iostream>
#include <regex>
#include <fstream>
#include <sstream>

using namespace std;

const string manifesto_file("../manifesto_for_agile_software_development.txt");

int main() {
  ifstream manifesto(manifesto_file);
  string manifesto_text;

  if (!manifesto.is_open()) {
    return -1;
  }

  //cout << "C�� �����ؼ� E�� N���� ������ '�ܾ�'�� ������ ���� ã��(��� ���� ����)" << endl;
  cout << "C�� �����ؼ� E�� N���� ������ '���ڿ�'�� ������ ���� ã��(��� ���� ����)" << endl;
  while (getline(manifesto, manifesto_text)) {
    //regex reg("\\sc[a-z]*[en]\\s", regex::icase);
    regex reg("c[a-z]*[en]", regex::icase);
    smatch match_results;
    if (regex_search(manifesto_text, match_results, reg)) {
      cout << "[ã��] : " << manifesto_text << " - " << match_results[0] << endl;
    }
  }
  return 0;
}