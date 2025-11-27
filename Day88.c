//Print all enum names and integer values using a loop.

#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    const char *names[] = {"ADMIN", "USER", "GUEST"};

    printf("Enum names and values:\n\n");

    for (r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", names[r], r);
    }

    return 0;
}
