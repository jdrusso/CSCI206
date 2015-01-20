#include <stdio.h>
int main(int argc, char* argv[])
{
        int i = 7;
        float x = 2.71828;
        double y = 3.1415926;
        char c = 'w';
        printf("%d, %c, %f, %lf\n", i,
                        c, x, y);
        printf("i@%p\n", &i);
}