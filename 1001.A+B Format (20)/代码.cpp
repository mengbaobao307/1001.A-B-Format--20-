#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10000],cal1,cal2,cal,i,j,m,n;
	scanf("%d%d",&cal1,&cal2);
	cal=cal1+cal2;
	m=0;
	n=0;
	if(cal<0){cal=abs(cal);
	printf("%s","-");}//�����Ϊ��ʱҪ������ŵ���� 
	 //��λ������ֱ����� 
	 if(cal<1000)
	 printf("%d",cal);
	 //��λ�����ϼ�������� 
	 else{
	 for(i=0;cal/10!=0;i++){
	 	a[i]=cal%10;
	 	cal=cal/10;
	 }//���͵ĸ�λ���������� 
	 a[i]=cal%10;
	 m=i+1;
	 n=m%3;//���ͷ�Ϊ��λ�����ı����Ͳ������ı�������� 
	 if(m==5){
	 	printf("%d%d%s%d%d%d",a[4],a[3],",",a[2],a[1],a[0]);
	 }
	 if(n==0){
	 	for(j=m-1;j>=0;j--){
	 		printf("%d",a[j]);
	 		//ÿ���������һ�����ţ����һλ��������� 
	 		if(j%3==0&&j!=0){
	 			printf("%s",",");
	 		}
	 	}
	 }//��Ϊ���ı��� 

	 else{
	 	if(n==1){printf("%d%s",a[m-1],",");//����Ϊ1�����
	 	for(j=m-2;j>=0;j--) {
		 	printf("%d",a[j]);
		 	if(j%3==0&&j!=0){
		 		printf("%s",",");
		 	}
	 }
		if(n==2){printf("%d%d%s",a[m-1],a[m-2],",");//����Ϊ2�����
		 //ͬ�ϴ��� 
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
