//C program to create, write and read text in/from file

#include <stdio.h>

int main(){

    char para[100],para2[100],nl[2]="\n";
    FILE *F;
    F = fopen("text.txt","w");
    if (F==NULL){
        printf("The file wasnt created");
        return 1;
    }
    for (int i=0;i<5;i++){
        printf("Enter line no %d: ",i+1);
        gets(para);
        fprintf(F,para);
        fputs(nl,F);
    }
    fclose(F);
    F = fopen("text.txt","r");
    for (int i=0;i<5;i++){
        fscanf(F,"%s",para2);
        printf("%s\n",para2);
    }
    fclose(F);
    return 0;
}

