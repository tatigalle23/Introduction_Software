#include<stdio.h>

typedef struct{
    int xpos;
    int ypos;
}Point;

Point getScale2xPoint(const Point* pi){
    Point pb;
    pb.xpos=pi->xpos*2;
    pb.ypos=pi->ypos*2;
    return pb;
    
}


int main(){
    Point p1;
    p1.xpos;
    p1.ypos;
    scanf("%d %d", &p1.xpos, &p1.ypos);

    Point p2=getScale2xPoint(&p1);
    printf("%d %d", p2.xpos, p2.ypos);
 
}