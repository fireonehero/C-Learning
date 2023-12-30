#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv) {
    if (argc < 2) {
        printf("Error, please enter filename. ");
        return 1;
    }

    FILE *fptr = fopen(argv[1], "r");
    if (fptr == NULL) {
        printf("Error: The file could not be opened. Exiting program...");
        return 1;
    } else {
        printf("Loaded successfully\n---------------------");
        char dataStorage[75];

        while (fgets(dataStorage, sizeof(dataStorage), fptr) != NULL) {
            printf("%s", dataStorage);
        }
        printf("%s", "---------------------\nClosing File.");
        fclose(fptr);
    }
    
    return 0;
}
