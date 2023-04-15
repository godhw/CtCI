#include <stdio.h>
#include <string.h>

int isRotation(const char *a, const char *b) {
  if (strlen(a) != strlen(b) || strlen(a) == 0) return 0;

  int len = strlen(a);
  char aa[len * 2 + 1];
  aa[len * 2] = 0;
  int idx = 0;

  for (int i = 0; i < len * 2; ++i) {
    aa[i] = a[i % len];
  }

  for (int i = 0; i < len * 2; ++i) {
    if (idx == len) return 1;
    if (b[idx] != aa[i]) {
      idx = 0;
      continue;
    }

    idx++;
  }
  return 0;
}

int main() {
  char a[100];
  char b[100];
  scanf("%s", a);
  scanf("%s", b);

  if (isRotation(a, b)) printf("True\n");
  else printf("False\n");
  return 0;
}
