	//Importing required library 
	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	
	/*Declaring the global Variable	so that values can be calculated from single 
	function from all files	*/
		long int x,y,i,n,xy,sumXY,sumX,sumY,sumX2,sumY2;
	//Here is a function to calculate formulae variable.

	void formulas(){
		
				n++; //counting total number of data from the whole file.
				sumX+=x;
				sumY+=y;
				sumX2+=x*x;
				sumY2+=y*y;
				sumXY+=x*y;
						
	}
	
	//Main function run at the program start.
	void main(){
		double A,B,cX,Y; //declare double variable
		A=B=Y=0; //initializing value of A,B,C as 0.
		sumXY=sumX=sumY=x=y=sumX2=sumY2=0; //initiliazing all formulae variable in multiple variable as 0.
		
		//Create file pointer for four file.
		FILE *fptr1;
		FILE *fptr2;
		FILE *fptr3;
		FILE *fptr4;
		
		//Open four file into read mode.
		fptr1 = fopen("datasetLR1.txt","r");//opening first text file
		fptr2 = fopen("datasetLR2.txt","r");//opening second text file
		fptr3 = fopen("datasetLR3.txt","r");//opening third text file
		fptr4 = fopen("datasetLR4.txt","r");//opening fourth text file
		
		// This is a condition if all file are empty it returns error message.
		
		if(fptr1==NULL && fptr2==NULL&& fptr3==NULL && fptr3==NULL ){
			printf("\n Error: File is not Present");
			exit(1); //it is used for terminate the code if file had empty.
		}
	
			// while loop to read line by line value of x and y until first file reaches end.
			while(fscanf(fptr1,"%d, %d\n",&x,&y)!=EOF){
				formulas(); //calling formulas function so to calculate formulae variable.
			}
			
			// while loop to read line by line value of x and y until second file reaches end.
			while(fscanf(fptr2,"%d, %d\n",&x,&y)!=EOF){
				formulas(); //calling formulas function so to calculate formulae variable.
					
			}
			
			// while loop to read line by line value of x and y until third file reaches end.
			while(fscanf(fptr3,"%d, %d\n",&x,&y)!=EOF){
				formulas(); //calling formulas function so to calculate formulae variable.
					
			}
			
			// while loop to read line by line value of x and y until fourth file reaches end.
			while(fscanf(fptr4,"%d, %d\n",&x,&y)!=EOF){
				formulas(); //calling formulas function so to calculate formulae variable.
					
			}
				printf("\t\t\tWelcome To The Program\n\n");
				printf("Total data count from the four file is: %d \n\n",n); //printing total count number of integer from all file.
				printf("Total sum of x is: %d \n",sumX); //printing total sum of x from all file.
				printf("Total sum of y is: %d \n",sumY); //printing total sum of y from all file.
				printf("Total sum of x*y is: %d \n",sumXY); //printing total sum of x*y from all file.
				printf("Total sum of x square is: %d \n",sumX2); //printing total sum of x square from all file.
				printf("Total sum y square is: %d\n\n",sumY2); //printing total sum of y square from all file.
				
				// This is a formulae to calculate the value of A from linear regression equation.
				A=((sumY)*(sumX2)-(sumX)*(sumXY))/(n*(sumX2)-pow(sumX,2));
				
				// This is a formulae to calculate the value of B from linear regression equation.
				B=(n*(sumXY)-(sumX)*(sumY))/(n*(sumX2)-pow(sumX,2));
				
				printf("Final A value is:%lf\n",A); // Printing value of A here, lf returns double data types.
				printf("Final B value is:%lf\n",B); // Printing value of B.
				
				//Receving input [X] from user to calculate Y
				printf("Enter the value of X: ");
				scanf("%lf",&cX); // scanning x value from user here.
	
				printf("\nX value received:%lf\n",cX);
				
				/* using LR formula y=mx+c here y as Y, m as B, x as cX and c known as A. 
				to calculate value of Y*/
				Y=(B*cX)+A;
				
				printf("The Y value for the given X is:%lf\n\n",Y);
				printf("\t\t\tProgram done by Puja Bhandari\n");
				printf("\t\t\t\tThank You!");
		
		// fclose closes all the file.
		fclose(fptr1);
		fclose(fptr2);
		fclose(fptr3);
		fclose(fptr4);
	}
	
	
		

