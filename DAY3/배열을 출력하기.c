//����1. ���� ���� ���� ���� 9, 5, 7, 2, 4, 0���� ���� �� �ʱ�ȭ�ϰ� �Էµ� ������� ����ϴ� ���α׷��� ����ÿ�.

#include <stdio.h>

int main(void) {

  // 1. �׳� �����ؼ� ���
  int num[]={9,5,7,2,4,0};
  for(int i=0; i<6; i++){
    printf("%d",num[i]);
  }

  // 2. scanf�� �Է¹޾Ƽ� ���
  int num2[]={0};
  scanf("%d",&num2[0]);
  printf("%d",num2[0]);

  return 0;
}
