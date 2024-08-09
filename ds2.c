#include<stdio.h>
#include<string.h>
struct product {
    char name[150];
    char id[15];
    float price;
};
int main() {
    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);
    struct product p[n];
    float totalcost = 0;
    struct product *mostexpensive = &p[0];
    struct product *lowestpriced = &p[0];
    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", p[i].name); 
        printf("Enter Id: ");
        scanf("%s", p[i].id); 
        printf("Enter price: ");
        scanf("%f", &p[i].price);
        totalcost += p[i].price;
        if (p[i].price > mostexpensive->price) {
            mostexpensive = &p[i];
        }
        if (p[i].price < lowestpriced->price) {
            lowestpriced = &p[i];
        }
    }
    printf("\nProduct details\n");
    for (int i = 0; i < n; i++) {
        printf("Product name: %s\n", p[i].name);
        printf("Product ID: %s\n", p[i].id);
        printf("Product price: %.2f\n", p[i].price);
    }
    printf("\nTotal cost of all products: %.2f\n", totalcost);
    printf("\nMost Expensive Product:\n");
    printf("Name: %s\n", mostexpensive->name);
    printf("ID: %s\n", mostexpensive->id);
    printf("Price: %.2f\n", mostexpensive->price);
    printf("\nLowest Priced Product:\n");
    printf("Name: %s\n", lowestpriced->name);
    printf("ID: %s\n", lowestpriced->id);
    printf("Price: %.2f\n", lowestpriced->price);
    return 0;
}
