// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.2f%%", percentage);
    }
    else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.2f%%", percentage);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
