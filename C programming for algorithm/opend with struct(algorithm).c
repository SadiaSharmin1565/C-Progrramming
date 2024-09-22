#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROJECTS 100

// Structure to represent a project
struct Project {
    char name[50];
    float profitability;
    int manpower;
    int equipment;
    int funds;
    int duration; // in days
};

// Function to input project details
void inputProject(struct Project *project) {
    printf("Enter project name: ");
    scanf("%s", project->name);
    printf("Enter profitability: ");
    scanf("%f", &project->profitability);
    printf("Enter manpower required: ");
    scanf("%d", &project->manpower);
    printf("Enter equipment required: ");
    scanf("%d", &project->equipment);
    printf("Enter funds required: ");
    scanf("%d", &project->funds);
    printf("Enter duration (in days): ");
    scanf("%d", &project->duration);
}

// Function to recommend project allocation
void recommendProjects(struct Project projects[], int numProjects, int manpower, int equipment, int funds) {
    float totalProfit = 0;
    printf("Recommended Projects:\n");
    for (int i = 0; i < numProjects; i++) {
        if (manpower >= projects[i].manpower && equipment >= projects[i].equipment && funds >= projects[i].funds) {
            printf("%s\n", projects[i].name);
            totalProfit += projects[i].profitability;
            manpower -= projects[i].manpower;
            equipment -= projects[i].equipment;
            funds -= projects[i].funds;
        }
    }
    printf("Total profitability of recommended projects: %.2f\n", totalProfit);
}

int main() {
    struct Project projects[MAX_PROJECTS];
    int numProjects;
    int totalManpower, totalEquipment, totalFunds;

    printf("Enter the number of projects: ");
    scanf("%d", &numProjects);

    // Input project details
    for (int i = 0; i < numProjects; i++) {
        printf("\nEnter details for Project %d:\n", i + 1);
        inputProject(&projects[i]);
    }

    // Input total available resources
    printf("\nEnter total available manpower: ");
    scanf("%d", &totalManpower);
    printf("Enter total available equipment: ");
    scanf("%d", &totalEquipment);
    printf("Enter total available funds: ");
    scanf("%d", &totalFunds);

    // Recommend project allocation
    recommendProjects(projects, numProjects, totalManpower, totalEquipment, totalFunds);

    return 0;
}


