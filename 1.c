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

