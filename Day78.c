//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.


#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char c;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Could not open file\n");
        return 0;
    }

    while((c = fgetc(fp)) != EOF) {
        if(c >= 'A' && c <= 'Z') c += 32;

        if(c >= 'a' && c <= 'z') {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
