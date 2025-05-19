     bmi = computeBMI(weight, height);
    getBMICategory(bmi, category);

    printf("\n===== BMI RESULT =====\n");
    printf("Name: %s\n", name);
    printf("Height: %.2f m\n", height);
    printf("Weight: %.2f kg\n", weight);
    printf("BMI: %.2f\n", bmi);
    printf("Category: %s\n", category);
    printf("=======================\n");

    // Store the record
    strcpy(history[recordCount].name, name);
    history[recordCount].height = height;
    history[recordCount].weight = weight;
    history[recordCount].bmi = bmi;
    strcpy(history[recordCount].category, category);
    strcpy(history[recordCount].unit, unit);
    recordCount++;
}

// Function to compute BMI
float computeBMI(float weight, float height) {
    return weight / (height * height);
}



