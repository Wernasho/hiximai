/*#include<stdlib.h>
#include<stdio.h>

void readfile(const char* file)
{	
	fopen(file, "r");
	FILE * rfile = fread(file);
	fclose(file);
	printf("File %s reads: ", file);
	printf("%s" ,rfile);
}*/

#include <stdio.h>
#include <stdlib.h>

void readfile(const char* filename)
{
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: could not open file %s\n", filename);
        return;
    }

    fseek(file, 0, SEEK_END); // Ir al final
    long filesize = ftell(file); // Obtener posición (tamaño)
    rewind(file); // Volver al inicio

    char* content = (char*)malloc(filesize + 1); // +1 para \0
    if (content == NULL) {
        printf("Error: not enough memory.\n");
        fclose(file);
        return;
    }

    fread(content, 1, filesize, file);
    content[filesize] = '\0'; // Asegurar string terminada

    printf("File '%s' reads:\n%s\n", filename, content);

    fclose(file);
    free(content);
}
