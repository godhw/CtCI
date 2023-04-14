#include <stdio.h>
#include <string.h>

char s1[100];
char s2[100];

int findSol() {
  char *str1;
  char *str2;
  int str1len, str2len, idx1, idx2, flag;

  if (strlen(s1) == strlen(s2)) {
    str1 = s1;
    str2 = s2;
  } else if (strlen(s1) + 1 == strlen(s2)) {
    str1 = s2;
    str2 = s1;
  } else if (strlen(s1) - 1 == strlen(s2)) {
    str1 = s1;
    str2 = s2;
  } else {
    return 0;
  }
  str1len = strlen(str1);
  str2len = strlen(str2);
  idx1 = 0;
  idx2 = 0;
  flag = 0;

  while (idx1 < str1len && idx2 < str2len) {
    if (str1[idx1] != str2[idx2]) {
      if (flag) return 0;
      flag = 1;
      if (str1len != str2len) {
        idx1++;
        continue;
      }
    }
    idx1++;
    idx2++;
  }

  return 1;
}

int main() {

  scanf("%s", s1);
  scanf("%s", s2);

  if (findSol())
    printf("True\n");
  else
    printf("False\n");

  return 0;
}
