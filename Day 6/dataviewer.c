#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LINE_LENGTH 100

struct Entry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
};

void extractLines(FILE *file, struct Entry entries[], int *numLines);
void displayEntries(struct Entry entries[], int numLines);

int main() {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Entry entries[MAX_LINES];
    int numLines = 0;

    extractLines(file, entries, &numLines);
    displayEntries(entries, numLines);

    fclose(file);
    return 0;
}

void extractLines(FILE *file, struct Entry entries[], int *numLines) {
    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), file) != NULL) {
        char *token = strtok(line, ",");
        if (token != NULL) {
            entries[*numLines].entryNo = atoi(token);

            token = strtok(NULL, ",");
            strcpy(entries[*numLines].sensorNo, token);

            token = strtok(NULL, ",");
            entries[*numLines].temperature = atof(token);

            token = strtok(NULL, ",");
            entries[*numLines].humidity = atoi(token);

            token = strtok(NULL, ",");
            entries[*numLines].light = atoi(token);

            token = strtok(NULL, ",");
            strcpy(entries[*numLines].time, token);

            (*numLines)++;
        }
    }
}

void displayEntries(struct Entry entries[], int numLines) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    for (int i = 0; i < numLines; i++) {
        printf("%d\t%s\t\t%.2f\t\t%d\t\t%d\t%s", entries[i].entryNo, entries[i].sensorNo, entries[i].temperature,
               entries[i].humidity, entries[i].light, entries[i].time);
    }
}
