#include <iostream>
using namespace std;
int main() {
  int sequence, num;
  int sum = 0;
  int limit = 0;

  cout << "Enter the sequence: ";
  cin >> sequence;
  while (sequence > limit) {
    cout << "Enter the num: ";
    cin >> num;
    sum += num;
    limit++;
  }
  int Ave = sum / sequence;
  cout << Ave;

  return 0;
}
