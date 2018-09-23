#include<stdio.h>

int main(){
	int YourGrade;
	printf("Enter Your Grade :\n");
	scanf("%d",&YourGrade);
	
	if(YourGrade>=80&&YourGrade<=100){
		printf("Your Grade A!\n");
	}
	else if(YourGrade<80&&YourGrade>=75){
		printf("Your Grade B+!\n");
	}
	else if(YourGrade<75&&YourGrade>=70){
		printf("Your Grade B!\n");
	}
	else if(YourGrade<70&&YourGrade>=65){
		printf("Your Grade C+!\n");
	}
	else if(YourGrade<65&&YourGrade>=60){
		printf("Your Grade C!\n");
	}
	else if(YourGrade<60&&YourGrade>=55){
		printf("Your Grade D+!\n");
	}
	else if(YourGrade<55&&YourGrade>=50){
		printf("Your Grade D!\n");
	}
	else if(YourGrade<50&&YourGrade>=0){
		printf("Your Grade F!\n");
	}
	else {
		printf("ProGrams Error!!\n");
	}
	
}
