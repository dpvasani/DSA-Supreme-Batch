#include <iostream>
using namespace std;

int main() {

  int size = 5;
  for (int i = 0; i < size; i++) {
    // print spaces
    for (int j = 0; j < size - i - 1; j++) {
      cout << " ";
    }
    // print number
    int num = 1;
    for (int k = 0; k < 2 * i + 1; k++) {
      if (i == 0 || i == size - 1) {
        cout << num++;
      } else {
        if (k == 0 || k == 2 * i) {
          cout << num++;
        } else {
          cout << " ";
        }
      }
    }
    cout << "\n";
  }
  return 0;
}