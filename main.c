#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char src[]="The worst things to eat before you sleep";
	char dst[100];
	
    strcpy(dst, src);
    
    printf("문자열/%s/의 길이 :%d", dst, strlen(dst));
	return 0;
}
