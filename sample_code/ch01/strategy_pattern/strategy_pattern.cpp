#include <iostream>

class engine {
public:
  virtual void start_engine() = 0;
  virtual void what_is_your_type() = 0;
};

class gs_engine : public engine {
public:
  void what_is_your_type() override { std::cout << "���ָ� ����" << std::endl; };
  void start_engine() override { what_is_your_type(); };
};

class elec_engine : public engine {
public:
  void what_is_your_type() override { std::cout << "���� ���� "; };
  void start_engine() override { 
    what_is_your_type();
    start_motor(); 
  }
private:
  void start_motor() { std::cout << ": ���� ����" << std::endl; };
};

class lpg_engine : public engine {
public:
  void what_is_your_type() override { std::cout << "LPG ����" << std::endl; };
  void start_engine() override { what_is_your_type(); };
};

class car {
public:
  car(engine& engine_type) : my_engine(engine_type) {};
  void set_engine(engine& engine_type) { my_engine = engine_type; };
  void start_car() {  my_engine.start_engine(); }

private:
  engine& my_engine;
};

int main() {
  gs_engine engine_gasoline;
  lpg_engine engine_lpg;
  elec_engine engine_electronics;
  
  car car_1(engine_gasoline);
  car car_2(engine_lpg);
  car car_3(engine_electronics);

  // ���ָ� �������� ������ �� �õ�
  car_1.start_car();

  // LPG �������� ������ �� �õ�
  car_2.start_car();

  // ���� �������� ������ �� �õ�
  car_3.start_car();
 
  return 0;
}