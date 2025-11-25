#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;
    float fixed_charge = 50.0;
    
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    
    
    if (units <= 100) {
        bill = units * 1.20;
    }
    else if (units <= 200) {
        bill = 100 * 1.20 + (units - 100) * 2.00;
    }
    else if (units <= 300) {
        bill = 100 * 1.20 + 100 * 2.00 + (units - 200) * 3.00;
    }
    else {
        bill = 100 * 1.20 + 100 * 2.00 + 100 * 3.00 + (units - 300) * 4.00;
    }
    
    bill += fixed_charge;
    
    printf("\n=== ELECTRICITY BILL ===\n");
    printf("Units consumed: %d\n", units);
    printf("Fixed charge: Rs. %.2f\n", fixed_charge);
    printf("Total bill: Rs. %.2f\n", bill);
    
    return 0;
}
