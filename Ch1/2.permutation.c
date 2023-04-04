#include <stdio.h>
#include <string.h>

int str1_ascii[128];
int str2_ascii[128];

int main() {
  char str1[100];
  char str2[100];
  scanf("%s", str1);
  scanf("%s", str2);

  int str1_len = strlen(str1);
  int str2_len = strlen(str2);
  if (str1_len == str2_len) {
    for (int i = 0; i < str1_len; ++i)
      str1_ascii[str1[i]]++;
    for (int i = 0; i < str2_len; ++i)
      str2_ascii[str2[i]]++;
    for (int i = 0; i < 128; ++i) {
      if (str1_ascii[i] != str2_ascii[i]) {
        printf("False\n");
        return 0;
      }
    }
    printf("True\n");
  } else {
    printf("False\n");
  }


  return 0;
}
