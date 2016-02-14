#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10000],cal1,cal2,cal,i,j,m,n;
	scanf("%d%d",&cal1,&cal2);
	cal=cal1+cal2;
	m=0;
	n=0;
	if(cal<0){cal=abs(cal);
	printf("%s","-");}//处理和为负时要输出负号的情况 
	 //三位数以内直接输出 
	 if(cal<1000)
	 printf("%d",cal);
	 //三位数以上继续分情况 
	 else{
	 for(i=0;cal/10!=0;i++){
	 	a[i]=cal%10;
	 	cal=cal/10;
	 }//将和的各位数赋给数组 
	 a[i]=cal%10;
	 m=i+1;
	 n=m%3;//将和分为数位是三的倍数和不是三的倍数的情况 
	 if(m==5){
	 	printf("%d%d%s%d%d%d",a[4],a[3],",",a[2],a[1],a[0]);
	 }
	 if(n==0){
	 	for(j=m-1;j>=0;j--){
	 		printf("%d",a[j]);
	 		//每三个数输出一个逗号，最后一位不输出逗号 
	 		if(j%3==0&&j!=0){
	 			printf("%s",",");
	 		}
	 	}
	 }//和为三的倍数 

	 else{
	 	if(n==1){printf("%d%s",a[m-1],",");//余数为1的情况
	 	for(j=m-2;j>=0;j--) {
		 	printf("%d",a[j]);
		 	if(j%3==0&&j!=0){
		 		printf("%s",",");
		 	}
	 }
		if(n==2){printf("%d%d%s",a[m-1],a[m-2],",");//余数为2的情况
		 //同上处理 
		 for(j=m-3;j>=0;j--) {
		 	printf("%d",a[j]);
		 	if(j%3==0&&j!=0){
		 		printf("%s",",");
		 	}
		 }
		}
	}
	 	
	 	}
	 	return 0;
 }
}
