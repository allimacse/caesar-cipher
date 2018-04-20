#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char alphabeth[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	FILE *p,*c;
	int letter;
	p = fopen("plaintext2.txt","w");
	c = fopen("ciphertext.txt","r");
	while(!feof(c)){	
		letter = fgetc(c)-97;
		if ((int)letter>=0)
		{
			letter=(letter-3+26)%26;
			fputc(alphabeth[letter], p);
		}
		
	}
	fclose(p);
	fclose(c);

	return 0;
}