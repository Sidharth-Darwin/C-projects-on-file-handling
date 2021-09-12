// Q: C program to create a text file using file handling

#include <stdio.h>

void main(){
    FILE *F;
    char fname[20];
    printf("Enter the name of file to be created: ");
    gets(fname);
    F = fopen(fname,"w");
    if (F==NULL){
        printf("File wasnt created");
    }else{
        printf("File was sucessfully created");
    }
    fclose(F);
}
