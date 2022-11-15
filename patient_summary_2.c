#include<stdio.h>
void main()
{
	int Patient_Id,Age,Annual_Income,Admitted_Days,Charge,Total_Bill;float Weight;char Patient_Category;
	
	printf("Enter the Patient Id : \n");
	scanf("%d",&Patient_Id);														//To accept Patient id.
	
	printf("Enter the Age of the Patient : \n");
	scanf("%d",&Age);																//To accept Age.
	
	printf("Enter the Weight of the Patient : \n");
	scanf("%f",&Weight);															//To accept Weight.
	
	printf("Enter the Patient Category (Inpatient 'I'    Outpatient 'O') : \n");
	scanf(" %c",&Patient_Category);													//To accept Patient Category. 	//the space between "" and c is needed else it will not accept the char
	
	printf("Enter the Annual Income : \n");
	scanf("%d",&Annual_Income);														//To accept Annual Income.
	
	printf("Enter the number of Admitted Days : \n");
	scanf("%d",&Admitted_Days);														//To accept admitted days.
	
	
												//to find the bill.
	
	Charge= Admitted_Days*200;
	
													//printing patient summary.
	
	
	printf("\n\n\n");
	printf("\t \t \t \t PATIENT SUMMARY \n \n");
	
	
	printf("\n PATIENT ID \t\t\t : \t %d \n",Patient_Id);
	
	printf("\n AGE	\t\t\t : \t %d \n",Age);
	
	printf("\n WEIGHT \t\t\t :  \t %0.2f \n",Weight);
	
	if((Patient_Category=='i')||(Patient_Category=='I'))
	
		printf("\n PATIENT CATEGORY \t\t : \t INPATIENT '%c' \n",Patient_Category);
		
	else if((Patient_Category=='o')||(Patient_Category=='O'))
	
		printf("\n PATIENT CATEGORY \t\t : \t OUTPATIENT '%c' \n",Patient_Category);
	
	else
	
		printf("\n '%c' IS A WRONG INPUT \n",Patient_Category);
		
	printf("\n ANNUAL INCOME \t\t\t : \t %d \n",Annual_Income);
	
	printf("\n NO. OF DAYS ADMITTED DAY \t : \t %d \n",Admitted_Days);
	
	
	
											//finding and printing discount
			
											
	printf(" \n\n\n");
	printf(" \t \t \t \t DISCOUNT MENU \n \n");
	
	printf(" \t 1. 10%% - SENIOR CITIZENS \n");
	
	printf(" \t 2. 15%% - ECONOMICALLY BACKWARD (ANNUAL INCOME < 3,00,000) \n");
	
	printf(" \t 3. 00%% - NOT ELIGIBLE \n");
	
	
	if(Age>=60)																		//checking wheather its senior citizen or not.
	
		{
	
			
			Total_Bill=Charge-(0.1*Charge);
		
			Charge=Total_Bill;
			
			
		}

	if(Annual_Income<300000)														//checking annual income less than 3lpa.
		
		{
	
			
			Total_Bill=Charge-(0.15*Charge);
		
			Charge=Total_Bill;
			
			
		}
			
			
	printf("\n TOTAL BILL \t\t\t : \t %d ",Total_Bill);
}
