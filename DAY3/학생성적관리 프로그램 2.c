#include <stdio.h>
int main(){
int student,up=1,score[100]={0},sum_score=0,average;

printf("�л� ���� �Է����ּ��� :");
scanf("%d",&student);


for(int i=1; i<=student; i++){
    printf("%d��° �л��� ������ �Է����ּ��� :",score[i]+up);
    scanf("%d",&score[i]);
    up++;
}
printf("�л��� ���� �����Դϴ�.\n");
for(int j=1; j<=student; j++){
   printf("���� :%d\n",score[j]);
   sum_score=sum_score+score[j];

}
up=up-1;
printf("�л����� ���� : %d\n",sum_score);
printf("�л����� ���� ��� : %d",sum_score/up);

return 0;
}
