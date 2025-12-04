#include <stdio.h>
#include <string.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char vaccine[30];
    int dose;       // 0 = not vaccinated, 1 = first dose, 2 = full
};

struct Patient p[100];
int count = 0;

// Add patient
void addPatient() {
    printf("\nEnter Patient ID: ");
    scanf("%d", &p[count].id);

    printf("Enter Name: ");
    scanf("%s", p[count].name);

    printf("Enter Age: ");
    scanf("%d", &p[count].age);

    printf("Enter Vaccine Name: ");
    scanf("%s", p[count].vaccine);

    p[count].dose = 0;

    printf("Patient added successfully!\n");
    count++;
}

// View all patients
void viewPatients() {
    if (count == 0) {
        printf("\nNo patients found.\n");
        return;
    }

    printf("\n---- Patient List ----\n");
    for (int i = 0; i < count; i++) {
        printf("\nID: %d\nName: %s\nAge: %d\nVaccine: %s\nDose Status: %d/2\n",
               p[i].id, p[i].name, p[i].age, p[i].vaccine, p[i].dose);
    }
}

// Search patient by ID
void searchPatient() {
    int id;
    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (p[i].id == id) {
            printf("\nPatient Found!\n");
            printf("ID: %d\nName: %s\nAge: %d\nVaccine: %s\nDose: %d/2\n",
                   p[i].id, p[i].name, p[i].age, p[i].vaccine, p[i].dose);
            return;
        }
    }
    printf("Patient not found!\n");
}

// Update Vaccination Status
void updateDose() {
    int id;
    printf("\nEnter ID to update dose: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (p[i].id == id) {
            if (p[i].dose < 2) {
                p[i].dose++;
                printf("Dose Updated! Now dose = %d/2\n", p[i].dose);
            } else {
                printf("Patient already fully vaccinated!\n");
            }
            return;
        }
    }
    printf("Patient not found!\n");
}

// MAIN
int main() {
    int choice;

    do {
        printf("\n===== VACCINE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Vaccination Dose\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addPatient(); break;
            case 2: viewPatients(); break;
            case 3: searchPatient(); break;
            case 4: updateDose(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
