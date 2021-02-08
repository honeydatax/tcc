#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>

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
	time_t tt;
	int n=0;
	int h=1;
	char t[]="hello world";
	char ss[120];
	tt=time(NULL);
	snprintf(ss,sizeof(ss),"%.24s",ctime(&tt));
	title(t);
		par();
			bold();
				h=1;
				heads(h);
					printf ("%s\r\n",ss);
				closesheads(h);
			closesbold();
		closespar;
	closes();
return 0;
}

