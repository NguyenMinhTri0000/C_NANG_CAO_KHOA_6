//Hien thi nhieu lan
#include <stdio.h>
#include <stdlib.h>

void NhapMang(int **ptr, int *length)   
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d", length);
    *ptr = (int*)malloc(*length * sizeof(int));

    for(int i =0; i<*length; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", (*ptr+i));
    }
    
}
void HienThi(int arr[], int length)
{
    printf("\n");
    printf("Mang la:  ");
    for(int i = 0; i<length; i++)
    {
        printf("%d\t", arr[i]);
    }
}
  void LapLai(int arr[], int length)
  {
    int max = 1;
    for (int i = 0; i < length; i++)
    {
      int dem = 0;
      for (int j = 0; j < length; j++)
      {
      if ((arr[i] == arr[j])) dem++;
      }
      if (max < dem)
      {
        // int SPT = 0;
        printf("\nPhan tu lap la: %d\nVoi so lan xuat hien la: %d\n", arr[i], dem);   
        // printf("So phan tu %d", SPT);
        // SPT++;
      }
    }     
  }
int main(int argc, char const *argv[])
{
    int *arr;
    int length;

    NhapMang(&arr, &length);
    HienThi(arr, length);
    LapLai(arr, length);


    return 0;
}
