#include <stdio.h>
#include <stdint.h>

void test_addition() {
    int64_t a = 123456789012345;
    int64_t b = 98765432109876;
    printf("Addition: %lld + %lld = %lld\n", a, b, a + b);
}

void test_subtraction() {
    int64_t a = 123456789012345;
    int64_t b = 98765432109876;
    printf("Subtraction: %lld - %lld = %lld\n", a, b, a - b);
}

void test_bitwise_operations() {
    int64_t a = 0x0F0F0F0F0F0F0F0F;
    int64_t b = 0xF0F0F0F0F0F0F0F0;

    printf("Bitwise AND: %llx & %llx = %llx\n", a, b, a & b);
    printf("Bitwise OR: %llx | %llx = %llx\n", a, b, a | b);
    printf("Bitwise XOR: %llx ^ %llx = %llx\n", a, b, a ^ b);
    printf("Bitwise NOT: ~%llx = %llx\n", a, ~a);
}

void test_shift_operations() {
    int64_t a = 0x123456789ABCDEF0;
    int64_t b = 4;

    printf("Logical Shift Left: %llx << %lld = %llx\n", a, b, a << b);
    printf("Logical Shift Right: %llx >> %lld = %llx\n", a, b, (uint64_t)a >> b);
    printf("Arithmetic Shift Right: %llx >> %lld = %llx\n", a, b, a >> b);
}

int main() {
    test_addition();
    test_subtraction();
    test_bitwise_operations();
    test_shift_operations();
    return 0;
}
