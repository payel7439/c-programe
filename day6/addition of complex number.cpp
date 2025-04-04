#include <stdio.h>

struct complex {
    int real;
    int img;
};

int main() {
    struct complex c1, c2, c3;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%d %d", &c1.real, &c1.img);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%d %d", &c2.real, &c2.img);

    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;

    printf("The sum of the two complex numbers (%d + %di) + (%d + %di) = %d + %di\n", c1.real, c1.img, c2.real, c2.img, c3.real, c3.img);

    return 0;
}
