#include <stdio.h>

void hod( char desk, int a, int b, int a1, int b1){

}

int main(){
	int i, j;
	
	char dask[8][8]=
	{
		{'r', 'n', 'b', 'q', 'k', 'b', 'n','r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p','p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ',' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ',' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ',' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ',' '},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p','p'},
		{'r', 'n', 'b', 'q', 'k', 'b', 'n','r'},


	};
	//a
	//printf("A B C");
	//while(1){
	for (i=0; i<8; i++){
		for (j=0; j<8; j++){
			printf ("%c", dask[i][j]);
		}
		printf ("\n");
	}
	
	//printf("ABCD");
	//}
	return 0;
}
