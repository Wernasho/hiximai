struct var {
    char name[16];
    char content[128];
};

int varCount = 0;
struct var vars[125];
int maxVars = 125;

void fileman(const char* name) {
    FILE * toRead = fopen(name, "r");
    if (toRead == NULL) {
        printf("File \"%s\" could not be opened.", name);
        return;
    }
    char line[256]; 
    while (fgets(line, sizeof(line), toRead)) {
        printf("línea leída: %s", line);
    }
    fclose(toRead);
};

void declareVar(const char* name, const char* value) {
    for (int i = 0; i < varCount; i++) {
        if (strcmp(vars[i].name, name) == 0) {
            strcpy(vars[i].value  value;)
        }
    }
    varCount++;
}

if (varCount == maxVars) {
    printf("You have reached the maximum amount of variables. Sorry about that.");
    return;
}