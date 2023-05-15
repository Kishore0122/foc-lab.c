#include <stdio.h>
int main() {
  int n,key,i;
  int arr[100];
  printf("Enter the number of elements \n: ");
  scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
    printf("Enter number %d: ", i);
    scanf("%d", &arr[i]);
  }
  printf("Enter the number to search \n ");
  scanf("%d", &key);
    for (int i = 1; i <= n; i++)
    if (key == arr[i]) {
      arr[0] = arr[i];
  printf("the element is in %d position",i );
  }
  return 0;
}