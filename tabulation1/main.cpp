#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

#define CUBE(x) (x)*(x)*(x)
#define SQUARE(x) (x)*(x)
#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '

#define COND11(x) (x) <= -1.0
#define FUNC11(x) (-2)*CUBE(x)+4*SQUARE(x)+(x)

#define COND12(x) (x) > -1 && (x) <3
#define FUNC12(x) 5*CUBE(x)+SQUARE(x)-1
#define FUNC13(x) CUBE(x)+2*(x)-3
#define FUNC1(x) COND11(x) ? FUNC11(x) : (COND12(x) ? FUNC12(x) : FUNC13(x))
int main()
{
    double a = -3.0, b = 5, x, h = 0.1;
    printf("x:\t\t");
    for (x = a; x <= b; x += h)
    {
        printf("%6.2f%c", x, PUT_DELIM(x, h, b));
    }

    printf("y:\t\t");
    for (x = a; x <= b; x += h)
    {
        printf("%6.3f%c", FUNC1(x), PUT_DELIM(x, h , b));
    }
    return 0;
}
