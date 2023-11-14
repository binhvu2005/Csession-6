#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
//#include <stdio.h>
//
//int main() {
//    int n, i;
//    for (n = 1; n <= 9; ++n) {
//        printf("bang cuu chuong cua %d:\n", n);
//        for (i = 1; i <= 10; ++i) {
//            printf("%d x %d = %d\n", n, i, n * i);
//        }
//        printf("\n");
//    }
//    return 0;
//}

