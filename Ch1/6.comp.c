#include <stdio.h>
#include <string.h>

int detLength(const char *input) {
  int count = 0;
  int len = strlen(input);

  for (int i = 0; i < len; ++i) {
    if (i + 1 == len || input[i] != input[i+1])
      count += 2;
  }

  return count;
}

int main() {
  char input[100];

  scanf("%s", input);
  int new_len = detLength(input);
  if (new_len > strlen(input)) {
    printf("%s\n", input);
  } else {
    char new_str[new_len + 1];
    int count = 0;
    int idx = 0;
    new_str[new_len] = 0;
    for (int i = 0; i < strlen(input); ++i) {
      count++;
      if (i + 1 == strlen(input) || input[i] != input[i+1]) {
        new_str[idx] = input[i];
        idx++;
        new_str[idx] = count + '0';
        idx++;
        count = 0;
      }
    }
    printf("%s\n", new_str);

  }

  return 0;
}
