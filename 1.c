<<<<<<< HEAD
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



// Function declarations
void showMenu();
void calculateBMI();
void showHistory();
float computeBMI(float weight, float height);
void getBMICategory(float bmi, char *category);
void clearInputBuffer();
void pause();

int main() {
    int choice;
    do {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice) {
            case 1:
                calculateBMI();
                break;
	    
	    case 2:
               showHistory();
               break
            
	    case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter 1-3.\n");
        }
         if (choice != 3)
            pause();

    } while (choice != 3);

    return 0;
}


// Function to display the main menu
void showMenu() {
    printf("\n==============================\n");
    printf("        BMI CALCULATOR\n");
    printf("==============================\n");
    printf("1. Calculate BMI\n");
    printf("2. Show History\n");
    printf("3. Exit\n");
    printf("==============================\n");
}

// Function to perform BMI calculation
void calculateBMI() {
    char name[50];
    int unitChoice;
    float height = 0, weight = 0, bmi = 0;
    char category[20], unit[10];

     if (recordCount >= MAX_USERS) {
        printf("History is full. Cannot record more entries.\n");
        return;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // remove newline

    printf("Choose unit system:\n");
    printf("1. Metric (kg, meters)\n");
    printf("2. Imperial (lbs, inches)\n");
    printf("Enter your choice: ");
    scanf("%d", &unitChoice);
    clearInputBuffer();
    
    if (unitChoice == 1) {
        printf("Enter your height in meters: ");
        scanf("%f", &height);
        printf("Enter your weight in kilograms: ");
        scanf("%f", &weight);
        strcpy(unit, "Metric");
      } else if (unitChoice == 2) {
        printf("Enter your height in inches: ");
        scanf("%f", &height);
        printf("Enter your weight in pounds: ");
        scanf("%f", &weight);
        strcpy(unit, "Imperial");
    } else {
        printf("Invalid unit choice. Aborting calculation.\n");
        return;
    }
     clearInputBuffer();

    if (height <= 0 || weight <= 0) {
        printf("Invalid height or weight. Must be positive numbers.\n");
        return;
    }

    if (unitChoice == 2) {
        // Convert imperial to metric
        height = height * 0.0254;     // inches to meters
        weight = weight * 0.453592;   // pounds to kilograms
    }


