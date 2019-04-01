#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char c[1000];int count;
    scanf("%[^\n]%*c",c); 
    int l=strlen(c);
    for(int i=0;i<=9;i++){
        count=0;
      for (int j = 0; j < l; j++) {
          if(c[j]==(48+i))
                 count++;
      }
      printf("%d ",count);
    }
    

    return 0;
}
