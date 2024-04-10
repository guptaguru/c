#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double x, term, result = 1.0;

    printf("Enter the value of n and x in degrees: ");
    scanf("%d %lf", &n, &x);

    // Convert degrees to radians
    x = x * (M_PI / 180);

    // Calculate cos(x) using the Taylor series expansion
    for (i = 1; i <= n; i++) {
        term = pow(-1, i) * pow(x, 2 * i) / tgamma(2 * i);
        result += term;
    }

    printf("cos(%f) is %f\n", x, result);

    return 0;
}
