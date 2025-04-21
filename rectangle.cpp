#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    cout << "Введите длину прямоугольника: ";
    int length_rectangle;
    cin >> length_rectangle;
    
    cout << "Введите ширину прямоугольника: ";
    int width_rectangle;
    cin >> width_rectangle;
    
    if (length_rectangle <= 0 || width_rectangle <= 0) 
    {
        cout << "Длина не может быть меньше или равна нулю" << endl;
        return 0;
    }
    
    int perimeter = (length_rectangle + width_rectangle) * 2;
    int area = length_rectangle * width_rectangle;
    float diagonal = sqrt(length_rectangle * length_rectangle + 
                         width_rectangle * width_rectangle);
    
    cout << "Диагональ1: " << diagonal << endl;
    cout << "Площадь: " << area << endl;
    cout << "Периметр: " << perimeter << endl;
    
    return 0;
}