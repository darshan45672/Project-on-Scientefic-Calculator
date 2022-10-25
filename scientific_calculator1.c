#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int chce, i, a, b;
  float x, y, result;
  do {
    printf("\nSelect your operation:\n");
    printf("\n0. to exit\n------------\n1. Addition\n------------\n2. Subraction\n------------\n3. "
           "Multiplication\n------------\n4. Division\n------------\n");
    printf("5. Square root\n------------\n6. X ^ Y\n------------\n7. X ^ "
           "2\n------------\n8. X ^ 3\n------------\n");
    printf("9. 1 / X\n------------\n10. X ^ (1 / y)\n------------\n11. X ^ (1 "
           "/ 3)\n-----------\n");
    printf("12. 10 ^ X\n------------\n13. X! (Factorial)\n------------\n14. % (Percentage)"
           "\n------------\n15. log10(x)\n------------\n");
    printf("16. Modulus (Remainder)\n------------\n17. Sin(X)\n------------\n18. "
           "Cos(X)\n------------\n19. Tan(X)\n------------\n20. "
           "Cosec(X)\n------------\n");
    printf("21. Cot(X)\n------------\n22. Sec(X)\n------------\n");
    printf("Enter your choice:\t ");
    scanf("%d", &chce);
    switch (chce) {
    case 0:{
      exit(0);
      break;
      }
    case 1: {
      printf("\nEnter value for X:\t");
      scanf("%f", &x);
      printf("\nEnter value for Y:\t");
      scanf("%f", &y);
      printf("\nsum is %f\n", x + y);
      break;
    }
    case 2: {
      printf("\nEnter value for X:\t");
      scanf("%f", &x);
      printf("\nEnter value for Y:\t");
      scanf("%f", &y);
      printf("\nDifference is %f\n", x - y);
      break;
    }
    case 3: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nEnter a value for Y:\t");
      scanf("%f", &y);
      printf("\nProduct is %f\n", x * y);
      break;
    }
    case 4: {
      printf("\nEnter the value for 'X' (Value for Numerator):\t");
      scanf("%f", &x);
      printf("\nEnter a value for 'Y' (Value for Denominator) :\t");
      scanf("%f", &y);
      if (y == 0)
        printf("Divide by zero by error\nnot defined value(infinite)!");
      printf("\nQuotient is %f\n", x / y);
      break;
    }
    case 5: {
      printf("\nEnter a value for 'X' to find its square root:\t");
      scanf("%f", &x);
      printf("\nroot is %f\n", sqrt(x));
      break;
    }
    case 6: {
      printf("\nEnter a value for x:\t");
      scanf("%f", &x);
      printf("\nEnter a value for Y:\t");
      scanf("%f", &y);
      printf("\nresult is %f\n", (pow(x, y)));
      break;
    }
    case 7: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nSquare of %f is %f\n", x, (pow(x, 2)));
      break;
    }
    case 8: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nCube of %f is %f\n", x, (pow(x, 3)));
      break;
    }
    case 9: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\n1/%f is equal to %f\n", x, (pow(x, -1)));
      break;
    }
    case 10: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nEnter a value for Y:\t");
      scanf("%f", &y);
      printf("\n Your result is %f\n", (pow(x, (1 / y))));
      break;
    }
    case 11: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nCube root of %f ^ (1 / 3) is %f\n", x, (pow(x, (1 / 3))));
      break;
    }
    case 12: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nResult is %f", (pow(10, x)));
      break;
    }
    case 13: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      result = 1;
      for (i = 1; i <= x; i++) {
        result *= i;
      }
      printf("\nFactorial of %f is %f\n", x, result);
      break;
    }
    case 14: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nEnter a value for Y:\t");
      scanf("%f", &y);
      printf("\nPercentage is %f\n", ((x * y / 100)));
      break;
    }
    case 15: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nlog10(%f) is %f\n", x, log10(x));
      break;
    }
    case 16: {
      printf("\nEnter a value for X (integer Numerator ):\t");
      scanf("%d", &a);
      printf("\nEnter a value for Y(intger denominator):\t");
      scanf("%d", &b);

      printf("\nModulus or Remainder is %d\n", a % b);
      break;
    }
    case 17: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nSine value of %f is %f\n", x, sin(x));
      break;
    }
    case 18: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nCosine value of %f is %f\n", x, cos(x));
      break;
    }
    case 19: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nTangent value of %f is %f\n", x, tan(x));
      break;
    }
    case 20: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nCosecat value of %f is %f\n", x, (1 / sin(x)));
      break;
    }
    case 21: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nCotangent value of %f is %f\n", x, (1 / tan(x)));
      break;
    }
    case 22: {
      printf("\nEnter a value for X:\t");
      scanf("%f", &x);
      printf("\nSecant value of %f is %f\n", x, (1 / cos(x)));
      break;
    }
    }
  } while (1);
  return 0;
}