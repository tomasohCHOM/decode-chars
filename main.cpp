#include <iostream>
#include <cmath>


// Function that converts a numerical string to an integer
int convertToInt(std::string num_as_string) {
  int n = num_as_string.size();
  int res = 0;
  for (int i = 0; i < n; ++i) {
    res += (num_as_string[i] - '0') * pow(10, n - 1);
    --n;
  }
  return res;
}

// Sample input: "B1c2d1l3"
// Sample output: "Bccdlll"
std::string decode(std::string str) {
  std::string output = "";
  for (int i = 0; i < str.size(); ++i) {
    int count = 0;
    char c;

    if (str[i] >= '0' && str[i] <= '9') {
      c = str[i - 1];
      std::string num_as_string = "";

      while (str[i] >= '0' && str[i] <= '9') {
        num_as_string += str[i];
        ++i;
      }

      count = convertToInt(num_as_string);
    }

    for (int j = 0; j < count; ++j) {
      output.push_back(c);
    }
  }
  return output;
}

int main() {
  // std::cout << convertToInt("123");
  std::cout << decode("a4b5c2") << std::endl;
  std::cout << decode("h1A6b12") << std::endl;
  std::cout << decode("d11") << std::endl;
  std::cout << decode("B1c2d1l3") << std::endl;
  std::cout << decode("d11") << std::endl;
  std::cout << decode("") << std::endl;
  return 0;
}