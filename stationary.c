#include <stdio.h>
#include <stdlib.h>

void owner();
void addItems();
void editItems();
void showItems();

void customer();
void displayItems();
void selectItems();
void viewBill();

typedef struct items{
    int itemId;
    char itemName[10];
    int price;
    int quantity;
}items;

int main() {

    int choice;
    printf("\n                                === Welcome to our Boookshop! ===                                    \n");
    printf("\n-----------------------------------------------------------------------------------------------------\n");
    printf("(1)Log as a customer\n");
    printf("(2)Log as the owner\n");
    printf("(3)Exit\n");
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("\n Please select your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        customer();

        case 2:
        owner();

        case 3:
        printf("\n-----------------------------------------------------------------------------------------------------\n");
        printf("                             ===== Thank you come Again =====                                         \n");
        exit(0);

        default:
        printf("                              === You entered an invalid option ===                                  \n");
        printf("-----------------------------------------------------------------------------------------------------\n");
    }

    return 0;
}

void customer() {

    int choice;
    int x;
    while (x==0){
        printf("\n-----------------------------------------------------------------------------------------------------\n");
        printf("                                    === Choose your option ===                                        \n");
        printf("-----------------------------------------------------------------------------------------------------\n");
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
            printf("                              === You entered an invalid option ===                                  \n");
            printf("-----------------------------------------------------------------------------------------------------\n");
            x=0;
            break;
        }
    }
}

void displayItems() {

    items *it;
    FILE *fp;
    fp = fopen("itemlist.txt", "r");
    
    printf("                                      === Items Available ===                                       \n");
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("item id\t\titem name\t\tprice\t\tquantity\n\n");
    // printf("1\t\tBooks\t\t\tRs.50\t\t25\n");
    // printf("2\t\tPencils\t\t\tRs.20\t\t25\n");
    // printf("3\t\tPens\t\t\tRs.25\t\t25\n");
    // printf("4\t\tRulers\t\t\tRs.15\t\t25\n");
    // printf("5\t\tErasers\t\t\tRs.30\t\t25\n");
    // printf("6\t\tFile Covers\t\tRs.20\t\t25\n");
    // printf("7\t\tDrawing Books\t\tRs.30\t\t25\n");
    // printf("8\t\tColour Pencils\t\tRs.35\t\t25\n");
    printf("-----------------------------------------------------------------------------------------------------\n");

    while(fread(&it,sizeof(items),1,fp)) {
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("%d\t\t %s\t\t %d\t\t %d\n\n", it->itemId, it->itemName, it->price, it->quantity);
    }  

    fclose(fp);
}

