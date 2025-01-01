#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int len(int x);
int len(int x){
	int g=0;
	if(x==0){
		return 1;
	}
	else if(x>0){
		while(x>0){
			x/=10;
			g++;
		}
	}else if(x<0){
		x=-x;
		g=1;
		while(x>0){
			x/=10;
			g++;
		}
	}
	return g;
}
int main(){
	int n,i,c,b,p;
	scanf("%d",&n);
    char a[81],k;
    for(i=0;i<n;i++){
    	scanf("%s",a);
    	if(a[0]=='a'){
    		k='a';
    		scanf("%d %d",&b,&c);
    		printf("%d+%d=%d\n",b,c,b+c);
    		p=len(c+b)+2;
		}else if(a[0]=='b'){
			k='b';
			scanf("%d %d",&b,&c);
			printf("%d-%d=%d\n",b,c,b-c);
			p=len(b-c)+2;
		}else if(a[0]=='c'){
			k='c';
			scanf("%d %d",&b,&c);
			printf("%d*%d=%d\n",b,c,b*c);
			p=len(b*c)+2;
		}else{
			scanf("%d",&c);
			b=atoi(a);
			if(k=='a'){
				printf("%d+%d=%d\n",b,c,b+c);
				p=len(b+c)+2;
			}else if(k=='b'){
				printf("%d-%d=%d\n",b,c,b-c);
				p=len(b-c)+2;
			}else if(k=='c'){
				printf("%d*%d=%d\n",b,c,b*c);
				p=len(b*c)+2;
			}
		}
		printf("%d\n",len(b)+len(c)+p);
	}
    return 0;
}