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
void Tang_Dan(int *t, int length)
{
    for(int i = 0; i<length; i++)
    {
        for(int j = 0; j <length; j++)
        {
                            // printf("%d\t\n",*(t + i));   
            if(*(t + i) <  *(t+j))
            {
                int temp = *(t+j);
                *(t+j) = *(t + i);
                *(t + i) = temp;
            }

        }
    }
            printf("\nTang Dan: ");       
    for(int i = 0; i<length; i++)
    {     
            printf("%d\t",*(t + i));   
    }
    
}
  void LapLai(int arr[], int length)
  {
    Tang_Dan(arr, length);
  
	int temp = arr[0];
	int dem = 0;
	for (int i = 0; i <length; i++)
	{
		if (arr[i]== temp)
		{
			dem++;
		}
		else
		{
			printf("\nGia tri %d xuat hien %d lan", temp, dem);
			temp = arr[i];
			dem = 1;
		}
	}
      //Phần tử cuối cùng gán nhưng chưa in ra
			printf("\nGia tri %d xuat hien %d lan", temp, dem);
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
