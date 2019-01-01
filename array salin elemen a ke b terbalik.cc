#include <stdio.h>
#include <conio.h>
int main (void)
{
    int a[6]={1,2,3,5,6,7};
    int b[6];
    int i=0, j=0;
    printf("Nilai Array Yang Akan Ditampilkan\n");
    for (i=5; i>=0; i--)
    {
        b[i]=a[j];
        printf("%d", a[j]);
        j++;
    }
    printf("\n");
    printf("\nPosisi Terbalik Dari Array A ke Array B Adalah\n");
    for (i=0; i<6; i++)
    {
        printf("%d", b[i]);
    }
    printf("\n");
    getch();
    return 0;
}
