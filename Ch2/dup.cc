#include <iostream>
#include <unordered_set>
#include <list>

using namespace std;

int main() {
  list<int> l;
  unordered_set<int> hash_table;

  for (int i = 0; i < 10; ++i) l.push_back(i);

  list<int>::iterator it = l.begin();

  for (; it != l.end(); ++it) {
    if(hash_table.find(*it) != hash_table.end()) {
      cout << "Find dup!" << endl;
    } else {
      hash_table.insert(*it);
    }
  }

  // No Buffer
  list<int>::iterator it2;

  for (it = l.begin(); it != l.end(); ) {
    for (it2 = ++it; it2 != l.end(); ++it2) {
      if (*it == *it2) cout << "Find dup!" << endl;
    }
  }


  return 0;
}
