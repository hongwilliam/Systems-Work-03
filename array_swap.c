#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int arr[10];
  int i;

  /* this will be the first array 
   populated with random values */
  printf("\nThe original array: \n");

  srand( time(NULL) );
  srand(5); /* some arbitrary string value */

  for (i=0; i < 9; i++){
    arr[i] = rand();
    printf("arr[%d", i);
    printf("]: %d\n", arr[i]);
    
  }

  /* setting value of 10th element as 0 */
  *(arr + 9) = 0;
  
  printf("arr[%d", 9);
  printf("]: %d\n", arr[i]);

  /* this will be the second array only using pointers
   and a reverse of the original */

  printf("\nThe second array: \n");
  int arr2[10];
  int j;
  for (j=0; j < 10; j++){
    /* use the de-reference operator to refer to values stored in addresses */
    *(arr2 + j) = *(&arr[9-j]);
    int *ip = &j;
    
    printf("arr2[%d", *ip);
    printf("]: %d\n", *(arr2 + j));
  }
 

}
