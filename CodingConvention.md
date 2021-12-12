# Do It! C++ �Թ� Coding Convention
**Do It! C++ �Թ�**���� ���� ���� �ҽ� �ڵ忡 ����� Conding Convention�� �����ϴ� ������ �Դϴ�.
## Naming Rule
�������� �ۼ��� ���� �ҽ� �ڵ�� STLȰ���� ���� ������ STL Naming Rule�� �����ϴ�.

STL�� Naming Rule�� ***snake_case***�� ����մϴ�. ���� ���������� ��� ���� �ڵ忡���� ***snake_case***�� ����մϴ�. �׸��� ��� ��ũ�� �� C��� ��Ģ�� ����� ��� ***SCREAMING_SNAKE_CASE***�� ����մϴ�.
### *snake_case*

- ����
~~~cpp
const string new_gen_brand("�Ž� ȸ��");
const string elec_brand("���� �߸�");

class car_model {
public:
  car_model(string brand, string model, string color) 
    : brand_name(brand), model_name(model), color_name(color)
  {};

  string get_brand() { return brand_name; };
  string get_model() { return model_name; };
  string get_color() { return color_name; };

private:
  string brand_name;
  string model_name;
  string color_name;
};
~~~
### *SCREAMING_SNAKE_CASE*

- ����
~~~cpp
#define NEW_GEN_BRAND   "�Ž� ȸ��"
#define ELEC_BRAND      "���� �߸�"
~~~