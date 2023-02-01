#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int alpha = 65;
  int num = 0;
  // upside pyramid
  for (int i = 1; i <= size; i++) {
    // printing spaces
    for (int j = size; j > i; j--) {
      cout << " ";
    }
    // printing alphabets
    for (int k = 0; k < i * 2 - 1; k++) {
      if (k == 0 || k == 2 * i - 2) {
        cout << ((char)(alpha+num++));
      } else {
        cout << " ";
      }
    }
    // set the number to 0
    num = 0;
    cout << "\n";
  }
  // downside triangle
  for (int i = 1; i < size; i++) {
    // printing spaces
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    // printing alphabets
    for (int k = (size - i) * 2 - 1; k >= 1; k--) {
      if (k == 1 || k == (size - i) * 2 - 1) {
        cout << ((char)(alpha+num++));
      } else {
        cout << " ";
      }
    }
    // set the number to 0
    num = 0;
    cout << "\n";
  }
  return 0;
}