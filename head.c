#include <stdio.h>
#include <stdlib.h>


void title(char *t){
	printf ("<html><head><title>",t);
	printf ("</title></head></body>");
}
void closes(){
	printf ("</body></html>");
}
void heads(int n){
	printf ("<h%d>",n);
}
void closesheads(int n){
	printf ("</h%d>",n);
}
void par(){
	printf ("<p>");
}
void closespar(){
	printf ("</p>");
}

int main(){
	int h=1;
	int n=0;
	char t[]="hello world";
	title(t);
	for (n=0;n<6;n++){
		par();
		h = n + 1 ;
		heads(n+1);
		printf (t);
		closesheads(n+1);
		closespar();
	}
	closes();
return 0;
}
