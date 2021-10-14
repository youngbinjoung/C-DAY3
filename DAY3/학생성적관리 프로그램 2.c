#include <stdio.h>
int main(){
int student,up=1,score[100]={0},sum_score=0,average;

printf("학생 수를 입력해주세요 :");
scanf("%d",&student);


for(int i=1; i<=student; i++){
    printf("%d번째 학생의 성적을 입력해주세요 :",score[i]+up);
    scanf("%d",&score[i]);
    up++;
}
printf("학생의 성적 정보입니다.\n");
for(int j=1; j<=student; j++){
   printf("점수 :%d\n",score[j]);
   sum_score=sum_score+score[j];

}
up=up-1;
printf("학생들의 총점 : %d\n",sum_score);
printf("학생들의 점수 평균 : %d",sum_score/up);

return 0;
}
