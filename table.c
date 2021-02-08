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

void table(){
	printf ( "<table>");
}
void closestable(){
	printf ( "</table>");
}
void tablln(){
	printf ( "<tr>");
}
void cltablln(){
	printf ( "</tr>");
}
void tablrw(){
	printf ( "<th>");
}
void cltablrw(){
	printf ( "</th>");
}
void style(){
	printf ( "<style>");
}
void clstyle(){
	printf ( "</style>");
}


int main(){
	int n=0;
	int h=1;
	char r=0;
	char t[]="hello world";
	title(t);
		style();
			printf ("table , th ,td { border: 8px solid black;}");
			
		clstyle();
		par();
			bold();
				h=1;
				heads(h);
					printf ("loto" );
				closesheads(h);
			closesbold();
		closespar();
		table();
			for (n=0;n<16;n++){
				tablln();
					tablrw();
						printf("%d\r\n",n);
					cltablrw();
					tablrw();
						r=(char)rand();
						r=r/6;
						printf ("%d\r\n",r);
					cltablrw();
				tablln();
			}
		closestable();
	closes();
return 0;
}
