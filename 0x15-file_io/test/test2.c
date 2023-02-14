#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()

{
	FILE *fileNAME;
	char ch[100];

	fileNAME = fopen("filename.txt", "r");
	printf("%s\n\n\n", fgets(ch, 100, fileNAME));
	fclose(fileNAME);

	return 0;

}
