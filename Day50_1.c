//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    char s[20];
    printf("Enter date (dd/04/yyyy): ");
    fgets(s, sizeof(s), stdin);

    char day[3], year[5];

    day[0] = s[0];
    day[1] = s[1];
    day[2] = '\0';

    year[0] = s[6];
    year[1] = s[7];
    year[2] = s[8];
    year[3] = s[9];
    year[4] = '\0';

    printf("%s-Apr-%s\n", day, year);

    return 0;
}

