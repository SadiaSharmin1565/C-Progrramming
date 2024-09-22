#include <stdio.h>
#include <string.h>

void recommendProjects(char names[][100], float profitability[], int manpower[], int equipment[], int funds[], int duration[], int numProjects, int totalManpower, int totalEquipment, int totalFunds) {
    float totalProfit = 0;
    printf("Recommended Projects:\n");
    for(int i = 0; i < numProjects; i++) {
        if (totalManpower >= manpower[i] && totalEquipment >= equipment[i] && totalFunds >= funds[i]) {
            printf("%s\n", names[i]);
            totalProfit = totalProfit + profitability[i];
            totalManpower = totalManpower - manpower[i];
            totalEquipment = totalEquipment - equipment[i];
            totalFunds = totalFunds - funds[i];
        }
    }
    printf("Total profit of recommended projects: %.2f\n", totalProfit);
}

int main(){
    char names[50][100];
    float profitability[50];
    int manpower[50];
    int equipment[50];
    int funds[50];
    int duration[50];
    int numProjects;
    int totalManpower, totalEquipment, totalFunds;

    printf("Enter the number of projects: ");
    scanf("%d", &numProjects);

    for(int i = 0; i < numProjects; i++) {
        printf("\nEnter details for Project %d:\n", i + 1);
        printf("Enter project name: ");
        scanf("%s", names[index]);
        printf("Enter profitability: ");
        scanf("%f", &profitability[index]);
        printf("Enter manpower required: ");
        scanf("%d", &manpower[index]);
        printf("Enter equipment required: ");
        scanf("%d", &equipment[index]);
        printf("Enter funds required: ");
        scanf("%d", &funds[index]);
        printf("Enter duration (in days): ");
        scanf("%d", &duration[index]);
    }

    printf("\nEnter total available manpower: ");
    scanf("%d", &totalManpower);
    printf("Enter total available equipment: ");
    scanf("%d", &totalEquipment);
    printf("Enter total available funds: ");
    scanf("%d", &totalFunds);
    recommendProjects(names, profitability, manpower, equipment, funds, duration, numProjects, totalManpower, totalEquipment, totalFunds);

    return 0;
}
