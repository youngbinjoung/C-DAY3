//����3. ���� �ټ� ���� ����ڿ��� �Է¹޾� �Է¹��� ������ �ݴ�� ����ϴ� ���α׷��� ����ÿ�.
#include <stdio.h>

int main(void) {

  int arr[] = {4,7,9,0,3};

  // v1 arr�� ���� �ݴ�� ������ּ���.
  // ��� ���� : 3 0 9 7 4
  for(int i=4; i>=0; i--){
    printf("%d",arr[i]);
  }
  // v2 ���� �ټ� ���� scanf�� �Է¹޾� �Է¹��� ������ �ݴ�� ���
  int arr2[4]={0};
  for(int j=0; j<5; j++){
    printf("���ڸ� �Է��ϼ��� :");
    scanf("%d",&arr2[j]);
  }
  for(int c=4; c>=0; c--){
    printf("%d",arr2[c]);
  }
  return 0;
}
