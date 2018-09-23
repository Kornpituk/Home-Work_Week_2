
#include<stdio.h>

int main (){
	int Number1,Number2,Number3;
	printf("Enter Number1:");
	scanf("%d",&Number1);
	printf("Enter Number2:");
	scanf("%d",&Number2);
	printf("Enter Number3:");
	scanf("%d",&Number3);
	//Max&&Min-----------------------------------------------------------------------**Max&&Min**--------------------------------------------------------------------------
	if(Number1>Number2 && Number1>Number3){
		printf("Number Max: %d\n",Number1);
	}
	else if(Number2>Number1 && Number2>Number3){
		printf("Number Max: %d\n",Number2);
	}
	else if(Number3>Number1 && Number3>Number2){
		printf("Number Max: %d\n",Number3);
	}
	else if(Number1>2&&Number3>2&&Number1>3){
		printf("Number Max :%d\n",Number1);
	}
	else if(Number1>2&&Number3>2&&Number1<3){
		printf("Number Max :%d\n",Number3);
	}
	else if(Number1>Number3&&Number2>Number3&&Number1>Number2){
		printf("Number Max :%d\n",Number1);
	}
	else if(Number1>Number3&&Number2>Number3&&Number1<Number2){
		printf("Number Max :%d\n",Number2);
	}
	else if(Number1>Number2&&Number3>Number2&&Number1>=Number3){
		printf("Numebr Max :%d\n",Number1);
	}
	else if(Number1>Number2&&Number3>Number2&&Number1<=Number3){
		printf("Number Max :%d\n");
	}
	//end NUmber1
	else if(Number2>Number1&&Number3>Number1&&Number2>=Number3){
		printf("Number Max :%d\n",Number2);
	}
	else if(Number2>Number1&&Number3>Number1&&Number2<=Number3){
		printf("Number Max :%d\n",Number3);
	}
	else if(Number2>Number3&&Number1>Number3&&Number2>=Number1){
		printf("Number Max :%d\n",Number2);
	}
	else if(Number2>Number3&&Number1>Number3&&Number2<=Number1){
		printf("Number Max :%d\n",Number1);
	}
	//End Number2
	else if(Number3>Number1&&Number2>Number1&&Number3>=Number2){
		printf("Number Max :%d\n",Number3);
	}
	else if(Number3>Number1&&Number2>Number1&&Number3<=Number2){
		printf("Number Max :%d",Number2);
	}
	else if(Number3>2&&Number1>Number2&&Number3>=Number1){
		printf("Number Max :%d\n",Number1);
	}
	else if(Number3>Number2&&Number1>Number2&&Number3<=Number2){
		printf("Number Max :%d\n",Number2);
	}//end Number3 Max
	//---------------------MaxEnd----------------------------
	 if(Number1<Number2 && Number1<Number3||Number1<Number2&&Number1<=Number3||Number1<Number3&&Number1>=Number2){
		printf("Number Min: %d\n",Number1);
	}
	else if(Number2<Number1 && Number2<Number3||Number2<Number1&&Number2<=Number3){
		printf("Number Min: %d\n",Number2);
	}
	else if(Number3<Number1 && Number3<Number2||Number3<Number1&&Number3<=Number2){
		printf("Number Min: %d\n",Number3);
	}//Min&&Max------------------------------------------------------------------**EndMin&&Max**----------------------------------------------------------------
	//StartEqual---------------------------------------------------------------------------**StartEqual**------------------------------------------------------------------
	if(Number1==Number2&&Number2!=Number3){
		printf("Number equal %d\n",Number1,Number2);
	}
	else if(Number1==Number3&&Number3!=Number2){
		printf("Number equal %d\n",Number1,Number3);
	}
	else if(Number2==Number3&&Number3!=Number1){
		printf("Number equal %d\n",Number2,Number3);
	}
	else if(Number2==Number1&&Number1!=Number3){
		printf("Number equal %d\n",Number2,Number1);
	}
	else if(Number2==Number1&&Number1==Number3&&Number3==Number2){
		printf("Number equal: %d,%d,and %d\n",Number2,Number1,Number3);
	}
	else if(Number1!=Number2&&Number2!=Number3&&Number3!=Number1){
		printf("Not Number Equal!\n");
	}
	else {
		printf("ProGram Error!!!\n");
	}
	//EndEqual-------------------------------------------------------------------------------------------------------------------------------------------
	//StartAndMore------------------------------------------------------------------------------------------------------------
	return 0;
}
