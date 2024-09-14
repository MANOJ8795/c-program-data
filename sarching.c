#include<stdio.h>
int arr[3];
int main(){
  int arr[3]={{1, 2, 3, 4}};
  int key =4,found=00;
  for(int i=0;i<5;i++){
    if(arr[i]==key)
      found=1;
    break;}
  printf("%d",found);
  }
