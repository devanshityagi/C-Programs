#include <stdio.h>
union Student{
    char name[20];
    int roll;
    float marks;
};

int main() {
    union Student data;
    printf("Enter name: ");
    scanf("%s", data.name);
    printf("Name: %s\n", data.name);
    printf("Enter roll number: ");
    scanf("%d", &data.roll);
    printf("Roll number: %d\n", data.roll);
    printf("Enter marks: ");
    scanf("%f", &data.marks);
    printf("Marks: %f\n", data.marks);
    printf("Name after entering roll and marks: %s\n", data.name);
    return 0;
}