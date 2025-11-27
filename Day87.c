//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.


#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;

    // Change role to ADMIN / USER / GUEST for testing
    role = USER;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! Please login to access more features.\n");
            break;
        default:
            printf("Invalid Role.\n");
    }

    return 0;
}
