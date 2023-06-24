#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* student) {
    char inputCopy[100];  

    strncpy(inputCopy, input, sizeof(inputCopy));
    inputCopy[sizeof(inputCopy) - 1] = '\0';

    const char* delimiter = " ";
    char* token = strtok(inputCopy, delimiter);

    student->rollno = atoi(token);
    token = strtok(NULL, delimiter);

    strncpy(student->name, token, sizeof(student->name));
    student->name[sizeof(student->name) - 1] = '\0';
    token = strtok(NULL, delimiter);

    student->marks = atof(token);
}

int main() {
    const int maxStudents = 10;
    struct Student students[maxStudents];

    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar();  

    for (int i = 0; i < numStudents; i++) {
        char input[100];
        printf("Enter details for student %d (format: RollNo Name Marks): ", i + 1);
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';  

        parseString(input, &students[i]);
    }

    
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
