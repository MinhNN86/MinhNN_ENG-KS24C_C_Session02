#include <stdio.h>
int main(){
    int a = 10, b = 5;
    int tong = a + b;
    int hieu = a - b;
    int nhan = a * b;
    int chia = a / b;
    printf("\rtong %d \n\rhieu %d \r\nnhan %d \r\nchia %d", tong, hieu, nhan, chia);
    return 0;
}