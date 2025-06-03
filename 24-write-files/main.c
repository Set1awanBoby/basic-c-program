#include <stdio.h>

int main()
{
    // write files

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "Lorem, ipsum dolor sit amet consectetur adipisicing elit. Atque dolores pariatur minima sunt delectus animi exercitationem cum porro assumenda. Illum aspernatur corrupti rem at molestias nemo cum ipsam voluptatibus fugiat?";

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");

    fclose(pFile);
    return 0;
}
