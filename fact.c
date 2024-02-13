#include <stdio.h>
#include <limits.h>

// Function prototypes for factorial calculations
unsigned long long factorial_char(char n);
unsigned long long factorial_unsigned_char(unsigned char n);
unsigned long long factorial_short(short n);
unsigned long long factorial_unsigned_short(unsigned short n);
unsigned long long factorial_int(int n);
unsigned long long factorial_unsigned_int(unsigned int n);
unsigned long long factorial_long(long n);
unsigned long long factorial_unsigned_long(unsigned long n);
//
//char ch;
//printf("Enter one char");
//scanf("%c", &ch);
//printf("%c\n",ch);
int main() {
    // Test values
    char n_char;
    printf("Enter one char: ");
    scanf("%c", &n_char);

    unsigned char n_uchar;
    printf("Enter an unsignedchar: ");
    scanf("%u", &n_uchar);

  
    short n_short;
    printf("Enter a short: ");
    scanf("%hd", &n_short);
  
    unsigned short n_ushort;
    printf("Enter an unsigned short: ");
    scanf("%hu", &n_ushort);
  
    int n_int;
    printf("Enter an int: ");
    scanf("%d", &n_int);

    unsigned int n_uint;
    printf("Enter an unsigned int: ");
    scanf("%u", &n_uint);
  
    long n_long;
    printf("Enter a long: ");
    scanf("%ld", &n_long);  
  
    unsigned long n_ulong;
    printf("Enter an unsigned long: ");
    scanf("%lu", &n_ulong);
    

    printf("Factorial of %d (char): %llu\n", n_char, factorial_char(n_char));
    printf("Factorial of %u (unsigned char): %llu\n", n_uchar, factorial_unsigned_char(n_uchar));
    printf("Factorial of %d (short): %llu\n", n_short, factorial_short(n_short));
    printf("Factorial of %u (unsigned short): %llu\n", n_ushort, factorial_unsigned_short(n_ushort));
    printf("Factorial of %d (int): %llu\n", n_int, factorial_int(n_int));
    printf("Factorial of %u (unsigned int): %llu\n", n_uint, factorial_unsigned_int(n_uint));
    printf("Factorial of %ld (long): %llu\n", n_long, factorial_long(n_long));
    printf("Factorial of %lu (unsigned long): %llu\n", n_ulong, factorial_unsigned_long(n_ulong));

    return 0;
}

unsigned long long factorial_char(char n) {
    if (n < 0) return 0; 
    unsigned long long result = 1;
    for (char i = 1; i <= n; ++i) {
        if (CHAR_MAX / i < result) 
          printf("The number is not valid \n");

        result *= i;
    }
    return result;
}

unsigned long long factorial_unsigned_char(unsigned char n) {
    unsigned long long result = 1;
    for (unsigned char i = 1; i <= n; ++i) {
        if (UCHAR_MAX / i < result) 
      printf("The number is not valid \n");

        result *= i;
    }
    return result;
}

unsigned long long factorial_short(short n) {
    if (n < 0) return 0;
    unsigned long long result = 1;
    for (short i = 1; i <= n; ++i) {
        if (SHRT_MAX / i < result) 
      printf("The number is not valid \n");

        result *= i;
    }
    return result;
}

unsigned long long factorial_unsigned_short(unsigned short n) {
    unsigned long long result = 1;
    for (unsigned short i = 1; i <= n; ++i) {
        if (USHRT_MAX / i < result)           
      printf("The number is not valid \n");

        result *= i;
    }
    return result;
}

unsigned long long factorial_int(int n) {
    if (n < 0) return 0;
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        if (INT_MAX / i < result) 
      printf("The number is not valid \n");

        result *= i;
    }
    return result;
}

unsigned long long factorial_unsigned_int(unsigned int n) {
    unsigned long long result = 1;
    for (unsigned int i = 1; i <= n; ++i) {
        if (UINT_MAX / i < result) 
      printf("The number is not valid \n");

        result *= i;
    }
    return result;
}

unsigned long long factorial_long(long n) {
    if (n < 0) return 0;
    unsigned long long result = 1;
    for (long i = 1; i <= n; ++i) {
        if (LONG_MAX / i < result) 
      printf("The number is not valid \n");

        result *= i;
    }
    return result;
}

unsigned long long factorial_unsigned_long(unsigned long n) {
    unsigned long long result = 1;
    for (unsigned long i = 1; i <= n; ++i) {
        if (ULONG_MAX / i < result) 
      printf("The number is not valid \n");
        result *= i;
    }
    return result;
}
