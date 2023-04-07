#include <stdio.h>
#include <string.h>

char input[100];

int a[26];

void makeSmall() {
  for (int i = 0; i < strlen(input); ++i) {
    if ('A' <= input[i] && input[i] <= 'Z') {
      input[i] += 32; 
    }
  }
  return;
}

int main() {
  scanf("%[^\n]s", input);

  makeSmall();
  int flag = 0;
  int count = 0;
  int res = 0;

  for (int i = 0; i < strlen(input); ++i) {
    char x = input[i];
    if ('a' <= x && x <= 'z') {
      a[x - 'a'] = !a[x - 'a'];
      flag = !flag;
      printf("%c\n", x);
    }
  }
  for (int i = 0; i < 26; ++i)
    if (a[i]) count++;
  if ((flag && count == 1) || (!flag && !count))
    printf("True\n");
  else
    printf("False\n");
  
  return 0;
}
