#include <stdio.h>

int main() {
  int n = 4;
  int m = 4;
  int arr[n][m];
  int row[n];
  int col[m];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if ((i == n/2) && (j == m/2)) {
        arr[i][j] = 0;
        continue;
      }
      arr[i][j] = i * n + j + 1;
      col[j] = 0;
    }
    row[i] = 0;
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j)
      printf("%d ", arr[i][j]);
    printf("\n");
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (arr[i][j] == 0) {
        row[i] = 1;
        col[j] = 1;
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    if (row[i]) {
      for (int j = 0; j < m; ++j)
        arr[i][j] = 0;
    }
  }

  for (int j = 0; j < m; ++j) {
    if (col[j]) {
      for (int i = 0; i < n; ++i)
        arr[i][j] = 0;
    }
  }



  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j)
      printf("%d ", arr[i][j]);
    printf("\n");
  }

  return 0;
}
