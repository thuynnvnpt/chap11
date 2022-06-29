#include <stdio.h>
#include <stdlib.h>


/* ham tong*/
int add(int a,int b){
int add= a + b;

return add;
}
/* ham hieu*/
int sub(int a, int b)
{
int sub = a - b;
return sub;
}
/* ham nhan*/
int mul(int a, int b)
{
	int mul = a * b;
	return mul;
	
}
/* ham chia*/
float chia( float a, float b)
{
	float chia = a/b;
	return chia;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int x,y;
	int menu;
	
	printf( " nhap vao so thu nhat :");
	scanf("%d",&x);
	printf( " nhap vao so thu hai: ");
	scanf("%d",&y);
	printf("**********************nhap menu tuy chon**********************************");
	printf(" \n 1- tinh tong \t\t 2-tinh hieu\n");
	printf(" 3- tinh thuong \t 4- tinh tich\n");
	printf("***************************************************************************\n");
	fflush(stdin);
	scanf("%d", &menu);
	switch (menu)
	{
		case 1:
			printf("ket qua tinh tong = %d", add( x,y));
			break;
			
		case 2:
			printf("ket qua tinh hieu= %d", sub( x,y));
			break;
			
		case 3:
			printf(" ket qua tinh chia = %.2f", chia( x,y));
			break;
			
		case 4:
			printf("ket qua tinh nhan  = %d", mul( x,y));
			break;
		default:

			printf("\n Lua chon khong hop le");	
		
	}
	return 0;
}
