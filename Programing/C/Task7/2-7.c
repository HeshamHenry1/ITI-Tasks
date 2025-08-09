#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100

struct student {
    int id_num;
    char name[30];
    char gender[10];
    int age;
};

void readStudents(struct student arr[], int n);
void sortStudentsByName(struct student arr[], int n);
void printAllStudents(struct student arr[], int n);
void printStudent(struct student s);

int main() {
    struct student students[MAX_STUDENTS];
    int n;

    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);
    getchar();

    readStudents(students, n);

    sortStudentsByName(students, n);

    printf("\n--- Students sorted by name ---\n");
    printAllStudents(students, n);

    return 0;
}

void readStudents(struct student arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter data for student %d ---\n", i + 1);

        printf("ID: ");
        scanf("%d", &arr[i].id_num);
        getchar();

        printf("Name: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';

        printf("Gender: ");
        fgets(arr[i].gender, sizeof(arr[i].gender), stdin);
        arr[i].gender[strcspn(arr[i].gender, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &arr[i].age);
        getchar();
    }
}

void sortStudentsByName(struct student arr[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i].name, arr[j].name) > 0) {
                // Swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printAllStudents(struct student arr[], int n) {
    for (int i = 0; i < n; i++) {
        printStudent(arr[i]);
        printf("\n");
    }
}

void printStudent(struct student s) {
    printf("ID: %d\n", s.id_num);
    printf("Name: %s\n", s.name);
    printf("Gender: %s\n", s.gender);
    printf("Age: %d\n", s.age);
}



/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define STUDENTS_TO_STORE 20

struct student {
    int id_num;
    char name[30];
    char gender[10];
    int age;
};

void readStudents(struct student *arr[], int n);
void sortStudentsByName(struct student *arr[], int n);
void printAllStudents(struct student *arr[], int n);
void printStudent(struct student *s);

int main() {
    struct student *students[MAX_STUDENTS] = {NULL};
    int n = MAX_STUDENTS;
    int toStore = STUDENTS_TO_STORE;

    printf("Enter data for %d students:\n", toStore);
    readStudents(students, toStore);

    sortStudentsByName(students, toStore);

    printf("\n--- Students sorted by name ---\n");
    printAllStudents(students, toStore);

    // حساب الذاكرة المستخدمة:
    size_t size_of_pointer_array = sizeof(struct student *) * MAX_STUDENTS;
    size_t size_of_students = sizeof(struct student) * toStore;
    size_t total_memory = size_of_pointer_array + size_of_students;

    printf("\nMemory used:\n");
    printf("Array of pointers (for %d pointers): %zu bytes\n", MAX_STUDENTS, size_of_pointer_array);
    printf("Student structs allocated (for %d students): %zu bytes\n", toStore, size_of_students);
    printf("Total memory used: %zu bytes\n", total_memory);


    for (int i = 0; i < toStore; i++) {
        free(students[i]);
    }

    return 0;
}

void readStudents(struct student *arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = (struct student *)malloc(sizeof(struct student));
        if (arr[i] == NULL) {
            printf("Memory allocation failed for student %d\n", i+1);
            exit(1);
        }

        printf("\n--- Enter data for student %d ---\n", i + 1);

        printf("ID: ");
        scanf("%d", &(arr[i]->id_num));
        getchar();

        printf("Name: ");
        fgets(arr[i]->name, sizeof(arr[i]->name), stdin);
        arr[i]->name[strcspn(arr[i]->name, "\n")] = '\0';

        printf("Gender: ");
        fgets(arr[i]->gender, sizeof(arr[i]->gender), stdin);
        arr[i]->gender[strcspn(arr[i]->gender, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &(arr[i]->age));
        getchar();
    }
}

void sortStudentsByName(struct student *arr[], int n) {
    struct student *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i]->name, arr[j]->name) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printAllStudents(struct student *arr[], int n) {
    for (int i = 0; i < n; i++) {
        printStudent(arr[i]);
        printf("\n");
    }
}

void printStudent(struct student *s) {
    printf("ID: %d\n", s->id_num);
    printf("Name: %s\n", s->name);
    printf("Gender: %s\n", s->gender);
    printf("Age: %d\n", s->age);
}

*/
