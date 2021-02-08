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

void bold(){
	printf ("<b>");
}
void closesbold(){
	printf ("</b>");
}
void list(){
	printf ( "<ul>");
}
void closeslist(){
	printf ( "</ul>");
}
void elementlist(){
	printf ( "<li>");
}
void clselist(){
	printf ( "</li>");
}

int main(){
	int n=0;
	int h=1;
	char t[]="hello world";
	title(t);
		par();
			bold();
				h=1;
				heads(h);
					printf (t);
				closesheads(h);
			closesbold();
		closespar();
		list();
			for (n=0;n<16;n++){
				elementlist();
					printf ("%d\n",n);
				clselist();
			}
		closeslist();
	closes();
return 0;
}
