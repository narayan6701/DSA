#include <stdio.h>

// Define a structure
struct Student {
    int id;
    char name[50];
};

int main() {
    // Create a structure variable
    struct Student s1 = {101, "Narayan"};

    // Create a pointer to the structure
    struct Student *ptr = &s1;

    // Access and modify members using the arrow operator
    printf("Student ID: %d\n", ptr->id);         // Access the id member
    printf("Student Name: %s\n", ptr->name);     // Access the name member

    ptr->id = 202;                               // Modify the id member
    printf("Updated Student ID: %d\n", ptr->id);

    return 0;
}
