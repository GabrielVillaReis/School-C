#include <stdio.h>
#include <string.h>

int main(){
	int i,a,c,l,i2,i3;
	char str[20][50];
	char str2[20][50];
	char sec[50],sec2[50];

	for (i=0;i<20;i++){
   		gets(str[i]);
   		c++;
	   	if(str[i][0] == 70 && str[i][1] == 73 && str[i][2]== 77){
	       str[i][0] = '\0';
       	   str[i][1] = '\0';
	       str[i][2] = '\0';
	       i = 20;
		}
		strcpy(str2[i],str[i]);
	}
	for (i = 1; i <c; i++){
	   for (a = 1; a <c; a++) {
     	 if (strcmp(str[a - 1], str[a]) > 0) {
     	    strcpy(sec, str[a - 1]);
     	    strcpy(str[a - 1], str[a]);
     	    strcpy(str[a], sec);
     	 }
 	  }
	}

	for (i = 0; i<c; i++)
   printf("\n%s", str[i]);

		for (i = 0;i<c;i++){
		for(i2=0;str[i][i2]!='\0';i++){
			l++;
			if(str[i][i2]==32){
				for (i3=i2;i3>=0;i3--){
					str2[i][i3] = ' ';
				}
			}
		}
	}
	for (i = 0; i<c; i++)
   printf("\n%s", str2[i]);
}
