#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> l;
  int k, i = 0;

  cin >> k;

  list<int>::iterator it1;
  list<int>::iterator it2 = l.begin();

  for (it1 = l.begin(); it1 != l.end(); ++it1) {
    if (i++ == k) break;
  }

  if (i - 1 != k) cout << "error" << endl;

  while (true) {
    if (++it1 == l.end()) {
      cout << "k-th : " << *it2 << endl;
      break;
    }
    ++it2;
  }

  return 0;
}

