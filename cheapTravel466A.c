#include <stdio.h>
int main() {
    int n,m,a,b,c,d,x,e,l,y=0;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    if(n>m){
    c=n/m;
    d=c*b;
    e=c*m*a;
    if(d>e){
        x=e;
    }else{
        x=d;
    }
    if(n%m!=0){
    l=n%m;
    if(l*a>1*b){
        y=(1*b);
    }else{
        y=(l*a);
    }}
    printf("%d",x+y);
}
else
{ if(n*a>b){
	printf("%d",b);
}
else{
	printf("%d",n*a);
}
}
return 0;
}
