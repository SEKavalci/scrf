#include <stdio.h>

int main() {
    printf("Sıralanmasını istediğiniz 5 adet sayı giriniz:");
    int a[4];
        for(int j=0;j<4;j++)
    {
        scanf("%d",&a[j]);
    }
    int temp;
    for (int c=0;c<4;c++){
        for(int b=0;b<3;b++){
            if(a[b]>a[b+1]){
                temp=a[b];
                a[b]=a[b+1];
                a[b+1]=temp;
            }
        }
    }
        for(int i = 0;i < 4;i++)
    {
        printf("%d",a[i]);
    }
        return 0;
}
