#include <iostream>
#include <numbers>

using namespace std;
using namespace std::numbers;

int main() {
  cout.precision(20);
  cout << "���� ��� ���" << endl
    << "�ڿ���� e : " << e << endl
    << "�ڿ��α�2 ln2 : " << ln2 << endl
    << "�ڿ��α�10 ln10 : " << ln10 << endl
    << "����2�� �α� log2 : " << log2e << endl
    << "����10�� �α� log10 :" << log10e << endl
    << "������ : " << pi << endl
    << "��Ʈ 2 : " << sqrt2 << endl
    << "��Ʈ 3 : " << sqrt3 << endl
    << "���Ϸ�-�����ɷδ� ��� :" << egamma << endl
    << "Ȳ�ݺ� : " << phi << endl;
  return 0;
}