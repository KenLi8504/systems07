#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayPrintOut(int *array, int length){
  for (int i = 0; i < length; i++){
    printf("This element is %d \n", *(array+i));
  }
  return 0;
}

int main(){
  
  int test[10];
  srand(time(NULL));
  test[0] = 0;
  for (int i = 1; i < 10; i++){
    test[i] = rand();
  }
  int arrLength = sizeof(test)/sizeof(test[0]);
  int checker = arrayPrintOut(test,arrLength);
  return 0;
}
