#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
#define MAX_FILE_NAME 100

int get_lines(char fname[MAX_FILE_NAME]) {
	
	FILE *fp;
	fp = fopen(fname, "r");
	
	int ch_read;
	int c = 0;
	
	while ((ch_read = fgetc(fp)) != EOF) {
		if(ch_read == '\n')
		{
			c++;
		}
	}
	printf("\nNumber of lines : %d\n", c);
	fclose(fp);
	return c;
}

int main(void) {

	FILE *f;
	char filename[MAX_FILE_NAME];
	printf("Enter file name: \n");
	scanf("%s", filename);
	
	int n = get_lines(filename);
	f  = fopen(filename, "r");
	
	int i;
	int **magicsquare = malloc(n * sizeof(int *));
	for (i = 0; i< n; i++) {
		magicsquare[i] = malloc(n * sizeof(int));
	}

	int j;
	for(i=0; i<n;i++){
		for(j=0;j<n;j++){
			fscanf(f, "%d", &magicsquare[i][j]);
		}
	}
	int flag = isMagicSquare(magicsquare, n);
	if (flag == 1)
		printf("This square is magic\n");
	else
		printf("This square is not magic\n");

	
	for(i=0;i<n;i++)
		free(magicsquare[i]);

	free(magicsquare);
	fclose(f);
	return 0;	
}

