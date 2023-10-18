#include <stdio.h>
#include <stdlib.h>

void customer();
void owner();
void addItems();
void editItems();
void showItems();
void displayItems();
void selectItems();
void viewBill();

struct items{
    int itemId;
    char itemName[10];
    int quantity;
}

struct addItems{
    int count;
    char id, name, quantity;
}

struct editItems{
    int count;
    char id, name, quantity;
}

int main() {
    int choice;
    printf("Welcome to our Boookshop!\n");
    printf("(1)Log as a customer\n");
    printf("(2)Log as the owner\n");
    printf("(3)Exit\n");

    printf("\n Please select your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        customer();

        case 2:
        owner();

        case 3:
        exit(0);

        default:
        printf("You entered an invalid option\n");
    }
}

void customer() {

    int choice;
    printf("Choose your option\n");
    printf("(1)Display items\n");
    printf("(2)Select items\n");
    printf("(3)View Bill\n");
    printf("(4)Back to Home page\n");
    scanf("%d", &choice);   

    switch (choice) {
        case 1:
        displayItems();  
        break;      

        case 2:
        selectItems();
        break;

        case 3:
        viewBill();
        break;

        case 4:
        main();

        default:
        printf("You entered an invalid option\n");
        break;
    }
}


void displayItems() {
    printf("Display items\n");

    file1 = fopen("itemlist.txt", "r");
    
    printf("---------------------------------------------------------\n");
    printf("(1)Books-------------------------------------Rs.50\n");
    printf("(2)Pencils-----------------------------------Rs.20\n");
    printf("(3)Pens--------------------------------------Rs.25\n");
    printf("(4)Rulers------------------------------------Rs.15\n");
    printf("(5)Erasers-----------------------------------Rs.30\n");
    printf("(6)File Covers-------------------------------Rs.20\n");
    printf("(7)Drawing Books-----------------------------Rs.30\n");
    printf("(8)Colour Pencils----------------------------Rs.35\n");
    printf("---------------------------------------------------------\n");

    fclose(flie1);
}

void selectItems() {
    printf("Select items\n");
    int choice;
    char id, quantity;

    file1 = fopen("itemlist.txt", "r");
    file2 = fopen("bill.txt", "a");

    printf("Choose your option\n");  
    printf("\n(1)Enter Item Id: "); 
    scanf("%d", &id);
    printf("\n(2)Enter Item Quantity: "); 
    scanf("%d", &quantity);
    printf("\nYou bought {} items of {} item.");  

    fclose(flie);       
}              

void viewBill() {
    printf("View Bill\n");
    items it;
    printf("                             === Welcome to our Boookshop! ===                                         \n");
    printf("\n----------------------------------------------------------------------------------------------------\n");
    
    file1 = fopen("bill.txt", "r");
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("ItemNumber\t\tName\t\tQuantity\t\tPrice\t\tTotal");
    printf("\n----------------------------------------------------------------------------------------------------\n");

    while(fread(&it,sizeof(items),file1)) {

        printf("\t\t\t %ld",bl.itemid);
        printf("\n%s",bl.itemname);        
        printf("\t\t\t%ld",bl.qunti);
        printf("\t\t\t%ld",bl.prize->price);
        printf("\t\t\t\t%ld\n", total);

    }

    fclose(flie1);
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("                             ===== Thank you come Again =====                                         \n");
}


void owner() {

    int choice;
    printf("Choose your option\n");
    printf("(1)Add items\n");
    printf("(2)Edit Items\n");
    printf("(3)Show Items\n");
    printf("(4)Back to Home page\n");
    scanf("%d", &choice);   

    switch (choice) {
        case 1:
        addItems();
        break;

        case 2:
        editItems();
        break;

        case 3:
        showItems();
        break;

        case 4:
        main();

        default:
        printf("You entered an invalid option\n");
        break;
    }
}


void addItems() {

    int count;
    char id, name, quantity;
    printf("add items\n");

    printf("How many items do you want to insert to the list");
    scanf("%d", &count);

    file1 = fopen("itemlist.txt", "a");

    for (int i = 1; i <= count; i++) {
        printf("\n(1)Enter Item Id: "); 
        scanf("%d", &id);
        printf("\n(2)Enter Item Name: ");
        scanf("%d", &name);
        printf("\n(3)Enter Item Quantity: "); 
        scanf("%d", &quantity);
        printf("\nYour shop has %s items of %s item." ,quantity,name); 
    }    
    fclose(flie1);
}

void editItems() {
    
    int count;
    char id, name, quantity;
    printf("edit items\n");
    
    printf("How many items do you want to edit of the list");
    scanf("%d", &count);

    file1 = fopen("itemlist.txt", "w");

    for (int i = 1; i <= count; i++) {
        printf("\n(1)Enter New Item Id: "); 
        scanf("%d", &id);
        printf("\n(2)Enter New Item Name: ");
        scanf("%d", &name);
        printf("\n(3)Enter New Item Quantity: "); 
        scanf("%d", &quantity);
        printf("\nNow your shop has %s items of %s item." ,quantity,name); 
    }
    fclose(flie1);
}

void showItems() {

    int count;
    char id, name, quantity;
    printf("show items\n");

    file1 = fopen("itemlist.txt", "r");

    for (int i = 1; i <= count; i++) {
        
        printf("Id \tName \tQuantity", id,name,quantity);
        printf("%s \t%s \t%s", id,name,quantity);
    }
    printf("\nYour shop has item list of %s items." ,count); 
    fclose(flie1);
}

