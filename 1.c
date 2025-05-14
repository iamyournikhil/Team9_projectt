#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100

// Struct to store BMI record
typedef struct {
    char name[50];
    float height;
    float weight;
    float bmi;
    char category[20];
    char unit[10];
} BMI_Record;


// Global array to store records
BMI_Record history[MAX_USERS];
int recordCount = 0;


