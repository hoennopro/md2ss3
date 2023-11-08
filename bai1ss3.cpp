#include <stdio.h>
int main(){
    //Nhap ban kinh hinh tron
    float radius, perimeter, area;
    const float PI = 3.14;
    //Tinh chu vi va dien tich hinh tron
    printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &radius);
    perimeter = 2 * radius * PI;
    area = PI * radius * radius;
      printf("Chu vi hinh tron: %.2f\n", perimeter);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}
