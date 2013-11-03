#include <stdio.h>
#include <inttypes.h>


#define FILE_PATH "log.txt"
#define MAX 100

void write_file(FILE *fp, char str[MAX]);

int main(void)
{
	FILE *fp;
	char file_str[MAX];
	fp = fopen(FILE_PATH,"r");
	printf("Write log.txt\n");
	printf("****************\n");
	fgets(file_str,MAX,stdin);
	//printf("%s",file_str);
	write_file(fp,file_str);
	return 0;
}

void write_file(FILE *fp,char str[MAX]){
	if(fp = fopen(FILE_PATH,"a")){
		fprintf(fp,"%s",str);
	}
	fclose(fp);

}


