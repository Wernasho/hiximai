#include<stdlib.h>
#include<stdio.h>

void write_file(const char* nombre, const char* texto)
{
	FILE * file = fopen(nombre, "w");
	if (file == NULL) return;
	fputs(texto, file);
	fclose(file);
}
