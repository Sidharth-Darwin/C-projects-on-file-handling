//Program to find total number of lines in a file in C


#include <stdio.h>

int main(){
    char ch;
    int count=0;
    FILE *F;
    F = fopen("text.txt","r");
    if (F==NULL){
        printf("The file doesnt exist");
        return 1;
    }
    while ((ch=fgetc(F))!=EOF){
        if (ch=='\n'){
            count+=1;
        }
    }
    fclose(F);
    printf("The total no of lines in the file is %d",count);
    return 0;
}