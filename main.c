#include <stdio.h>

int main(void) {
  int matriz[4][3][2];

  for( int i = 0; i < 4; i++ ) {
    for( int j = 0; j < 3; j++ ) {
      for( int k = 0; k < 2; k++ ) {
        matriz[i][j][k]= i + j + k;
      }
    }
  }
  // impressão da matriz
  for( int i = 0; i < 4; i++ ) {
    for( int j = 0; j < 3; j++ ) {
      for( int k = 0; k < 2; k++ ) {
        printf("%d ", matriz[i][j][k]);
      }
    }
    printf("\n");  
  }
  return 0;
}