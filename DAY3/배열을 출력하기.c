//문제1. 숫자 여섯 개를 각각 9, 5, 7, 2, 4, 0으로 선언 및 초기화하고 입력된 순서대로 출력하는 프로그램을 만드시오.

#include <stdio.h>

int main(void) {

  // 1. 그냥 선언해서 출력
  int num[]={9,5,7,2,4,0};
  for(int i=0; i<6; i++){
    printf("%d",num[i]);
  }

  // 2. scanf로 입력받아서 출력
  int num2[]={0};
  scanf("%d",&num2[0]);
  printf("%d",num2[0]);

  return 0;
}
