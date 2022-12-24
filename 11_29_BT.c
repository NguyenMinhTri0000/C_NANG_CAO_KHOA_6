//cho mang biet size, in ra so lan suat hien cua nhung phan tủ lặp lại trong mảng

//Ý tưởng, tạo ct con tìm 1 cặp giống nhau n = 2, sau đó cho ct đó nẳm trong ct để chạy tiếp liên tục (con trỏ hàm)
#include <stdio.h>
typedef struct 
{
    int So_Lan[100];
    int Gia_Tri[];
}So_Giong;

int* Tim2so(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j<size; j++)
        {

            if((arr[i] == arr[j])&&(i<j))
            {
                static int k;
                arr[k] = arr[i];
                // printf("Gia Tri %d\t", arr[i]); 
                // printf("Bien arr[%d] = %d\t",k, arr[k]);   
                k++;                               
                // printf("------------------------\n");                              
            }
        }

    }
    return arr;
}

int main(int argc, char const *argv[])
{
        int A[] = {3,4, 5, 6, 12, 6, 4, 6, 12, 34};
        Tim2so( A, 10);

        printf("%d\n", *(Tim2so( A, 10)));
        printf("%d\n", *(Tim2so( A, 10)+1));
        printf("%d\n", *(Tim2so( A, 10)+2));                          
        printf("%d\n", *(Tim2so( A, 10)+3)); 
        printf("%d\n", *(Tim2so( A, 10)+4));  

                printf("-----------------------\n");  
        for(int m = 0; m<5; m++)
        {
           printf("%d\n", *(Tim2so( A, 10)+m));           
        }
                      
    return 0;
}
