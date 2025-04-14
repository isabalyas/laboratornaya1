#include <stdio.h>
#include <math.h> 


float get_perimeter(float side1, float side2, float side3) {
    float perimeter = side1 + side2 + side3;
    return perimeter;
}

float get_area(float side1, float side2, float side3) {
    float p = get_perimeter(side1, side2, side3) / 2; // p -- полупериметр
    float area = sqrt(p * (p - side1) * (p - side2) * (p - side3));
    return area;
}

int check_isosceles(float side1, float side2, float side3) {
    if (side1 == side2 || side1 == side3 || side2 == side3) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    float a, b, c;

    printf("Введите три стороны треугольника через пробел: ");
    scanf("%f %f %f", &a, &b, &c); // ввод чисел

    // Проверка
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Ошибка! Это не треугольник!\n");
        return 1; 
    }

    // вывод
    printf("Периметр = %.2f\n", get_perimeter(a, b, c));
    printf("Площадь = %.2f\n", get_area(a, b, c));

    if (check_isosceles(a, b, c)) {
        printf("Треугольник равнобедренный!\n");
    } else {
        printf("Треугольник НЕ равнобедренный!\n");
    }

    return 0;
}
