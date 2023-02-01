#include <iostream>
using namespace std;

int main() {
  // right pascal triangle
  int size = 5;

  for (int i = 1; i <= size; i++) {
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  
  for (int i = 1; i <= size - 1; i++) {
    for (int j = 0; j < size - i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}