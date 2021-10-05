#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayPrintOut(int *array, int length){
  printf("[");
  for (int i = 0; i < length - 1; i++){
    printf("%d, ", *(array+i));
  }
  printf("%d] \n",*(array+length));
  return 0;
}

double averageArray(int *array, int length){
  double counter = 0;

  for (int i = 0; i <= length; i++){
    printf("%int \n",*(array+i));
    counter = counter + *(array+i);
    printf("The current sum is %lf \n", counter);
  }
  return (counter/length);
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
  double average = averageArray(test,arrLength);
  checker = arrayPrintOut(test,arrLength);
  printf("The average is %lf \n", average);
  return 0;
}
