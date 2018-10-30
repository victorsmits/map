#include <stdio.h>

long map(long, long, long, long, long);

int main() {
    map(2, -5, 5, 1, 10);
    map(5, 0, 10, 0, 50);
    return 0;
}

long map(long a, long b, long c, long d, long e){
    float f = ((float)c-(float)a)/((float)c-(float)b);

    float g = (float)e-(f * ((float)e-(float)d));

    return printf("%ld\n",(long)g);
}