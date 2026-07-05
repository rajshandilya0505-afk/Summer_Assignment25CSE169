//Write a program to Create inventory management system.
#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[100];
    int n, i;
    float totalValue = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    // Input product details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Product %d\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &p[i].id);

        printf("Product Name: ");
        scanf("%s", p[i].name);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Price: ");
        scanf("%f", &p[i].price);
    }

    // Display inventory
    printf("\n========== INVENTORY ==========\n");
    printf("ID\tName\tQuantity\tPrice\tTotal\n");

    for (i = 0; i < n; i++) {
        float value = p[i].quantity * p[i].price;
        totalValue += value;

        printf("%d\t%s\t%d\t\t%.2f\t%.2f\n",
               p[i].id,
               p[i].name,
               p[i].quantity,
               p[i].price,
               value);
    }

    printf("\nTotal Inventory Value = %.2f\n", totalValue);

    return 0;
}