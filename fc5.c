// Q: Write a program to compare two file.

#include <stdio.h>

int main(){
    FILE *F1,*F2;
    F1 = fopen("text1.txt","r");
    F2 = fopen("text.txt","r");
    char ch1=fgetc(F1),ch2=fgetc(F2); // Initially character is called to check first condition because its do while loop
    do{  
        if (ch1!=ch2){
            printf("The contents are different.");
            return 1;
        }
    }while((ch1=fgetc(F1))!=EOF && (ch2=fgetc(F2))!=EOF);  // Do while is used intead of while for simplicity
    printf("The contents are same for both files.");
    return 0;
}
