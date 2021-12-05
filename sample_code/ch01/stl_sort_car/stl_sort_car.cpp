#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

map<string, int> color_priority;
map<string, int> model_priority;

const string white_color("���");
const string blue_color("�Ķ���");
const string red_color("������");
const string gray_color("ȸ��");

const string grace_model("���� ��");
const string soft_model("�ε巯�� ��");
const string young_model("���� ��");
const string generation_model("���� ��");
const string beautiful_model("���� ��");

const string new_gen_brand("�Ž� ȸ��");
const string elec_brand("���� �߸���");

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

void init_car_list(vector<car_model>& car_list)
{
  car_list.push_back(car_model(new_gen_brand, beautiful_model, white_color));
  car_list.push_back(car_model(new_gen_brand, grace_model, white_color));
  car_list.push_back(car_model(new_gen_brand, generation_model, gray_color));
  car_list.push_back(car_model(elec_brand, soft_model, red_color));
  car_list.push_back(car_model(elec_brand, young_model, blue_color));
}

void init_color_priority()
{
  color_priority[white_color] = 1;
  color_priority[blue_color] = 3;
  color_priority[red_color] = 4;
  color_priority[gray_color] = 2;
}

void init_model_priority()
{
  model_priority[grace_model] = 1;
  model_priority[soft_model] = 5;
  model_priority[young_model] = 2;
  model_priority[generation_model] = 4;
  model_priority[beautiful_model] = 3;
}

void print_car_list(vector<car_model>& car_list)
{
  for (auto& car : car_list) {
    cout << "[" << car.get_brand() << "] ȸ���� "
      << "\"" << car.get_model() << "\" �� "
      << "'" << car.get_color() << "'�Դϴ�."
      << endl;
  }
  cout << endl;
}

bool compare_color(car_model car_1, car_model car_2)
{
  return color_priority[car_1.get_color()] < color_priority[car_2.get_color()];
}

bool compare_model(car_model car_1, car_model car_2)
{
  return model_priority[car_1.get_model()] < model_priority[car_2.get_model()];
}
int main(void)
{
  vector<car_model> car_list;

  init_color_priority();
  init_model_priority();
  init_car_list(car_list);
  print_car_list(car_list);

  sort(car_list.begin(), car_list.end(), compare_color);
  print_car_list(car_list);

  sort(car_list.begin(), car_list.end(), compare_model);
  print_car_list(car_list);

  sort(car_list.begin(), car_list.end(), compare_color);
  print_car_list(car_list);
    
  return 0;
}