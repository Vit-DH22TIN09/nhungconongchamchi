#include <stdio.h>

void nhapTu1DenN(int n) {
    int x; 
    for (int i = 1; i <= n; i++) {
    printf("Nhap so thu %d: ", i);
    scanf("%d", &x);
        if (x != i) {
    printf("Ban da nhap sai! Phai nhap lai tu dau.\n\n");
    i = 0; 
        }
    }
printf("Ban da nhap dung tu 1 den %d!\n", n);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
nhapTu1DenN(n); 
}
