#include<stdio.h>
#include<stdlib.h>
void main()
{
	int Patient_Id,Age,Annual_Income,Admitted_Days,Charge,n;float Weight,Total_Bill,Discount;char Patient_Category;
	
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

	do
	{
															
													//switch case
		printf("\n\n\n");
		printf("\t \t \t SWITCH CASE OPTIONS \n");												
	
		printf("\n 1. PATIENT PROFILE \n");
	
		printf("\n 2. DISCOUNT CALCULATION \n");
	
		printf("\n 3. BILL GENERATION \n");
	
		printf("\n 4. EXIT \n");
	
		printf("\n ENTER YOUR CHOICE \n");
	
		scanf("%d",&n);
	
														//printing patient summary.
	
	
		switch(n)
	
			{
				case 1 :
					{
				
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
			
						break;
				
					}
	
	
											//finding and printing discount
			
				case 2 :
					{
													
						printf(" \n\n\n");
						printf(" \t \t \t \t DISCOUNT MENU \n \n");
	
						printf(" \t 1. 10%% - SENIOR CITIZENS \n");
		
						printf(" \t 2. 15%% - ECONOMICALLY BACKWARD (ANNUAL INCOME < 3,00,000) \n");
	
						printf(" \t 3. 00%% - NOT ELIGIBLE \n");
	
	
						if(Age>=60)
	
			 				{
	
								Discount =0.1*Charge;	
				
								Charge-=Discount;		
			
			 				}

						if(Annual_Income<300000)
		
			 				{	 
	
								Discount = 0.15*Charge;
				
								Charge-=Discount;
			
				 			}
			
						printf("\n \t Discount = %0.2f \n",Discount);
				
						break;
	
					}
		
				case 3 :
					{
			
						printf("\n\n\n");
						printf("\t \t \t \t BILL \n \n");
	
	
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
			
	
						if(Age>=60)
	
			 					{
	
									Discount = 0.1*Charge;
				
									Total_Bill = Charge - Discount ;  
		
									Charge = Total_Bill;
			
			
					 			}	

						if(Annual_Income<300000)
		
								{ 
	
									Discount = 0.15*Charge;
			
									Total_Bill = Charge - Discount; 
		
									Charge = Total_Bill;
			
			
			 					}	
			
			
						printf("\n TOTAL BILL \t\t\t : \t %0.2f \n",Total_Bill);
			
						break;
			
					}
					
				case 4 :
					{
						
						printf("\n \t\t\t EXITING....");
						break;
					}
						
				default :
						printf("WRONG CHOICE");
		
		}
					
	}while(n!=4);
		
}
