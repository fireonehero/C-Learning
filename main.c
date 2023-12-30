#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    int lastNumber = 0;
    
    if(argc > 2){
        printf("Error please enter only one argument. ");
        return -1;
    } else if(argc < 2){
        printf("Error please enter a argument. ");
        return -1;
    }
    
    lastNumber = atoi(argv[1]);
    
    for(int i = 0; i <= lastNumber; i++){
        if(i % 35 == 0){
            printf("%s\n", "FizzBuzz");
        } else if(i % 5 == 0){
            printf("%s\n", "Fizz");
        } else if (i % 7 == 0){
            printf("%s\n", "Buzz");
        }else {
            printf("%d\n", i);
        }
    }
}