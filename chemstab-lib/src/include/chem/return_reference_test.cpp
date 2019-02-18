#include <iostream>
#include <string>


const std::string& toString() {
  std::string ret_val;
  ret_val = "hello!";
  ret_val += "4";
  return std::move(ret_val);
}

int main()
{

  std::string gotten = toString();
  std::cout << gotten << '\n';

}