void selectItems() {

    items *it;
    int n,i,x;
    int found=0;
    double price1,total;
    FILE *fp;
    FILE *fp2;

    printf("How many items do you want to buy from the shop?");
    scanf("%d", &n);

    fp = fopen("itemlist.txt", "r");
    fp2 = fopen("tempbill.txt", "a+");
 
    for (i=0; i<=n; i++) {
        printf("\n(1)Enter Item Id: "); 
        scanf("%d", &it[i].itemId);
        printf("\n(2)Enter Item Quantity: "); 
        scanf("%d", &it[i].quantity);

        price1 = it->price;
        total = price1*it->quantity;
        
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("\t Id: %d",it->itemId);
        printf("\t\t|\t\t Checkout \t\t|\t\t %s\n",it->itemName);
        printf("-----------------------------------------------------------------------------------------------------");
        printf("\n\t\t\t| Unit Price --------------------- Rs.%.2f|",it->price);
        printf("\n\t\t\t| Quantity -----------------------  x  %.2f|",it->quantity);
        printf("\n\t\t\t| Total Price -------------------- Rs.%.2f|\n\t\t\t\n",total);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    //printf("\nYou bought %s items of %s item.",quantity, id);  
    printf("-----------------------------------------------------------------------------------------------------\n");

    fclose(fp);     
    fclose(fp2);     
}              

void viewBill() {

    items *it;
    int total;
    FILE *fp;

    printf("                             === Welcome to our Boookshop! ===                                         \n");
    printf("\n----------------------------------------------------------------------------------------------------\n");
    
    fp = fopen("bill.txt", "r");
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("ItemNumber\t\tName\t\tQuantity\t\tPrice\t\tTotal");
    printf("\n----------------------------------------------------------------------------------------------------\n");

    while(fread(&it,sizeof(items),1,fp)) {

        total = it->price*it->quantity;

        printf("\t\t\t %ld",it->itemId);
        printf("\n%s",it->itemName);  
        printf("\t\t\t%ld",it->price);      
        printf("\t\t\t%ld",it->quantity);        
        printf("\t\t\t\t%ld\n",total);
    }

    fclose(fp);
    
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("                             ===== Thank you come Again =====                                         \n");
}


void owner() {

    int choice;
    int x=0;
    while (x==0){
        printf("\n-----------------------------------------------------------------------------------------------------\n");
        printf("                                    === Choose your option ===                                        \n");
        printf("-----------------------------------------------------------------------------------------------------\n");
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
            printf("                              === You entered an invalid option ===                                  \n");
            printf("-----------------------------------------------------------------------------------------------------\n");
            x=0;
            break;
        }
    }
}


void addItems() {

    items *it;
    int n, i;
    FILE *fp;

    printf("How many items do you want to insert to the list");
    scanf("%d", &n);

    it=(items*)calloc(n,sizeof(items));

    fp = fopen("itemlist.txt", "a+");

    for (i=1; i<=n; i++) {
        printf("\n(1)Enter Item Id: "); 
        scanf("%d", &it[i].itemId);
        printf("\n(2)Enter Item Name: ");
        scanf("%s", &it[i].itemName);
        printf("\n(3)Enter Item Price: "); 
        scanf("%d", &it[i].price);
        printf("\n(3)Enter Item Quantity: "); 
        scanf("%d", &it[i].quantity);  

        fwrite(&it[i],sizeof(items),1,fp);  
    }    

    // printf("\nYour shop has %s items of %s item." ,quantity,name); 
    // printf("-----------------------------------------------------------------------------------------------------\n");
    
    fclose(fp);

    owner();
}

void editItems() {
    
    items *it;
    int n,i,found;
    FILE *fp;
    FILE *tempfp;
    
    printf("How many items do you want to edit of the list");
    scanf("%d", &n);

    fp = fopen("itemlist.txt", "r");
    tempfp = fopen("tempitemlist.txt", "w");

    for (i=1; i<=n; i++) {
        printf("\n(1)Enter New Item Id: "); 
        scanf("%d", &it[i].itemId);
        printf("\n(2)Enter New Item Name: ");
        scanf("%d", &it[i].itemName);
        printf("\n(3)Enter New Item Price: "); 
        scanf("%d", &it[i].price);
        printf("\n(3)Enter New Item Quantity: "); 
        scanf("%d", &it[i].quantity);

        fwrite(&it,sizeof(items),1,tempfp);        
    }

    printf("\nNow your shop has %s items of %s item." ,quantity,name); 
    printf("-----------------------------------------------------------------------------------------------------\n");

    fclose(fp);
    fclose(tempfp);
}

void showItems() {

    items *it;
    FILE *fp;

    fp = fopen("itemlist.txt", "r");

    printf("                                      === Items Available ===                                       \n");
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("item id\t\titem name\t\tprice\t\tquantity\n\n");

   while(fread(&it,sizeof(items),1,fp)) {
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("%d\t\t %s\t\t %d\t\t %d\n\n", it->itemId, it->itemName, it->price, it->quantity);
    } 

    //printf("\nYour shop has item list of %s items." ,count); 
    printf("-----------------------------------------------------------------------------------------------------\n");

    fclose(fp);
}

