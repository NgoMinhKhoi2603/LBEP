#include <stdio.h>
#include <string.h>

int main () {
  char s1[100], s2[100];
  printf("Nhap chuoi so 1: ");
  scanf("%s", s1);
  printf("Nhap chuoi so 2: ");
  scanf("%s", s2);
   
   if ( strlen(s1)>strlen(s2)) { 
   	    char stemp[100];
   	    strcpy(stemp,s2);
   	    strcpy(s2,s1);
   	    strcpy(s1,stemp);
   }
   int  test=0;
	int i=0;
		while (s2[i]!=0){
			if ( s2[i]==s1[0]) {
				int j=0;
				while(s1[j]!=0&&s2[i]!=0&&s1[j]==s2[i]){
					i++;
					j++;
				}
				if(s1[j]==0) {
					test=1;
					break;
				}
			} else { 
				i++;}
		}
   if (test==1) { 
   printf ("YES");
   } else { 
   	printf ("NO");
   }
}
