#include<stdio.h>

struct student
{
    int code ;
    char name[30];
    char gender[10];
    int age ;


};

void readStudent(struct student *s);
void printStudent(struct student s);

int main(){

     struct student s1, s2;

    printf("Enter data for Student 1:\n");
    readStudent(&s1);

    printf("\nEnter data for Student 2:\n");
    readStudent(&s2);

    printf("\nThe eldest student is:\n");
    if (s1.age > s2.age)
        printStudent(s1);
    else if (s2.age > s1.age)
        printStudent(s2);
    else
        printf("Both students are of the same age.\n");

    return 0;




return 0 ;
}

void readStudent(struct student *s){
    printf("Enter student code: ");
    scanf("%d", &s->code);
    getchar();

    printf("Enter student Name: ");
    scanf("%[^\n]", s->name);
    getchar();

    printf("Enter student Gender: ");
    scanf("%[^\n]", s->gender);
    getchar();

    printf("Enter student Age: ");
    scanf("%d", &s->age);
    getchar();
}
void printStudent(struct student s){
     printf("\n--- Student Info ---\n");
    printf("Code: %d\n", s.code);
    printf("Name: %s\n", s.name);
    printf("Gender: %s\n", s.gender);
    printf("Age: %d\n", s.age);


}

