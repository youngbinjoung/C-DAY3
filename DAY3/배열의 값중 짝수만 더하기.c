// �迭�� 10���� ���� ������ �Է� �޾Ƽ� �����ϰ�, ����� ���� �� ¦�� ������ ���� ����Ͻÿ�.
#include <stdio.h>

int main(void) {

  int arr[] = {2, 7, 19, 3, 41, 20, 33, 52, 17, 111};
  int sum_a;
  // v1 arr�� �� �� ¦���� ���� �� ���.
  for(int i=0; i<=9; i++){
    if(arr[i]%2==0){
        printf("%d\n",arr[i]);
        sum_a=sum_a+arr[i];
    }
  }
  printf("%d\n",sum_a);
  // v2 scanf�� ���ؼ� ���� 10���� �Է¹ް� �� �� ¦���� �� ���.
  int arr2[9]={0};
  int sum_b;
  for(int j=0; j<10; j++){
    printf("���ڸ� �Է��ϼ��� :");
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
