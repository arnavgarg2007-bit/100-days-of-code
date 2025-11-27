//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.


#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status result;

    // Change this value to SUCCESS, FAILURE or TIMEOUT to test
    result = SUCCESS;

    if (result == SUCCESS)
        printf("Operation completed successfully.\n");
    else if (result == FAILURE)
        printf("Operation failed.\n");
    else if (result == TIMEOUT)
        printf("Operation timed out.\n");

    return 0;
}
