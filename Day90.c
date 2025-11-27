//Define a struct with enum Gender and print person's 

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[30];
    enum Gender gender;
};

int main() {
    struct Person p = {"Arnav", MALE};   

    printf("Name: %s\n", p.name);
    printf("Gender: ");

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
