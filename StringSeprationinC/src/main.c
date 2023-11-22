
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    const char *str[256];
    const char *delim[2];
    printf("<Enter String>");
    fgets(str, 256, stdin);
    printf("<Enter Delim>");
    fgets(delim, 2, stdin);
    // fwrite(str,sizeof(char),sizeof(str),stdout);
    fprintf(stdout, str);
    char *token = strtok(str, delim);
    while(token!=NULL)
    {
        fprintf(stdout,"%s\n",token);
        token=strtok(NULL,delim);
    }
    return 0;
};
