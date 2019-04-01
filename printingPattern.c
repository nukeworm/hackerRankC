#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,x,y,c=0,d=0;
    scanf("%d", &n);
    x=y=2*n-1;
    //patter loop
    for(int i=x;i>=1;i--){
        ++c;
        if(c<n+1){
            for(int j=1;j<=c;j++){
                printf("%d ",n-j+1);
            }
            for(int k=1;k<=y-(2*c);k++){
                printf("%d ",(n-c+1));
            }
            int temp=n-c+1;
            for(int j=0;j<c;j++){
                if(temp==1){
                    ++temp;
                    ++j;
                }
                printf("%d ",temp);
                temp++;
            }
        }
        else{
            ++d;
            for(int l=0;l<n-d;l++){
                printf("%d ",n-l);
            }
            for(int m=1;m<=(2*d)-1;m++){
                printf("%d ",d+1);
            }
            for(int o=1;o<=n-d;o++){
                printf("%d ",d+o);
            }
        }
        printf("\n");
    }
    return 0;
}
