#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
	FILE *fp;
	fp = fopen("filename.txt", "w");

	fprintf(fp, "%s", "Hello World!");

	fclose(fp);
	return 0;

}
