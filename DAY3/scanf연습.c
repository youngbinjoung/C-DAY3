#include <stdio.h>
int main(){
int num1,num2,num3;
float a;
    // 1. ���� �ΰ� �޾Ƽ� ����ϱ�
          scanf("%d %d",&num1,&num2);
          printf("%d %d\n",num1,num2);
	// 2. ���� �ΰ� �޾Ƽ� ���� �� ����ϱ�
          scanf("%d %d",&num1,&num2);
          printf("%d\n",num1+num2);
	// 3. ���� 3�� �޾Ƽ� ����ϱ�
          scanf("%d %d %d",&num1,&num2,&num3);
          printf("%d\n",num1+num2+num3);
	// 4. ���� 3�� �޾Ƽ� ��� ���ϰ� ��� ����ϱ�
          scanf("%d %d %d",&num1,&num2,&num3);
          printf("%d\n",num1*num2*num3);
	// 5. �Ǽ� 1���� �Է¹޾� ����ϱ�
          scanf("%f",&a);
          printf("%f\n",a);

return 0;
}
