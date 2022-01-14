#include<stdio.h>

main(){
	char ch;
	
	printf("Press any key:");
	scanf("%c",&ch);
	
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Your character is wovel...\n");
			break; // GO OUT!...
		case '0':		case '1':		case '2':
		case '3':		case '4':		case '5':
		case '6':		case '7':		case '8':
		case '9':
			printf("Your character is a number...\n");
			break; // GO OUT!...
		case '%':		case '&':		case '!':
		case '.':		case ';':		case ':':
			printf("Your character is a special character...\n");
			break;
		default:
			printf("Your character is a consonant character...\n");
			break;
	}

}
