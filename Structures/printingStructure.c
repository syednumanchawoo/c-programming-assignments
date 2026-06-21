#include <stdio.h>

typedef struct{
    int x;
    int y;
} Vector2D;

Vector2D sumVector(Vector2D a, Vector2D b);

int main(){
    Vector2D a = {2,5}, b = {3,2};
    Vector2D c = sumVector(a,b);
    printf("%d,%d\n", c.x,c.y);
    return 0;
}

Vector2D sumVector(Vector2D a, Vector2D b){
    Vector2D c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}