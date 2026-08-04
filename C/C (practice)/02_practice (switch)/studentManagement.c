#include <stdio.h>

int main() {
    int choice;
    char name[30];
    int id;
    char batch[20];

    printf("1.Enter Name\n");
    printf("2.Enter ID\n");
    printf("3.Enter Batch\n");
    printf("4.Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
           printf("Enter Name: ");
           scanf(" %[^\n]",name);      //used when the names contain space eg: Nandini Kumari, for firstname only can use %s
           printf("Name: %s", name);
           break;

        case 2:
            printf("Enter ID: ");
            scanf("%d", &id);         // int does use &
            printf("ID: %d", id);
            break;
            
        case 3:
            printf("Enter Batch: ");
            scanf("%s", batch);         // strings does not need to use &
            printf("Batch: %s", batch);
            break;

        default:
            printf("Invalid Choice") ;

    }
    return 0;
}