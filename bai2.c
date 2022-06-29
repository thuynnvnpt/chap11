#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i,j;
/* ham nhap mang*/
void imparr(int arr[], int n)
{
    for(i = 0; i < n; i++)
	{
        printf("\nmang arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
}

 /*ham xuat mang*/
void exparr(int arr[], int n){
    for(i = n-1; i >= 0; i--){
        printf("%2d", arr[i]);
    }
}


int main(){

    int arr[10];
    int n;
    printf("\nNhap so luong phan tu trong mang n = ");
    do
	{
        scanf("%d", &n);
        if(n <= 0)
		{
            printf("\nNhap sai vui long nhap lai n = ");
        }
    }
	while(n <= 0);
    
    imparr(arr, n);
    printf("*********************************************************");    
    printf("\n Mang dao nguoc la: ");
    exparr(arr, n);    
	printf("\n*********************************************************");  
    

}
