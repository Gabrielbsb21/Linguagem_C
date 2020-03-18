#include <stdio.h>
#define PI 3.14159 
int main() {
    double a, volume;
    scanf("%lf", &a);
    a = a * a * a;
    volume = 4 / 3.0 * PI * a;
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
