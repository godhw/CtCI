#include <stdio.h>
#include <string.h>

void getMat(int n, int (*mat)[n]) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &mat[i][j]);
    }
  }
  return;
}

void rotate(int n, int mat[][n]) {
  int tmp[n][n];
  memcpy(tmp, mat, sizeof(int)*n*n);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      mat[j][n-i-1] = tmp[i][j];
    }
  }

  return;
}

int main() {
  int n;
  scanf("%d", &n);

  int mat[n][n];
  getMat(n, mat);
  rotate(n, mat);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
