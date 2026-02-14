#include <stdio.h>

typedef char* String;

typedef int Number;

typedef struct {
    int productId;
    String name;
    int expiration;
    float price;

}Product;

int main() {

    Product product = {23,"Milk",12,42.56};
    product.price = 1234;
    printf("Product name: %s\n", product.name);
    printf("Product expiration: %d\n", product.expiration);
    printf("Product price: %f\n", product.price);


}