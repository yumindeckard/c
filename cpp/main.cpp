#include <iostream>

class Clock {
 private:
  int min;

 public:
  void setMin(int newM) {
    min = newM;
  };

  void showMin() {
    std::cout << min << std::endl;
  };
};

int main(int argc, char const *argv[]) {
  std::cout << "Hello world Cpp" << std::endl;
  Clock clock;
  clock.setMin(5);
  clock.showMin();
  return 0;
}
