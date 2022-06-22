#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int st;
/*ham login */
int login(int a, int b)
{
	bool value;
	if (a == 1 && b == 2 )
	{
		value = true;
		return value;
}	}
	
		
/* ham so du*/

int sdu()
 {
	int sd;
	sd = 15000000;
	return sd;
	}
	
	
/*ham rut tien*/
int rutien()
{ 
	int c;
	printf( "vui long nhap so tien can rut:\n");
	scanf("%d", &c);
	st = sdu();
	if( c>= st+1, c>=3000000,c%50!=0)
	{
		printf(" so tien rut phai la boi so cua 50 va nho hon 3 trieu \n \t vui long nhap lai so tien ");
	
	}
	else
	{
		printf(" ban da rut thanh cong so tien : %d VND\n", c);
		
		st = st - c;
		printf(" so tien con lai la :%d VND\n", st);
		
			}	
			return 0;	
}
/* ham chuyen khoan*/
int chuyentien()
{
	int stk, stc;
	st=sdu();
	printf( "vui long nhap so tai khoan nhan:\n");
	scanf("%d", &stk);
	printf( " vui long nhap so tien can chuyen:\n");
	scanf("%d", &stc);
	if (stc>= st+1)
	{
	 printf(" so tien chuyen lon hon so tien hien co\n\t  vui long thuc hien lai ");
	
	}
	else
	{
		printf("\n ban da chuyen thanh cong so tien :%d VND\t toi tai khoan %d\n", stc,stk);
		st= st - stc;
		printf( " so tien con lai trong tai khoan la:%d VND\n", st);
	}
	
	
	
}
/*ham van tin tai khoan*/
int vttk()
{
	
	printf("so du trong tai khoan cua ban la:%d VND\n",st);
}
/* ham menu*/
int menu()
{
	int m;
		printf("\t1.chon 1 de rut tien\n");
		printf("\t2.chon 2 de chuyen tien\n");
		printf("\t3.chon 3 de xem so du\n");
	    printf("\t4.chon 4 de thoat\n");
	    return (m);
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int id,mk,tien,stk,menu1;
	char lap;
	
	do
	{
		printf("chao mung ban den voi may rut tien tu dong\t vui long nhap so the:\n");
		scanf("%d", &id);
		printf(" vui long nhap mat khau:\n");
		scanf("%d", &mk);
		if (login(id,mk)==1)
		{
			printf("\n ban da dang nhap thanh cong\n");
			do
			{
				menu();
			 
			 fflush(stdin);
			 scanf("%d", &menu1);
			 switch(menu1)
			 {
			 	case 1:
			 		rutien();
			 		break;
			 		
			 	case 2:
			 		chuyentien();
			 		break;
			 		
			 	case 3:
				 vttk();
				 break;
				 
				case 4: 
				break;
				 				 		
			 }
			 printf("\n chon y de tiep tuc:\n");
			 fflush(stdin);
			 scanf("%c", &lap);
			 		 
			 
			}
			while (lap == 'y');
			
			
		}
		else
		{
			printf("\n sai pass, vui long nhap lai:\n");
		
		
		
	}
}
	while(login(id,mk)==0);
	return 0;
}
