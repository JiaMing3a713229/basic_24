#include<stdio.h>
#include<stdlib.h>

struct Students{
	
	char name[20];
	char Calculus[5];
	char computer[5];
	char program[5];
};
int main(void){
	int i;
	struct Students stud[7]={
		"陳宏明","78","82","68",
		"鄭一鋒","85","85","76",
		"曾學成","87","78","65",
		"張家馨","76","78","78",
		"石英豪","74","88","60",
		"鹿大友","76","84","76",
		"簡開懷","82","84","80",
	};
	char trans_line[]="\r\n";
	FILE *fptr;
	fptr=fopen("list.txt","w");
	for(i=0;i<7;i++){
		
		fwrite(stud[i].name, 1 , sizeof(stud[0].name) , fptr );
		fwrite(stud[i].Calculus, 1 , sizeof(stud[0].Calculus) , fptr );
		fwrite(stud[i].computer, 1 , sizeof(stud[0].computer) , fptr );
		fwrite(stud[i].program, 1 , sizeof(stud[0].program) , fptr );
		fwrite(trans_line, 1 , sizeof(trans_line) , fptr );
		
	}
	printf("列印完成\n");
	
	
	fclose(fptr);
	return 0;
}
