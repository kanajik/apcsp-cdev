#include <stdio.h>
#include <string.h>
int main() {
char str1[27];
char str2[27]="abcdefghijklmnopqrstuvwxyz\0";
for (int i = 0; i <= 26; i++) {
		char c = 'a';	
		str1[i] = c+i;
}
str1[26]='\0';
printf("%s\n", str1);
printf("%s\n", str2);

if (strcmp(str1, str2) == 0)
printf("The strings are identical\n");
else
printf("The strings are different\n");

for (int i = 0; i <= 26; i++) {
str2[i] -= 32;
}
printf("%s\n", str2);

char str3[53];
strcat(str3, str1);
strcat(str3, str2);
printf("%s\n", str3);

}

//for (char c = 'a'; c <= 'z'; c++)
//for (int i = 97; i <= 122; i++)
