#include <stdio.h>

int main() {
    int choice;
    printf("Welcome to our Boookshop!\n");
    printf("(1)Log as a customer");
    printf("(2)Log as the owner");
    printf("(3)Exit");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        customer();

        case 2:
        owner();

        case 3:
        exit();
    }


}

void customer() {

    int choice;
    printf("Choose your option");
    printf("(1)Select items");
    printf("(2)Display Items");
    printf("(3)View Bill");
    printf("(4)Exit");
    scanf("%d", &choice);   

    switch (choice) {
        case 1:
        selectItems();

        case 2:
        displayItems();

        case 3:
        viewBill();

        case 4:
        exit();
    }


    int item;
    printf("Choose your stationary item");
    printf("Books");
    printf("Pencils");
    printf("Pens");
    scanf("%d", &item);
}

void owner() {

    int choice;
    printf("Choose your option");
    printf("(1)Add items");
    printf("(2)Edit Items");
    printf("(3)Show Items");
    printf("(4)Exit");
    scanf("%d", &choice);   

    switch (choice) {
        case 1:
        addItems();

        case 2:
        editItems();

        case 3:
        showItems();

        case 4:
        exit();
    }
}

void order() {
    int additem;
    printf("");

}

void viewBill() {
    
}