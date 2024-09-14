#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
  int pos,value;
  printf("original array:");
  for(int i=0;i<5;i++){
    printf("%d",arr[i]);
  }
  printf("\n");
  printf("Enter the position to insert (0-4): "); scanf("%d", &pos);

  printf("Enter the value to insert: ");

  scanf("%d", &value);


  arr[pos] = value;

  printf("Updated array: ");

  for (int i = 0; i < 5; i++) {

  printf("%d ", arr[i]);

  }
  printf("\n");
  return 0;
}


