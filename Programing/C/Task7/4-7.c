#include<stdio.h>
#define MAX_STUDENTS 100

struct student {
    int roll_no;
    char name[50];
    int age;
};
void printStudentsYoungerThan(struct student arr[], int n, int age_limit);

void printStudentByRollNo(struct student arr[], int n, int roll_no);
int main(){


    struct student students[MAX_STUDENTS];
    int n, age_limit, search_roll;

    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    printf("\nEnter age limit to print students younger than: ");
    scanf("%d", &age_limit);

    printf("\nStudents younger than %d:\n", age_limit);
    printStudentsYoungerThan(students, n, age_limit);

    printf("\nEnter roll number to search: ");
    scanf("%d", &search_roll);

    printStudentByRollNo(students, n, search_roll);

    return 0;

}

void printStudentsYoungerThan(struct student arr[], int n, int age_limit) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].age < age_limit) {
            printf("Name: %s, Age: %d\n", arr[i].name, arr[i].age);
            found = 1;
        }
    }
    if (!found) {
        printf("No students found younger than %d.\n", age_limit);
    }
}
void printStudentByRollNo(struct student arr[], int n, int roll_no) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].roll_no == roll_no) {
            printf("\nStudent details:\n");
            printf("Roll Number: %d\n", arr[i].roll_no);
            printf("Name: %s\n", arr[i].name);
            printf("Age: %d\n", arr[i].age);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with roll number %d not found.\n", roll_no);
    }
}
