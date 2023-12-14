
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <stdio.h>
#include <assert.h>
#include <string.h>
#define USER_NAME "{user_name}"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("[Error]: file path/name must be provided!\n");
        return;
    };

    for (int i = 1; i < argc; ++i)
    {

        FILE *file = fopen(argv[i], "r");
        if (!file)
        {
            printf("[Error] %s: file not found\n", argv[i]);
            continue;
            ;
        }
        printf("\n\n-------------\n[Reading file] : %s\n-------------\n\n", argv[i]);

        char line[512];
        while (fgets(line, sizeof(line), file) != 0)
        {
            fprintf(stdout, line);
        }
        fclose(file);
    }
    return 0;
};
