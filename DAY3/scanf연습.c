#include <stdio.h>
int main(){
int num1,num2,num3;
float a;
    // 1. 숫자 두개 받아서 출력하기
          scanf("%d %d",&num1,&num2);
          printf("%d %d\n",num1,num2);
	// 2. 숫자 두개 받아서 더한 값 출력하기
          scanf("%d %d",&num1,&num2);
          printf("%d\n",num1+num2);
	// 3. 숫자 3개 받아서 출력하기
          scanf("%d %d %d",&num1,&num2,&num3);
          printf("%d\n",num1+num2+num3);
	// 4. 숫자 3개 받아서 모두 곱하고 결과 출력하기
          scanf("%d %d %d",&num1,&num2,&num3);
          printf("%d\n",num1*num2*num3);
	// 5. 실수 1개를 입력받아 출력하기
          scanf("%f",&a);
          printf("%f\n",a);

return 0;
}
