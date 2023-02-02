#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int num = 1;
  // upside pyramid
  for (int i = 1; i <= size; i++) {
    // printing spaces
    for (int j = size; j > i; j--) {
      cout << " ";
    }
    // printing number
    for (int k = 0; k < i * 2 - 1; k++) {
      cout << num++;
    }
    // set the number to 1
    num = 1;
    cout << "\n";
  }
  // downside pyramid
  for (int i = 1; i <= size - 1; i++) {
    // printing spaces
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    // printing number
    for (int k = (size - i) * 2 - 1; k > 0; k--) {
      cout << num++;
    }
    // set num to 1
    num = 1;
    cout << "\n";
  }
  return 0;
}