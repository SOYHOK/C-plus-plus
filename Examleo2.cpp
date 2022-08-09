#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  for (int i = 0; i < 5; i++)
    cout << rand() % 10 << "\t"; // generate number between[0,9]
  return 0;
}
