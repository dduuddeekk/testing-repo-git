#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Makanan{
	char makan[100];
	int harga;
} menu[100];
int main(){
	system("color f0");
	FILE *eat = fopen("list.txt","r");
	int baca, i = 0;
	printf("Menu: \n");
	do{
		baca = fscanf(eat, "%99[^\n]\n%d\n", menu[i].makan, &menu[i].harga);
		if(baca == 2){
			printf("%d. %s: %d\n",i+1,menu[i].makan,menu[i].harga);
			i++;
		}
	}while(!feof(eat));
	fclose(eat);
	return 0;
}