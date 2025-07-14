#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b, result;

    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
        printf("5. Sine\n6. Cosine\n7. Tangent\n8. Square Root\n");
        printf("9. Area of Square\n10. Rectangle\n11. Circle\n12. Triangle\n");
        printf("13. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: case 2: case 3: case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (choice == 1) result = a + b;
                else if (choice == 2) result = a - b;
                else if (choice == 3) result = a * b;
                else if (b != 0) result = a / b;
                else { printf("Divide by 0 error.\n"); continue; }
                printf("Result = %.2lf\n", result); break;

            case 5: case 6: case 7:
                printf("Enter angle (degrees): ");
                scanf("%lf", &a);
                a = a * M_PI / 180;
                if (choice == 5) result = sin(a);
                else if (choice == 6) result = cos(a);
                else result = tan(a);
                printf("Result = %.4lf\n", result); break;

            case 8:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a >= 0) printf("Sqrt = %.4lf\n", sqrt(a));
                else printf("Invalid input.\n");
                break;

            case 9:
                printf("Enter side: ");
                scanf("%lf", &a);
                printf("Area = %.2lf\n", a * a); break;

            case 10:
                printf("Enter length and breadth: ");
                scanf("%lf %lf", &a, &b);
                printf("Area = %.2lf\n", a * b); break;

            case 11:
                printf("Enter radius: ");
                scanf("%lf", &a);
                printf("Area = %.2lf\n", M_PI * a * a); break;

            case 12:
                printf("Enter base and height: ");
                scanf("%lf %lf", &a, &b);
                printf("Area = %.2lf\n", 0.5 * a * b); break;

            case 13:
                printf("Exiting...\n"); break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 13);

    return 0;
}

