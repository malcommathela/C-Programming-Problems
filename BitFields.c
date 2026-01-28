#include <stdio.h>

struct Status {
    unsigned int is_valid   : 1;   // 0 or 1
    unsigned int is_ready   : 1;   // 0 or 1
    unsigned int priority   : 2;   // 0–3
    unsigned int error_code : 4;   // 0–15
};

// Emphasis

int main() {
    struct Status s = {1, 0, 2, 5};

    printf("is_valid   = %d\n", s.is_valid);
    printf("is_ready   = %d\n", s.is_ready);
    printf("priority   = %d\n", s.priority);
    printf("error_code = %d\n", s.error_code);

    return 0;
}
