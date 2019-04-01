//Q- Use recursion to find out nth value in a series where next term is the sum of previous term.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int temp=0;
  if(n==1)
      temp=a;
  else if(n==2)
      temp=b;
  else if(n==3)
      temp=c;
  else if((n-3)!=0){
      n--;
      temp=c;
      c=a+b+c;
      a=b;
      b=temp;
      temp=find_nth_term(n,a,b,c);
  }
  return temp;
  //---end---
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}


