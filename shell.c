// shell.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void execute_command(const char *command) {
    // Implement execve and error handling
}

int main(void) {
    char *input;
    size_t len = 0;

    while (1) {
        printf("#cisfun$ ");
        getline(&input, &len, stdin);

        // Remove newline character from input
        input[strcspn(input, "\n")] = 0;

        if (/* Check for EOF condition */) {
            free(input);
            break;
        }

        if (/* Validate input */) {
            execute_command(input);
        }
    }

    return 0;
}
