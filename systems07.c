#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayPrintOut(int *array, int length){
  printf("[");
  for (int i = 0; i < length - 1; i++){
    printf("%d, ", *(array+i));
  }
  printf("%d] \n",*(array+length-1));
  return 0;
}

double averageArray(int *array, int length){
  double counter = 0;

  for (int i = 0; i < length; i++){
    //printf("%int \n",*(array+i));
    counter = counter + *(array+i);
    //printf("The current sum is %lf \n", counter);
  }
  return (counter/length);
}

int copyArray(int *array1,int *array2, int length){
  for (int i = 0; i < length; i++){
    *(array2 + i) = *(array1 + i);
  }
  return 0;
}

int main(){
  int test[10];
  int copy[10];
  srand(time(NULL));

  int arrLength = sizeof(test)/sizeof(test[0]);

  for (int i = 0; i < 10; i++){
    test[i] = rand();
  }
  printf("This is the original array \n");
  arrayPrintOut(test,arrLength);

  double average = averageArray(test,arrLength);
  printf("The average of the array is %lf \n",average);

  copyArray(test,copy,arrLength);
  printf("This is the copy of the array\n");
  arrayPrintOut(copy,arrLength);

  printf("And this is the original array again \n");
  arrayPrintOut(test,arrLength);
  return 0;
}
