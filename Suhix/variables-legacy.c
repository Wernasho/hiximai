struct variable {
    char name[32];
    char value[128];
}

struct variable Vars [100]

int varCount = 0;

void setVar(const char* name, const char* value) {
    for (int i = 0; i < varCount; i++) {
        if (strcmp(vars[i].name, name) == 0) {
            strcpy(vars[i].value, value);
            return;
        }
    }
    strcpy(vars[varCount].name, name);
    strcpy(vars[varCount].value, value);
    varCount++;
}


const char* getVar(const char* name) {
    for (int i = 0; i < varCount; i++) {
        if (strcmp(vars[i].name, name) == 0) {
            return vars[i].value;
        }
    }
    return "[undefined]";
}

void interpretate(const char* line) {
    if (line[0] == ':') {
        char name[32], value[128];
        sscanf(line, ":%s = \"%[^\"]\"", name, value);
        setVar(name, value);
    }
    else if (strncmp(line, "s(", 2) == 0) {
        char varName[32];
        sscanf(line, "s(%[^)])", varName);
        printf("%s\n", getVar(varName));
    }
}
