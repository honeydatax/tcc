#include <stdio.h>
#include <stdlib.h>

int main(){
	char t[]="hello world";
	printf ("<html><head><title>%s",t);
	printf ("</title></head></body>");
	printf (t);
	printf ("</body></html>");
}
