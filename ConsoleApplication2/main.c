#include <stdio.h>
#include <math.h>
void task1() {
    float x1, x2, x3, y1, y2, y3;
    float a, b, c, p;
    printf("input meaning of x1: ");
    scanf_s("%f", &x1);
    printf("input meaning of x2: ");
    scanf_s("%f", &x2);
    printf("input meaning of x3: ");
    scanf_s("%f", &x3);
    printf("input meaning of y1: ");
    scanf_s("%f", &y1);
    printf("input meaning of y2: ");
    scanf_s("%f", &y2);
    printf("input meaning of y3: ");
    scanf_s("%f", &y3);
    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("a = %f \n", a);
    b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    printf("b = %f \n", b);
    c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    printf("c = %f \n", c);
    p = a + b + c;
    printf("perimetr = %f \n", p);
}
void task2() {
    float a, b, c;
    printf("input meaning a = ");
    scanf_s("%f", &a);
    printf("input meaning b = ");
    scanf_s("%f", &b);
    printf("input meaning c = ");
    scanf_s("%f", &c);
    if (a == b && b == c) {
        printf("equilateral triangle");
    }
    else {
        printf("triangle is not equilateral");
    }
}
void task3() {
    float a1, a2, a3;
    float min, max;
    printf("input meaning a1 = ");
    scanf_s("%f", &a1);
    printf("input meaning a2 = ");
    scanf_s("%f", &a2);
    printf("input meaning a3 = ");
    scanf_s("%f", &a3);
    float m[3] = { a1,a2,a3 };
    max = m[0];
    for (int i = 0; i < 3; ++i) {
        if (m[i] > max){
            max = m[i];
        }
    }
    min = m[0];
    for (int i = 0; i < 3; ++i) {
        if (m[i] < min){
            min = m[i];
        }
    }
    
    float average = (max + min)/2;
    if (average == a1 || average == a2 || average == a3)
        printf("is an arithmetic progression");
    else
        printf("it's not an arithmetic progression");

}
void task4() {
    char a[10], mexico[15] = "Mexico", usa[15] = "USA", canada[15] = "Canada", 
        greenland[15] = "Greenland", jamaica[15] = "Jamaica", panama[15] = "Panama", 
        bahamas[15] = "Bahamas", dominica[15] = "Dominica", salvador[15] = "Salvador";
    printf("Enter country: ");
    int m = 1, u = 1, c = 1, g = 1, j = 1, p = 1, b = 1, d = 1, s = 1;
    scanf_s("%10s", &a);
    for (int i = 0; i < 6; i++) {
        if (a[i] != mexico[i]) {
            m = 0;}
    }
    for (int i = 0; i < 3; i++) {
        if (a[i] != usa[i]) {
            u = 0;}
    }
    for (int i = 0; i < 6; i++) {
        if (a[i] != canada[i]) {
            c = 0;}
    }
    for (int i = 0; i < 9; i++) {
        if (a[i] != greenland[i]) {
            g = 0;}
    }
    for (int i = 0; i < 7; i++) {
        if (a[i] != jamaica[i]) {
            j = 0;}
    }
    for (int i = 0; i < 6; i++) {
        if (a[i] != panama[i]) {
            p = 0;}
    }
    for (int i = 0; i < 7; i++) {
        if (a[i] != bahamas[i]) {
            b = 0;}
    }
    for (int i = 0; i < 8; i++) {
        if (a[i] != dominica[i]) {
            d = 0;}
    }
    for (int i = 0; i < 8; i++) {
        if (a[i] != salvador[i]) {
            s = 0;}
    }
    if (c != 1 && u != 1 && m != 1 && g != 1 && j != 1 && p != 1 && b != 1 && d != 1 && s != 1)
        printf("not located in North America");
    else
        printf("be in North America");
}
int main()
{
     int choose;
     printf("Choose your operation(1 , 2 , 3 or 4): ");
     scanf_s("%d",&choose);

     switch(choose){
         case 1:
             task1();
         break;
         case 2:
             task2();
         break;
         case 3:
             task3();
         break;
         case 4:
             task4();
         break;
         default:
             printf("no operation");
         break;
     }
    return 0;
}