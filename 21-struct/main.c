#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student student);

int main()
{
    /*
        struct = A custom container that holds multiple
            pieces of related information.
            Similar to Object in other languages
    */

    Student student1 = {"Jude", 22, 3.4, true};
    Student student2 = {"Kylian", 24, 2.8, true};
    Student student3 = {"Luka", 39, 3.9, false};
    Student student4 = {0};

    strcpy(student4.name, "Trent");
    student4.age = 22;
    student4.gpa = 2.5;
    student4.isFullTime = true;

    printStudent(student1);

    return 0;
}

void printStudent(Student student)
{
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Gpa: %.2f\n", student.gpa);
    printf("Fulltime student: %s\n\n", (student.isFullTime) ? "Yes" : "No");
}