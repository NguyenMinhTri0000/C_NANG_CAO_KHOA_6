// Viết chương trình tính tiền taxi
//     km đầu tiên: 5000đ
//     30km tiếp theo: 4000đ
//     >30km tiếp theo: 3000đ
#include <stdio.h>

void TinhTaxi(float So_km)
{
    int i = 0;
    int So_Tien;
    if(So_km <= 1)
    {
        So_Tien = So_km*3000;
    }
    else if(So_km<=30)
    {
        So_Tien = So_km*4000;
    }
    else
    {
        So_Tien = So_km*5000;
    }
    printf("So Tien Can Tra Cho %0.2fkm la %d VND",So_km, So_Tien);
}
int main(int argc, char const *argv[])
{
    TinhTaxi(100);
    TinhTaxi(43.21345);
    return 0;
}
