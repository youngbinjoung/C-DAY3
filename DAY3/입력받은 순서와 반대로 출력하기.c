//문제3. 숫자 다섯 개를 사용자에게 입력받아 입력받은 순서와 반대로 출력하는 프로그램을 만드시오.
#include <stdio.h>

int main(void) {

  int arr[] = {4,7,9,0,3};

  // v1 arr의 값을 반대로 출력해주세요.
  // 출력 예시 : 3 0 9 7 4
  for(int i=4; i>=0; i--){
    printf("%d",arr[i]);
  }
  // v2 숫자 다섯 개를 scanf로 입력받아 입력받은 순서와 반대로 출력
  int arr2[4]={0};
  for(int j=0; j<5; j++){
    printf("숫자를 입력하세요 :");
    scanf("%d",&arr2[j]);
  }
  for(int c=4; c>=0; c--){
    printf("%d",arr2[c]);
  }
  return 0;
}
