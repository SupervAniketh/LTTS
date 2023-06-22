#include <stdio.h>
#include <string.h>


struct Person {
    char name[20];
    int age;
};


void swapStructFields(struct Person* person1, struct Person* person2) {
    struct Person temp; 

    // Swap the name field
    strcpy(temp.name, person1->name);
    strcpy(person1->name, person2->name);
    strcpy(person2->name, temp.name);

    // Swap the age field
    temp.age = person1->age;
    person1->age = person2->age;
    person2->age = temp.age;
}

int main() {
    struct Person person1, person2;

   
    strcpy(person1.name, "Abhishek");
    person1.age = 25;

    
    strcpy(person2.name, "Aniketj");
    person2.age = 30;

    printf("Before swapping:\n");
    printf("Person 1 - Name: %s, Age: %d\n", person1.name, person1.age);
    printf("Person 2 - Name: %s, Age: %d\n", person2.name, person2.age);

    
    swapStructFields(&person1, &person2);

    printf("\nAfter swapping:\n");
    printf("Person 1 - Name: %s, Age: %d\n", person1.name, person1.age);
    printf("Person 2 - Name: %s, Age: %d\n", person2.name, person2.age);

    return 0;
}
