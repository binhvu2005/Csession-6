#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1,n2,n3,max1,max2,min1,min2;
	printf("nhap 3 so nguyen");
	scanf("%d %d %d",&n1,&n2,&n3);
  do {
    printf("**************caculator********\n");
    printf("1. tong 3 so\n");
    printf("2. trung binh cong\n");
    printf("3. min max trong 3 so\n");
    printf("4. Thoat\n");
    printf("Lua chon cua ban:");
    int choice; scanf("%d",&choice);
    switch(choice) {
      case 1:
        printf("tong 3 so la:%d\n",n1+n2+n3);
        break;
      case 2:
        printf("trung binh cong 3 so la:%d\n",(n1+n2+n3)/3);
        break;
      case 3:
    max1 = (n1>n2) ? n1 : n2;
    max2 = (max1>n3) ? max1 : n3;
    min1 = (n1<n2) ? n1 : n2;
    min2 = (min1<n3) ? min1 : n3;
        printf("min=%d max=%d\n",min2,max2); 
        break;
      case 4:
        exit(0);
      default:
        printf("Vui long chon tu 1-4\n");
    }
  } while ("Vui long cho tu 1 - 4\n");
}
