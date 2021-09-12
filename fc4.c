// Q: C program to print contents in reverse order of a file

#include <stdio.h>

void main(){
    FILE *F;
    char c;
    int no;
    F = fopen("text.txt","r");
    printf("Enter the no of characters to count from reverse:");
    scanf("%d",&no);
    printf("Newline counts as two characters.\n");
    for (int i=3;i<no+3;i++){  // Here i is initially given as 3 because the last three elements read by the pointer are EOF and newline character.
        fseek(F,-i,2);
        c=fgetc(F);
        if (c=='\n'){  // In order to not count newline character, adding no is done
            no++;
        }
        printf("%c",c);
    }
}

