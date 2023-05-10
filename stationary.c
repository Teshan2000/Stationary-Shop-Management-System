#include <stdio.h>

int main() {
    int choice;
    printf("Welcome to our Boookshop!\n");
    printf("(1)Log as a customer");
    printf("(2)Log as a customer");
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
}

void order() {
    int additem;
    printf("");

}

void bill() {
    
}