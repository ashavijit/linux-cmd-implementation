#include <stdio.h>
#include <string.h>

struct stack
{
    char str[100];
};

int main(int argc , char*argv[]){
    struct stack s[100]; // stack of strings

    FILE *fp;
    char line[100];
    int n , count=0,i=0;
    fp = fopen(argv[1],"r"); // open file
    if (fp == NULL){
        printf("Error opening file\n");
        return 0;
    }

    while(fgets(line , sizeof(line) , fp) != NULL){
        strcpy(s[i].str , line);
        i++;
        count++;
    }
    fclose(fp);

    for (int i=n-1 ; i>=0 ; i--){
        if (count == 10){
            break;
        }
        printf("%s",s[i].str);
        count++;
    }
    return 0;
    
}
