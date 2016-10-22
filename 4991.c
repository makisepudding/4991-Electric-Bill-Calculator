//Created by Alex Lim (c) 2013
#include <stdio.h>
#include <windows.h>
float amt_due(float total, float elec_price_unit);
int main(int argc, char **argv)
{
system(" TITLE 4991 Electric Calculator v7.3.1 [4-User]");	
	abc:
	system("cls");
	system("color b");
	int mth_num, i;
	float bill_amt, unit_use, price_unit;
	printf("              Irashaimase~\n\n4991 Electric Calculator [4-User]  V7.3.1\n \t      (c)2011-2013\n   By Alex Lim [limszalex@gmail.com]\n");
	printf("\n");
	for(i=0;i<41;i++)
	printf("-");
	printf("\n\t  Month Number[1-12]: ");
	scanf("%d",&mth_num);
	if(mth_num > 12){
		printf("What the fuuu is this?\n\tFUUUUUUUUU\n");
		system("sub.jpg");
		printf("Please Restart the app.\n");
		return 0;
		system("EXIT");
	}
	if(mth_num < 1){
		printf("What the fuuu is this?\n\tFUUUUUUUUU\n");
		system("sub.jpg");
		printf("Please Restart the app.\n");
		return 0;
		system("EXIT");
	}
	for(i=0;i<41;i++)
	printf("-");
	printf("\n");
	printf("\n");
	printf("Electric bill Amount [RM]: ");
	scanf("%f",&bill_amt);
	printf("Electric Unit Amount Used [KWH]: ");
	scanf("%f",&unit_use);	
	price_unit=bill_amt/unit_use;
	printf("Electric RM/Unit KWH [RM]: %.3f",price_unit);
	printf("\n");
	printf("\n");
	
	//AC//
	printf("\n");
	for(i=0;i<41;i++)
	printf("-");
	printf("\n\t    =Air Conditional=\n");
	for(i=0;i<41;i++)
	printf("-");
	printf("\n");
	
	//Alex//
	float alex_pre, alex_cur, alex_tol, alex_due1, alex_due2;
	printf("\n");
	printf("MasterRoom's Previous A/C Units [KWH]: ");
	scanf("%f",&alex_pre);
	printf("MasterRoom's Curent A/C Units [KWH]: ");
	scanf("%f",&alex_cur);
	alex_tol =alex_cur-alex_pre;
	printf("MasterRoom's Total A/C Units [KWH]: %.3f",alex_tol);
	printf("\n");
	printf("MasterRoom's A/C due [RM]: %.3f",amt_due(alex_tol, price_unit));
	printf("\n");
	printf("\t >(A/C)/2 Split Half [RM]: %.3f",amt_due(alex_tol, price_unit)/2);
	
	alex_due1 = amt_due(alex_tol,price_unit)/2;
	alex_due2 = amt_due(alex_tol,price_unit)/2;
	//MasterRoom end//
	printf("\n");
	
	//MidRoom//
	float jack_pre, jack_cur, jack_tol, jack_due;
	printf("\n");
	printf("MidRoom's Previous A/C Units [KWH]: ");
	scanf("%f",&jack_pre);
	printf("MidRoom's Curent A/C Units [KWH]: ");
	scanf("%f",&jack_cur);
	jack_tol=jack_cur-jack_pre;
	printf("MidRoom's Total A/C Units [KWH]: %.3f",jack_tol);
	printf("\n");
	printf("MidRoom's A/C due [RM]: %.3f",amt_due(jack_tol, price_unit));
	jack_due = amt_due(jack_tol,price_unit);
	//MidRoom end//
	printf("\n");
	
	//FrontRoom//
	float kelvin_pre, kelvin_cur, kelvin_tol, kelvin_due;
	printf("\n");
	printf("FrontRoom's Previous A/C Units [KWH]: ");
	scanf("%f",&kelvin_pre);
	printf("FrontRoom's Curent A/C Units [KWH]: ");
	scanf("%f",&kelvin_cur);
	kelvin_tol=kelvin_cur-kelvin_pre;
	printf("FrontRoom's Total A/C Units [KWH]: %.3f",kelvin_tol);
	printf("\n");
	printf("FrontRoom's A/C due [RM]: %.3f",amt_due(kelvin_tol, price_unit));
	kelvin_due = amt_due(kelvin_tol,price_unit);
	//FrontRoom end//	
	printf("\n");
	
	//AC-END//	

	//Elec App//
	printf("\n");
	printf("\n");	
	for(i=0;i<41;i++)
	printf("-");
	printf("\n\t =Electric Applications=\n");
	for(i=0;i<41;i++)
	printf("-");
	printf("\n");
	
	float elec_kwh, elec_rm, elec_pp;
	elec_kwh=unit_use-(alex_tol+jack_tol+kelvin_tol);
	elec_rm=elec_kwh*price_unit;
	elec_pp=elec_rm/4;

	printf("Electrical Apps [KWH]: \t%.3f\n", elec_kwh);
	printf("Electrical Apps [RM]: \t%.3f\n", elec_rm);
	//printf("Electrical Apps avg per Person [KWH]: \t%.3f\n", elec_pp);
	printf("\n");
	//Elec App-END//
	
	//Overall//
	for(i=0;i<41;i++)
	printf("-");
	printf("\n\t     =Overall Total=\n");
	for(i=0;i<41;i++)
	printf("-");
	printf("\n");
	
	float alex_odue1, alex_odue2, jack_odue, kel_odue;
	//printf("\n");
	alex_odue1=elec_pp+alex_due1;
	alex_odue2=elec_pp+alex_due2;
	jack_odue=elec_pp+jack_due;
	kel_odue=elec_pp+kelvin_due;
	printf("MasterRoom DUE \t[RM]: %.3f\n", alex_odue1+alex_odue2);
	printf("\t >Per User DUE \t[RM]: %.3f\n", (alex_odue1+alex_odue2)/2);
	printf("MidRoom DUE \t[RM]: %.3f\n", jack_odue);
	printf("FrontRoom DUE \t[RM]: %.3f\n", kel_odue);
	//Overall//
	printf("\n");
	for(i=0;i<41;i++)
	printf("-");
	printf("\n");
	printf("Overall DUE \t[RM]: %.3f\n", alex_odue1+alex_odue2+jack_odue+kel_odue);	
	for(i=0;i<41;i++)
	printf("-");
	printf("\nL-R [if 0 = no error]: %d",bill_amt-(alex_odue1+alex_odue2+jack_odue+kel_odue));
	printf("\n");
	
	//for(i=0;i<41;i++)
	//printf("-");
	//printf("\n Auto Saved File in > output.txt\n");
	//for(i=0;i<41;i++)
	//printf("-");
	//printf("\n");

	system ("pause"); 
	
	//scanf("%d",&i);
}
float amt_due(float total, float elec_price_unit)
	{
			return total* elec_price_unit;
		}
