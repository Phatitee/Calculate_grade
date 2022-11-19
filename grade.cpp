#include<stdio.h>
#include<conio.h>
main()
{
	int before_midterm,after_midterm,midterm,final,total;
	printf("Enter score before midterm (30) : ");
	scanf("%d",&before_midterm);
	printf("Enter score after midterm (30) : ");
	scanf("%d",&after_midterm);
	printf("Enter midterm  (20): ");
	scanf("%d",&midterm);
	printf("Enter score final (20): ");
	scanf("%d",&final);
	total=before_midterm+after_midterm+midterm+final;
	printf("----------------------------\n");
	printf("All Score = %d",total);
	if((total >=80)&&(total <=100))
	{
		printf("\nGrade4");	
	}else if((total >=75)&&(total <=79))
	{
		printf("\nGrade3.5");		
	}else if((total >=70)&&(total <=74))
	{
		printf("\nGrade3");
	}else if((total >=65)&&(total <=69))
	{
		printf("\nGrade2.5");
	}else if((total >=60)&&(total <=64))
	{
		printf("\nGrade2");
	}else if((total >=55)&&(total <=59))
	{
		printf("\nGrade1.5");
	}else if((total >=50)&&(total <=54))
	{
		printf("\nGrade1");
	}else if((total >=0)&&(total <=49))
	{
		printf("\nGrade0");
	}else
	{
		printf("\nData Error.");		
	}
	getch();
}
