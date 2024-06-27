#include <stdio.h>
 
int main() {
    
    int i,n,police=0,unsolved=0;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        int e;
        scanf("%d",&e);
        if(e==-1){
            if(police>0){
                police--;
            }else
            {
                unsolved=unsolved+1;
            }
        }else{
            police=police+e;
        }
            
        }
    printf("%d",unsolved);
    return 0;
}
