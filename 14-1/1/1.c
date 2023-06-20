#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

int main()
{
    
    Point* pi = (Point*)malloc(sizeof(Point));
    
    scanf("%d %d", &pi->xpos, &pi->ypos);
    printf("%d %d\n", pi->xpos, pi->ypos);
    free(pi);

}