// 배열에 10개의 양의 정수를 입력 받아서 저장하고, 저장된 정수 중 짝수 정수의 합을 출력하시오.
#include <stdio.h>

int main(void) {

  int arr[] = {2, 7, 19, 3, 41, 20, 33, 52, 17, 111};
  int sum_a;
  // v1 arr의 값 중 짝수의 값의 합 출력.
  for(int i=0; i<=9; i++){
    if(arr[i]%2==0){
        printf("%d\n",arr[i]);
        sum_a=sum_a+arr[i];
    }
  }
  printf("%d\n",sum_a);
  // v2 scanf를 통해서 숫자 10개를 입력받고 그 중 짝수의 합 출력.
  int arr2[9]={0};
  int sum_b;
  for(int j=0; j<10; j++){
    printf("숫자를 입력하세요 :");
    scanf("%d",&arr2[j]);
  }
  for(int a=0; a<10; a++){
    if(arr2[a]%2==0){
        printf("%d\n",arr2[a]);
        sum_b=sum_b+arr2[a];
    }
  }
  printf("%d",sum_b);

  return 0;
}
