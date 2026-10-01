#include <stdio.h>

struct Product {
    int id;
    char name[50];
    float price;
    int quantity;
};

int main() {
    struct Product product;
    float total;

    printf("===== Shopping Cart =====\n");

    printf("Enter Product ID: ");
    scanf("%d", &product.id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", product.name);

    printf("Enter Product Price: ");
    scanf("%f", &product.price);

    printf("Enter Quantity: ");
    scanf("%d", &product.quantity);

    total = product.price * product.quantity;

    printf("\n----- Cart Details -----\n");
    printf("Product ID: %d\n", product.id);
    printf("Product Name: %s\n", product.name);
    printf("Price: %.2f\n", product.price);
    printf("Quantity: %d\n", product.quantity);
    printf("Total: %.2f\n", total);

    return 0;
}
