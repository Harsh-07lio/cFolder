#include<stdio.h>
struct student
{
    int roll;
    char grade;
    float per;
};
void display(struct student);
int main(){

struct student s;
printf("Enter your roll,grade and per");
scanf("%d %c %f",&s.roll,&s.grade,&s.per);
display(s);
return 0;

}
void display(struct student p){
    printf("\n rollno=%d, grade=%c,per=%f",p.roll,p.grade,p.per);


}

