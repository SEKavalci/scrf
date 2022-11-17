#include <stdio.h>
int main()
{
    int sonuc,n;
    sonuc=1;
    printf("Faktoriyeli alınıcak sayıyı giriniz:");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        sonuc=sonuc*i;
    }
    printf("%d", sonuc);
    return 0;
}
