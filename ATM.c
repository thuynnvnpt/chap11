#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int cardid,pincode, sotien,id,pin;
	printf("nhap cardid\n");
	scanf("%d",&cardid);
	printf("nhap pincode\n");
	scanf("%d",& pincode);
	char menu;
	char hoi;
	id = 123;
	pin =456;
	
	if(cardid ==id && pincode == pin) 
	{ printf("ban da dang nhap thanh cong\n");
	
	do
	{
	printf(" chon 1.rut tien\n");
	printf(" chon 2.chuyen khoan\n");
	printf(" chon 3.xem so du\n");
	printf("chon 4.ket thuc\n");
	fflush(stdin);
	    scanf("%c", &menu);
	
        switch(menu)
	{
		case'1':
		printf(" \n nhap so tien can rut :");
		scanf("%d", &sotien);
		break;
		case'2':
		printf(" \n nhap so tai khoan chuyen : ");
		scanf("%d", &sotien);
		break;
		case'3':
		printf("\n so du cua ban la :");
		break;
		case'4':
		printf("\n ket thuc : ");
		exit(0);
		break;
		
	}
	printf("ban co muon tiep tuc hay khong ? \n");
	fflush(stdin);
	scanf("%c",&hoi);
		
	}
	while (hoi=='y');
	
		
	}
	else
	printf("sai mat khau vui long nhap lai \n");
	
	return 0;
}
