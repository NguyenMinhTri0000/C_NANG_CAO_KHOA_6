//làm lại bài ngày hôm qua chưa được
#include <stdio.h>

typedef struct 
{
    int dem[100];
    int giatri[100];
    int size_mang;
}Tra_ve;
Tra_ve TV;

Tra_ve Tim2so(int cnt[], int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j<size; j++)
        {
            if((arr[i] == arr[j])&&(i<j))
            {
                TV.giatri[TV.size_mang] = arr[i];
                TV.dem[TV.size_mang]++; 
                TV.size_mang++;     
                                                                     
            }
        }
    }
    // return Tim2so(TV.dem, TV.giatri, TV.size_mang);
}
int main(int argc, char const *argv[])
{
    int A[9] = {4, 7, 3, 12, 2, 3, 4, 3, 7};

    Tim2so(TV.dem, A, 9);
    for(int i = 0; i < TV.size_mang; i++)
    {
        printf("So  lan Trung: %d\t",TV.dem[i]);         
    }
           printf("\n");  
     for(int i = 0; i < TV.size_mang; i++)
    {
        printf("Gia Tri Trung: %d\t",TV.giatri[i]);         
    }
        printf("\n"); 
        printf("Kich thuoc mang ngo ra: %d\n", TV.size_mang);    

    return 0;
}
