//CHo mảng 1 chiều, tìm giá trị xuất hiện nhiều nhất trong mảng, tìm vị trí.
#include <stdio.h>


int main(int argc, char const *argv[])
{
    int A[10] = {3,4, 5, 6, 12, 6, 1, 6, 12, 34};   
    int Gia_Tri = 0;
    int VI_Tri = 0; 
    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<10; j++)
        {
            if((A[i] == A[j])&&(i<j))
            {

                printf("Gia Tri %d\t", A[i]);
                printf("Vi Tri: %d va %d\n",i, j);
            }
        }
    }
    return 0;
}
