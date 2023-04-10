#include<stdio.h>
int main(){


int uam, div, costo;
float apoyo;

printf("0)Otra\n1)UAM Azc");
printf("\n\nIntroduzca su universidad: ");
scanf("%d", &uam);

printf("\n0)Otra division\n1)CBI");
printf("\n\nIntroduzca su division: ");
scanf("%d", &div);

printf("\n\nIntroduzca el costo del evento: ");
scanf("%d", &costo);




if (uam==1){
	if (div==1){
		if (costo>=5000){
			
			apoyo=costo*0.60;
			printf("\n\n60, %.2f", apoyo);
			
		}
	}
	
}


if (uam==1){
	if (div==1){
		if (costo<5000){
			
			apoyo=costo*0.40;
			printf("\n\n40, %.2f", apoyo);
			
		}
	}
	
}


if (uam==1){
	if (div==0){
		if (costo>=5000){
			
			apoyo=costo*0.50;
			printf("\n\n50, %.2f", apoyo);
			
		}
	}
	
}


if (uam==1){
	if (div==0){
		if (costo<5000){
			
			apoyo=costo*0.30;
			printf("\n\n30, %.2f", apoyo);
			
		}
	}
	
}


if (uam==0){
	if (div==1){
		if (costo>=5000){
			
			apoyo=costo*0.40;
			printf("\n\n40, %.2f", apoyo);
			
		}
	}
	
}


if (uam==0){
	if (div==1){
		if (costo<5000){
			
			apoyo=costo*0.30;
			printf("\n\n30, %.2f", apoyo);
			
		}
	}
	
}


if (uam==0){
	if (div==0){
		if (costo>=5000){
			
			apoyo=costo*0.30;
			printf("\n\n30, %.2f", apoyo);
			
		}
	}
	
}


if (uam==0){
	if (div==0){
		if (costo>=5000){
			
			apoyo=costo*0.20;
			printf("\n\n20, %.2f", apoyo);
			
		}
	}
	
}

return 0;
}
