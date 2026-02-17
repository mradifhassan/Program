#include <stdio.h>
#include <math.h>

#define Rh 1.09678e-2

int wavelength(int n1, int n2)
{
    if(n1 < 1 || n2 < 1 || n1 <= n2) printf("Enter n1 and n2 again\n");
    return 0;
    double x = pow(pow(n1, 2), -1) - pow(pow(n2, 2), -1);
    double length = pow((Rh * x), -1);
    if(length < 380 && length > 10) printf("λ = %.2lf nm (UV ray)\n", length);
    else if(length < 780 && length > 380)
    {
        if(length > 380 && length < 424) printf("λ = %.2lf nm (Violet)\n", length);
        else if(length > 380 && length < 424) printf("λ = %.2lf nm (Violet)\n", length);
        else if(length > 424 && length < 450) printf("λ = %.2lf nm (Blue)\n", length);
        else if(length > 450 && length < 500) printf("λ = %.2lf nm (Sky-Blue)\n", length);
        else if(length > 500 && length < 575) printf("λ = %.2lf nm (Green)\n", length);
        else if(length > 590 && length < 647) printf("λ = %.2lf nm (Yellow)\n", length);
        else if(length > 647 && length < 780) printf("λ = %.2lf nm (Red)\n", length);
    }
    else printf("λ = %.2lf nm (IR Ray)\n", length);
    return length;
}

int main()
{
    int n1, n2;
    while(1)
    {
        printf("Enter n1: ");
        scanf("%d", &n1);
        printf("Enter n2: ");
        scanf("%d", &n2);
        wavelength(n1, n2);
    }
    return 0;
}
