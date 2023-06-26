#include <iostream>

int main() {
  std::cout<<"Speed:"<<std::endl;
  bool fast = false;

  int speed = fast ? 300 : 150; // 150

  std::cout<<speed<<std::endl;
  return 0;
}