#include "include/modes.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc > 2) {
        fprintf(stderr, "An error has occurred\n");
        exit(EXIT_FAILURE);
    }
    if (argc == 1) {
        interactive_mode();
        exit(EXIT_SUCCESS);
    }
    batch_mode(argv[1]);
    return EXIT_SUCCESS;
}
