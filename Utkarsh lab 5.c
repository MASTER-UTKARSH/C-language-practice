#include <stdio.h>

int main() {
    int number, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        for (i = 1; i <= number; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld", number, factorial);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int num, original_num, sum = 0, count = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0) {
        count++;
        rem = num % 10;
        sum += pow(rem, count);
        num /= 10;
    }

    if (original_num == sum) {
        printf("%d is an Armstrong number\n", original_num);
    } else {
        printf("%d is not an Armstrong number\n", original_num);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm, temp;

    // Input
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Initialization
    gcd = (num1 < num2) ? num1 : num2;
    lcm = (num1 > num2) ? num1 : num2;

    // GCD calculation
    do {
        if (num1 % gcd == 0 && num2 % gcd == 0) {
            break;
        }
        gcd--;
    } while (gcd >= 1);

    // LCM calculation
    lcm = (num1 * num2) / gcd;

    // Output
    printf("Greatest Common Divisor (GCD): %d\n", gcd);
    printf("Least Common Multiple (LCM): %d\n", lcm);

    return 0;
}

#include <stdio.h>

int main() {
    int num, count = 0, digit, freq[10] = {0};

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        freq[digit]++;
        count++;
        num /= 10;
    }

    printf("Total count of digits: %d\n", count);
    printf("Frequency of each digit:\n");
    for (int i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%d: %d\n", i, freq[i]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    int choice, decimal, base, quotient, remainder, power;
    char converted[100], source[100];

    printf("Choose an option:\n");
    printf("1. Decimal to any other base\n");
    printf("2. Any other base to decimal\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter decimal number: ");
            scanf("%d", &decimal);
            printf("Enter target base: ");
            scanf("%d", &base);

            quotient = decimal;
            remainder = 0;
            int i = 0;

            while (quotient != 0) {
                remainder = quotient % base;
                converted[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
                quotient /= base;
            }

            converted[i] = '\0';

            // Reverse the string
            int j = 0, k = i - 1;
            while (j < k) {
                char temp = converted[j];
                converted[j] = converted[k];
                converted[k] = temp;
                j++;
                k--;
            }

            printf("Converted number: %s\n", converted);
            break;

        case 2:
            printf("Enter source number: ");
            scanf("%s", source);
            printf("Enter base value: ");
            scanf("%d", &base);

            int length = strlen(source);
            decimal = 0;
            power = length - 1;

            for (int i = 0; i < length; i++) {
                char c = source[i];
                int digit = (c >= '0' && c <= '9') ? (c - '0') : (c - 'A' + 10);
                decimal += digit * pow(base, power);
                power--;
            }

            printf("Decimal equivalent: %d\n", decimal);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define g 9.8

int main() {
    float angle, velocity, radians, max_height, max_range, time_of_flight;

    printf("Enter the initial angle (in degrees): ");
    scanf("%f", &angle);

    printf("Enter the initial velocity (in m/s): ");
    scanf("%f", &velocity);

    radians = angle * PI / 180;

    max_height = (velocity * velocity * pow(sin(radians), 2)) / (2 * g);
    max_range = (velocity * velocity * sin(2 * radians)) / g;
    time_of_flight = (2 * velocity * sin(radians)) / g;

    printf("\nAngle\tMaximum Height\tMaximum Range\tTime of Flight\n");
    printf("%f\t%f\t%f\t%f\n", angle, max_height, max_range, time_of_flight);

    return 0;
}