#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> strings;

// void addString() {
// }
// void addString(std::string str) {
// strings.push_back(str);
// }
// template<class T>
// void addString(T str, T... strs) {
// strings.push_back(str);
// addString(strs);
// }


void print() {}

// template <std::string T, std::string... Types> 
// void print(T var1, Types... var2) 
// { 
  // std::cout << var1 << '\n'; 
// 
  // print(var2...) ; 
// } 

void print(int val, int... vals)
{
  std::cout << val << '\n';
  print(vals);
}


int main()
{
  // print(std::string("hey"), std::string("there"));
  
  print(1,2,3,4,5);

  // addString("hey", "there", "everyone");
}
