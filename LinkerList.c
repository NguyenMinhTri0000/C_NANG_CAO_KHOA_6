#include <stdio.h>
#include <stdlib.h>

//Định nghĩa kiểu vector dựa vào struct
struct List
{
    int data;
    struct List *next;
};
typedef struct List *Vector;

//Tạo node đầu tiên
Vector Create(int value)
{
    Vector temp;    
    temp = (Vector)malloc(sizeof(struct List));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

//Hàm thêm một node vào chuỗi
Vector Function_Push_Back(Vector node, int value)
{
    Vector temp, p;
    temp = Create(value);       //tạo ra một node
    if(node == NULL)            //chưa có node, tạo node đầu
    {
        node = temp;
    }
    else                        //đã có giá trị
    {
        p = node;
        while (p->next != NULL) //chuyển con trỏ đi hoài, cho đến khi gặp NULL = node cuối cùng
        {
            p = p ->next;
        }
        p ->next = temp;        //p trỏ đến giá trị temp là giá trị cần thêm vào
    }
    return node;
}


int Get(Vector node, int index)
{
    int i = 0;
    Vector p = node;

    while(p->next != NULL && i != index)
    {
        i++;
        p = p->next;
    }
    return p->data;
}

void Delete(Vector node){
    printf("\n");
    while (node!=NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
    
}

Vector Set(int value){
    Vector temp;
    temp = (Vector)malloc(sizeof(struct List));
    temp->next = NULL;
    temp->data = value;
    return temp;
}


int main(int argc, char const *argv[])
{  
    Vector vt = NULL;
    vt = Function_Push_Back(vt, 5);
    vt = Function_Push_Back(vt, 12);  
    Vector vt2 = NULL;  
    vt2 = Function_Push_Back(vt2, 4);
    vt2 = Function_Push_Back(vt2, 3);      
    return 0;
}
