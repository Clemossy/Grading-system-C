#include <stdio.h>

void main()
{
  char name[50];
  int score,stu;
  int n,count;
  printf("enter number of students:");
  scanf("%d",&stu);
  for(n=0;n<stu;n++)
  {

      printf("enter name of the student %d:",n+1);
      scanf("%s",name);
      printf("enter score of student %d: ",n+1);
      scanf("%d",&score);
      if(score>=0&&score<=100)
        {
        if(score>=0&&score<=50)
        {
            printf("Result:fail\n");
        }
        else
        {
            printf("Result:pass\n");
        }
      }
      else
        {
        printf("INVALID MARKS \n");
      }
  }
   printf("name:\t%s",name);
   printf("\n");
   printf("score:%d",score);

}
