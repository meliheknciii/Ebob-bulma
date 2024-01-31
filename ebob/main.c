#include <stdio.h>
#include <stdlib.h>


// girilen 2 sayýnýn ebobunu hesaplayan program.
int ebob(int x,int y);
int main(){
	int x,y;
	printf("iki sayi giriniz :");
	scanf("%d %d",&x,&y);
	int sonuc = ebob(x,y);
	printf("%d",sonuc);
}
int ebob(int x,int y){
	if (x % y == 0){
		return y;
	}
	else {
		return ebob(y,x % y);
	}
}
