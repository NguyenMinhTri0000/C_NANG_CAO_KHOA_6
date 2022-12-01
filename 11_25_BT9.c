// Cho A là mảng 1 chiều
// Sắp xếp A tăng dần, giảm dần, dùng ct con.

#include <stdio.h>
#include <stdlib.h>
void NhapMang(int **ptr, int *length)   
//phải dùng con trỏ để trỏ vào địa chỉ vì ptr và length tí nữa sẽ được gán giá trị
//ptr có 2 dấu ** vì là mảng
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

void Giam_Dan(int *t, int length)
{
    for(int i = 0; i<length; i++)
    {
        for(int j = 0; j <length; j++)
        {
                            // printf("%d\t\n",*(t + i));   
            if(*(t + i) >  *(t+j))
            {
                int temp = *(t+j);
                *(t+j) = *(t + i);
                *(t + i) = temp;
            }

        }
    }
            printf("\nGiam Dan: ");
    for(int i = 0; i<length; i++)
    {
            printf("%d\t",*(t + i));   
    }
    
}
int main(int argc, char const *argv[])
{

    int *arr;
    int length;

    NhapMang(&arr, &length);
    HienThi(arr, length);

    Tang_Dan(arr, length);
    Giam_Dan(arr, length);  
    return 0;
}