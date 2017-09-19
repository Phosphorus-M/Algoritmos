#include <stdio.h>
void main() {
  int arraypar[51];
  int arraynopar[51];
  int i;
  int x=0;
  int j=0;
  for (i = 0; i < 51; i++) {
    arraypar[i] = 0;
    arraynopar[i] = 0;
  }
  for (i = 0; i <= 100; i++) {
    if (i%2 == 0) {
      arraypar[x] = i;
      x = x +1 ;
    }else{
      arraynopar[j] = i;
      j= j + 1;
    }
  }
  x=0;
  j=0;
  for (i = 0; i <= 100; i++) {
    if (i%2 == 0) {
      printf("%i es par\n", arraypar[x]);
      x = x +1 ;
    }else{
      printf("%i es inpar\n", arraynopar[j]);
      j= j + 1;
    }
  }
  getch ();
}
