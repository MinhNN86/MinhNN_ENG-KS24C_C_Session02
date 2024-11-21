#include <stdio.h>
int main(){
    const float PI = 3.14;
    int banKinh = 4;
    float chuVi = banKinh * PI * 2;
    float dienTich = banKinh * banKinh * PI;
    printf("\r\nChu Vi hinh tron la %.2f \r\nDien tich hinh tron %.2f", chuVi, dienTich);
    return 0;
}