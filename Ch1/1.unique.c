#include <stdio.h>
#include <string.h>

int a[26];

int main() {
  char str[100];
  int flag = 0;

  scanf("%s", str);

  for (int i = 0; i < strlen(str); ++i) {
    a[str[i] - 'a']++;
  }

  for (int i = 0; i < 26; ++i) {
    if (a[i] > 1)
      printf("True\n"); break;
  }

  return 0;
}
