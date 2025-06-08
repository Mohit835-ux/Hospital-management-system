#include <stdio.h>         
#include <string.h>
                     
                     // Hospital Management Project by Mohit Kumar//
int main() {
    int ids[100];
    char names[100][50];
    int ages[100];
    char diseases[100][50];
    char contacts[100][20];     
    char addresses[100][100];   

    int count = 0;   
    int choice = 0;  
    int id, i, j, found;

    while (choice != 5) {
        printf("\n--- Hospital Management System ---\n");
        printf("1. Add Patient\n");
        printf("2. View All Patients\n");
        printf("3. Search Patient by ID\n");
        printf("4. Delete Patient by ID\n");
        printf("5. Doctors specilization\n");
        printf("6. To exit the program\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Patient ID: ");
                scanf("%d", &ids[count]);
                printf("Enter Name: ");
                scanf(" %[^\n]", names[count]);
                printf("Enter Age: ");
                scanf("%d", &ages[count]);
                printf("Enter Disease: ");
                scanf(" %[^\n]", diseases[count]);
                printf("Enter Contact Number: ");
                scanf(" %[^\n]", contacts[count]);
                printf("Enter Address: ");
                scanf(" %[^\n]", addresses[count]);
                count++;
                printf("Patient added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No patient records found.\n");
                } else {
                    for (i = 0; i < count; i++) {
                        printf("\n Patient %d \n", i + 1);
                        printf("ID: %d\n", ids[i]);
                        printf("Name: %s\n", names[i]);
                        printf("Age: %d\n", ages[i]);
                        printf("Disease: %s\n", diseases[i]);
                        printf("Contact: %s\n", contacts[i]);
                        printf("Address: %s\n", addresses[i]);
                    }
                }
                break;

            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (ids[i] == id) {
                        printf("\nID: %d\n", ids[i]);
                        printf("Name: %s\n", names[i]);
                        printf("Age: %d\n", ages[i]);
                        printf("Disease: %s\n", diseases[i]);
                        printf("Contact: %s\n", contacts[i]);
                        printf("Address: %s\n", addresses[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Patient not found.\n");
                }
                break;

            case 4:
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (ids[i] == id) {
                        for (j = i; j < count - 1; j++) {
                            ids[j] = ids[j + 1];
                            ages[j] = ages[j + 1];
                            strcpy(names[j], names[j + 1]);
                            strcpy(diseases[j], diseases[j + 1]);
                            strcpy(contacts[j], contacts[j + 1]);
                            strcpy(addresses[j], addresses[j + 1]);
                        }
                        count--;
                        found = 1;
                        printf("Patient deleted successfully.\n");
                        break;
                    }
                }
                if (!found) {
                    printf("Patient not found.\n");
                }
                break;

            case 5:
                printf("1. Dr Tanveer Alam Neorologist (AIIMS Delhi) \n");
                printf("1. Dr Ankit Ahuja Dermatologist (AIIMS Bhubneshwar) \n");
                printf("1. Dr Devanand tripathi Cardiologist (AIIMS Rajkot) \n");
                printf("1. Dr Shivanand mandal Dentist (AIIMS Delhi) \n");
                break;
            case 6:
            	printf("Sorry program existing\n");
            	break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


