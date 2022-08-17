#include<stdio.h>
#define MAXNO 100
void selectionSort(int [], int );
int main() // main.c
{
    int no = 0,i;
    int data[MAXNO];

    printf("Enter the data, termiante with Ctrl+D\n");
    while(scanf("%d", &data[no])!=EOF) ++no;
    selectionSort(data,no);
    printf("Data in sorted Order are: ");
    for(i=0; i<no; i++) printf("%d ", data[i]);
    putchar('\n');
    return 0;
}