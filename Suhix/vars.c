#include <stdio.h>
#include <string.h>

struct var {
    char name[16];
    char content[128];
};

int varCount = 0;
struct var vars[125];
int maxVars = 125;

void declareVar(const char* name, const char* value) {
    if (varCount == maxVars) {
        printf("You have reached the maximum amount of variables. Sorry about that.\n");
        return;
    }

    //verify if variable exists
    for (int i = 0; i < varCount; i++) {
        if (strcmp(vars[i].name, name) == 0) {
            strcpy(vars[i].content, value);
            return;
        }
    }

    // New variable
    strcpy(vars[varCount].name, name);
    strcpy(vars[varCount].content, value);
    varCount++;
}

void fileman(const char* name) {
    FILE *toRead = fopen(name, "r");
    if (toRead == NULL) {
        printf("File \"%s\" could not be opened.\n", name);
        return;
    }

    char line[256]; 
    while (fgets(line, sizeof(line), toRead)) {
        printf("Línea leída: %s", line);
        if (strcmp(line[0], ":") == 0) {
            strcpy()
        }
        // line parser goes here ig.
    }

    fclose(toRead);
}

void checkExtension(const char* filename) {
    int len = strlen(filename);
    if (len < 4) return 0;

    const char* ext = filename + len - 4;
    return strcmp(ext, ".hix");
}