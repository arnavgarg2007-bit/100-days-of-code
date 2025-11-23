//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.


#include <stdio.h>

int main() {
    FILE *fp;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("Could not open file\n");
        return 0;
    }

    for(int i = 0; i < n; i++) {
        char name[100];
        int roll;
        float marks;

        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("Could not open file\n");
        return 0;
    }

    printf("\nStored Records:\n");
    char name[100];
    int roll;
    float marks;

    while(fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
