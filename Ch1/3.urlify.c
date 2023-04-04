#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void urlify(const char *input, int len) {
  int space = 0, new_strlen, idx = 0;
  char *new_str;
  for (int i = 0; i < len; ++i) {
    if (input[i] == ' ') space++;
  }
  new_strlen = len + (2 * space);
  new_str = (char *)malloc(new_strlen + 1);
  new_str[new_strlen + 1] = '\0';

  for (int i = 0; i < len; ++i) {
    if (input[i] == ' ') {
      new_str[idx++] = '%';
      new_str[idx++] = '2';
      new_str[idx++] = '0';
    } else {
      new_str[idx++] = input[i];
    }
  }
  printf("%s\n", new_str);
  free(new_str);
}
int main() {
  char input[14] = "Mr John Smith";

  printf("%s\n", input);
  urlify(input, strlen(input));
  return 0;

}
