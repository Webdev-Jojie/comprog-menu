#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void mainMenu();
// ASTERISK // 1

void asterisk() {
	
	system("cls");
	printf("\n\n\t\t ************ ASTERISK ************ \n\n\n");
	
	char reUse;
	int i,j,n;
    
    do {
    	
		printf("Enter a number: ");
    	scanf("%d", &n);
    	printf("\n");
    
    	for(i = 1; i <=n; i++){
        	for(j = 1; j <= n; j++){
            	printf("*");
        	}
        	printf("\n");
    	}
	
			printf("\n\n You want to try again? Y/n: ");
			scanf(" %c", &reUse);
			
		if(reUse == 'Y' || reUse == 'y'){

			system("cls");
			printf("\n\n\t\t ************ ASTERISK ************ \n\n\n");

		}else {
			system("cls");
			mainMenu();
		}
	
	}while (reUse == 'Y' || reUse == 'y');
	
}

// CONVERT // 2

void convert() {
	
	system("cls");
	printf("\n\n\t\t ************ CONVERT ************ \n\n\n");
	
	char reUse;
	
	do{

        double inches;

        printf("Enter a measurement in inches: ");
        scanf("%lf", &inches);
        printf("\n");

        double feet = inches / 12.0;
        double yards = inches / 36.0;
        double centimeters = inches * 2.54;
        double meters = inches / 39.37;

        printf("%.2lf inches is equivalent to:\n", inches);
        printf("feet %.2lf \n", feet);
        printf("yards %.2lf \n", yards);
        printf("centimeters %.2lf \n", centimeters);
        printf("meters %.2lf \n", meters);

        printf("\n\n You want to try again? Y/n: ");
			scanf(" %c", &reUse);
			
		if(reUse == 'Y' || reUse == 'y'){

			system("cls");
			printf("\n\n\t\t ************ CONVERT ************ \n\n\n");

		}else {
			system("cls");
			mainMenu();
		}
    
    }while (reUse == 'Y' || reUse == 'y');
}

// COST // 3

void cost() {
	
    system("cls");
	printf("\n\n\t\t ************ COST ************ \n\n\n");
	
	char reUse;

	do{

        int num1, num2, sum, ave, product;
        
        printf("Enter the value of num1: ");
        scanf ("%d", &num1);
        
        printf("Enter the value of num2: ");
        scanf ("%d", &num2);

        printf("\n");
        
        sum = num1 - num2;
        ave = sum/2;
        product = num1 * num2;
        
        printf ("1. Average of two number: %d", ave);
        printf("\n");
        
        printf("2. Computing the 50%% of the sum: %d", sum);
        printf("\n");
        
        printf("3. Product of 2 number: %d", product);

        printf("\n\n You want to try again? Y/n: ");
			scanf(" %c", &reUse);
			
		if(reUse == 'Y' || reUse == 'y'){

			system("cls");
			printf("\n\n\t\t ************ COST ************ \n\n\n");

		}else {
			system("cls");
			mainMenu();
		}
    
    }while (reUse == 'Y' || reUse == 'y');

}

// DAYs OF WEEK // 4

void DaysOfWeek() {
	
    system("cls");
	printf("\n\n\t\t ************ DAYS OF WEEK ************ \n\n\n");
	
	char reUse;
	
    do{

        int number_of_weeks;

        printf("Enter a number: ");
        scanf("%d", &number_of_weeks);
        printf("\n");

        switch (number_of_weeks) {

            case 0:

                printf("\t ~ Sunday ~");
                break;

            case 1:

                printf("\t ~ Monday ~");
                break;

            case 2:

                printf("\t ~ Tuesday ~");
                break;

            case 3:

                printf("\t ~ Wednesday ~");
                break;

            case 4:

                printf("\t ~ Thursday ~");
                break;

            case 5:

                printf("\t ~ Friday ~");
                break;

            case 6:

                printf("\t ~ Saturday ~");
                break;

            default:

                printf("Enter a valid number!");

        }

        printf("\n\n You want to try again? Y/n: ");
			scanf(" %c", &reUse);
			
		if(reUse == 'Y' || reUse == 'y'){

			system("cls");
			printf("\n\n\t\t ************ DAYS OF WEEK ************ \n\n\n");

		}else {
			system("cls");
			mainMenu();
		}

    }while (reUse == 'Y' || reUse == 'y');

}

// Discount // 5

void Discount() {

    system("cls");
	printf("\n\n\t\t ************ DISCOUNT ************ \n\n\n");
	
	char reUse;                                                     //J0J1E B4G4TU4

    do {

        float discount = 0.05;
        float price, total_price, discount_price;
        int quantity;


        printf("Enter the price of the item: ");
        scanf("%f", &price);

        printf("Enter the quantity: ");
        scanf("%d", &quantity);
        printf("\n");

        total_price = price * quantity;
        discount * total_price;
        discount_price = total_price - discount;

        if (total_price > 500) {

            printf("Price: %.2f\n", price);
            printf("Quantity: %d\n", quantity);
            printf("Total Price: %.2f\n", total_price);
            printf("Discount Price: %.2f\n", discount_price);
            printf("Discounted Price: %.2f\n", total_price - discount_price);

        } else {

            discount_price = total_price;
            printf("No discount applied.\n");
        }

        printf("\n\n You want to try again? Y/n: ");
			scanf(" %c", &reUse);
			
		if(reUse == 'Y' || reUse == 'y'){

			system("cls");
			printf("\n\n\t\t ************ DISCOUNT ************ \n\n\n");

		}else {
			system("cls");
			mainMenu();
		}

    }while (reUse == 'Y' || reUse == 'y');

}

// Fraction // 6

void Fraction() {

    system("cls");
	printf("\n\n\t\t ************ FRACTION ************ \n\n\n");
	
	char reUse;

    do {

        int numerator, denaminator;
    
        printf("Enter the numerator: ");
        scanf("%d", &numerator);

        printf("Enter the denaminator: ");
        scanf("%d", &denaminator);
        printf("\n");

        printf("The fraction is %d/%d", numerator, denaminator);

        printf("\n\n You want to try again? Y/n: ");
		scanf(" %c", &reUse);
			
		if(reUse == 'Y' || reUse == 'y'){

			system("cls");
			printf("\n\n\t\t ************ FRACTION ************ \n\n\n");

		}else {
			system("cls");
			mainMenu();
		}

    }while (reUse == 'Y' || reUse == 'y');

}

// Func1 // 7

void Func1() {
	
	system("cls");
	printf("\n\n\t\t ************ FUNC1 ************ \n\n\n");
	
	char reUse;

    do {

        int num1, num2;
	    char opt;
    
	    printf("Enter a number: ");
	    scanf("%d", &num1);
    
	    printf("Enter an operator: ");
	    scanf(" %c", &opt);
    
	    printf("Enter another number: ");
	    scanf("%d", &num2);
        printf("\n");

	    switch(opt){
        
        
	    	case '+':
    
	    		printf("The sum is: %d", num1 + num2);
	    		break;
    
	    	case '-':
    
	    		printf("The division is: %d", num1 - num2);
	    		break;
    
	    	case '*':
    
	    		printf("The product is: %d", num1 * num2);
	    		break;
    
	    	case '/':
    
	    		printf("The division is: %d", num1 / num2);
	    		break;
    
	    }

        printf("\n\n You want to try again? Y/n: ");
			scanf(" %c", &reUse);
			
		if(reUse == 'Y' || reUse == 'y'){

			system("cls");
			printf("\n\n\t\t ************ FUNC1 ************ \n\n\n");

		}else {
			system("cls");
			mainMenu();
		}

    }while (reUse == 'Y' || reUse == 'y');
    
    
	
}

// Func2 // 8


//	(+)
int plus(int num01, int num02){
	
	int totalSum;
	
	totalSum = num01 + num02;
	
	printf("The sum is: %d", totalSum);
	
	return totalSum;
	
}


//	(-)
int minus(int num01, int num02){
	
	int totalSubtract;
	
	totalSubtract = num01 - num02;
	
	printf("The subtract is: %d", totalSubtract);
	
	return totalSubtract;
}


//	(*)
int times(int num01, int num02){
	
	int totalProduct;
	
	totalProduct = num01 * num02;
	
	printf("The product is: %d", totalProduct);
	
	return totalProduct;
}


//	(/)
int devide(int num01, int num02){
	
	int totalDivision;
	
	totalDivision = num01 / num02;
	
	printf("The division is: %d", totalDivision);
	
	return totalDivision;
}

void Func2() {

    system("cls");
	printf("\n\n\t\t ************ FUNC2 ************ \n\n\n");
	
	char reUse;

    do {

        int num1, num2;
	
	    printf("Enter a number: ");
	    scanf("%d", &num1);
    
    
	    printf("Enter another number: ");
	    scanf("%d", &num2);
	    printf("\n");
    
    
	    plus(num1, num2);	// (+)
	    printf("\n");
	    minus(num1, num2);	// (-)
	    printf("\n");
	    times(num1, num2);	// (*)
	    printf("\n");
	    devide(num1, num2);	// (/)

        printf("\n\n You want to try again? Y/n: ");
			scanf(" %c", &reUse);
			
		if(reUse == 'Y' || reUse == 'y'){

			system("cls");
			printf("\n\n\t\t ************ FUNC2 ************ \n\n\n");

		}else {
			system("cls");
			mainMenu();
		}

    }while (reUse == 'Y' || reUse == 'y');

}

// Func3 // 9

float genAve (float q1, float q2, float q3) {
	
	float quizResult;
	
	printf("Enter your score in Quiz1: ");
	scanf("%f", &q1);
	
	printf("Enter your score in Quiz2: ");
	scanf("%f", &q2);
	
	printf("Enter your score in Quiz3: ");
	scanf("%f", &q3);
	
	quizResult = (q1 + q2 + q3) / 3;
	
}

void Func3(){

    system("cls");
	printf("\n\n\t\t ************ FUNC3 ************ \n\n\n");
	
	char reUse;

    do {
		
		float q1, q2, q3;
		float qResult;

		qResult = genAve(q1,q2,q3);
        printf("\n");
		printf("Average is %.2f", qResult);
		printf("\n");
		printf("The 50 %% is %.2f", qResult / 2);

        printf("\n\n You want to try again? Y/n: ");
			scanf(" %c", &reUse);
			
		if(reUse == 'Y' || reUse == 'y'){

			system("cls");
			printf("\n\n\t\t ************ FUNC3 ************ \n\n\n");

		}else {
			system("cls");
			mainMenu();
		}

    }while (reUse == 'Y' || reUse == 'y');

}

// FunConvert // 10

float ConvertInch(double inches) {
    return inches * 0.0254;
}

double GetInput() {
    double inches;
    printf("Enter the value in inches: ");
    scanf("%lf", &inches);
    return inches;
}

void DisplayMeter(double inches, double meters) {
    printf("%.2lf inches is equal to %.3lf meters.\n", inches, meters);
}

void FunConvert() {

    system("cls");
	printf("\n\n\t\t ************ FunConvert ************ \n\n\n");
	
	char reUse;

    do {
        
        double inches = GetInput();

        double meters = ConvertInch(inches);        //TUBIG MARKA NI

        DisplayMeter(inches, meters);

        printf("\n\n You want to try again? Y/n: ");            //JOJIE BAGATUA
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ FunConvert ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');

}

// Grade // 11

void Grade() {

    system("cls");
	printf("\n\n\t\t ************ GRADE ************ \n\n\n");
	
	char reUse;

    do {
        
        float grade;
    
        printf("Enter your grade: ");
        scanf("%f", &grade);
        printf("\n");

        if (grade < 3.0) {
            printf("Congratulations, you passed!");
        } else {
            printf("Sorry, you failed!");
        }

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ GRADE ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');

}

// H // 12

void H_Asterisk() {

    system("cls");
	printf("\n\n\t\t ************ H ************ \n\n\n");
	
	char reUse;

    do {
        
        int i,j,n;
   
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n");
    
    for(i = 1; i<=n; i++){
        for(j = 1; j<=n; j++){
            if(j==1 || j==n || j==1 || i==n/2 + 1){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ H ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');

}

// Month_of_Year // 13

void Month_of_Year() {

    system("cls");
	printf("\n\n\t\t ************ Month of Year ************ \n\n\n");
	
	char reUse;

    do {

        int month;
    
        printf("Enter a number: ");
        scanf("%d", &month);

        switch(month) {


            case 1:

                printf("January");
                break;

            case 2:

                printf("February");
                break;

            case 3:

                printf("March");
                break;

            case 4:

                printf("April");
                break;

            case 5:

                printf("May");
                break;

            case 6:

                printf("June");
                break;

            case 7:

                printf("July");
                break;

            case 8:

                printf("August");
                break;

            case 9:

                printf("September");
                break;

            case 10:

                printf("October");
                break;

            case 11:

                printf("November");
                break;

            case 12:

                printf("December");
                break;

            default:

                printf("Enter valid number!");

        }

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ Month of Year ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');

}

//  // 14

void Parking_Charge() {
    system("cls");
    printf("\n\n\t\t ************ PARKING CHARGE ************ \n\n\n");

    char reUse;

    do {
        char vehicleType;
        int hours;
        float parkingCharge, rate;

        printf("\n\t\t********************");
        printf("\n\t\t C for Car\n");
        printf("\t\t B for Bus\n");
        printf("\t\t T for Truck\n\n");
        printf("\t\t********************\n\n");

        // Loop until a valid vehicle type is entered
        do {
            printf("Enter the type of vehicle: ");
            scanf(" %c", &vehicleType);
            printf("\n");

            if (vehicleType != 'C' && vehicleType != 'B' && vehicleType != 'T') {
                printf("Invalid vehicle type. Please enter C, B, or T.\n");
            }
        } while (vehicleType != 'C' && vehicleType != 'B' && vehicleType != 'T');

        printf("Enter the number of hours: ");
        scanf("%d", &hours);

        if (vehicleType == 'C') {
            rate = 2.0;
        } else if (vehicleType == 'B') {
            rate = 3.0;
        } else if (vehicleType == 'T') {
            rate = 4.0;
        }

        parkingCharge = rate * hours;

        printf("Parking charge: $%.2f\n", parkingCharge);

        printf("\n\n You want to try again? Y/n: ");
        scanf(" %c", &reUse);

        if (reUse == 'Y' || reUse == 'y') {
            system("cls");
            printf("\n\n\t\t ************ PARKING CHARGE ************ \n\n\n");
        } else {
            system("cls");
            mainMenu();
        }

    } while (reUse == 'Y' || reUse == 'y');
}


// QUIZ // 15


void Quiz() {
	
    system("cls");
	printf("\n\n\t\t ************ QUIZ ************ \n\n\n");
	
	char reUse;

	do {
		int radius;
        float area = 3.1416;
        float circle;

        printf("Enter radius: ");
        scanf("%d", &radius);
        printf("\n");

        circle = radius * area*2;

        printf("The area of the cricle with a radius of %d is %.2fsq.cm", radius, circle);

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ QUIZ ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

	}while (reUse == 'Y' || reUse == 'y');
	
}

// RevNo // 16

void RevNo(){

    system("cls");
	printf("\n\n\t\t ************ RevNo ************ \n\n\n");
	
	char reUse;

    do {

        int i,j,n;
    
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("\n");


        for(i = 1; i <= n; i++){
            for(j = 1; j<=i; j++){
                printf("%d", j);
            }
            printf("\n");
        }

        for(i = n; i > 1; i--){             //TUBIG MARKA NI
            for(j = 1; j<i; j++){          //JOJIE BAGATUA
                printf("%d", j);
            }
            printf("\n");
        }

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ RevNo ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');
    
}

// RevTri // 17

void RevTri(){

    system("cls");
	printf("\n\n\t\t ************ RevTri ************ \n\n\n");
	
	char reUse;

    do {

        int i,j,n;
    
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("\n");

        for(i = n; i <= n; i--){
            for(j = 1; j <= i; j++){
                printf("%d", j);
            }
            printf("\n");
        }

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ RevTri ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');
    
}

// Smallest // 18

int smallest(int x, int y, int z) {
    
    if(x <= y && x <= z) {
        return x;
    }
    else if(y <= x && y <= z){
        return y;
    }
    else {
        return z;
    }
    
}

void Smallest(){

    system("cls");
	printf("\n\n\t\t ************ Smallest ************ \n\n\n");
	
	char reUse;

    do {

        int numX;
        int numY;
        int numZ;

        printf("Enter any value: ");
        scanf("%d", &numX);

        printf("Enter any value: ");
        scanf("%d", &numY);

        printf("Enter any value: ");
        scanf("%d", &numZ);
        printf("\n");

        int result = smallest(numX, numY, numZ);
        printf("The smallest number is: %d", result);

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ Smallest ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');
    
}

// Square // 19

void Square(){

    system("cls");
	printf("\n\n\t\t ************ Square ************ \n\n\n");
	
	char reUse;

    do {

        int i,j,n;
    
        printf("Enter a number: ");

        scanf("%d", &n);

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (i == 1 || i == n || j == 1 || j == n){      // JOJIE BAGATUA
                    printf("* ");
                }else{
                    printf("  ");
                }
            }

            printf("\n");
        }

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ Square ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');
    
}

// Switch // 20

void Switch(){

    system("cls");
	printf("\n\n\t\t ************ Switch ************ \n\n\n");
	
	char reUse;

    do {

        int num1, num2;
        char opt;
        
        printf("Enter first number: ");
        scanf("%d", &num1);
    
        printf("Enter second number: ");
        scanf("%d", &num2);
    
        printf("Enter operator: ");
        scanf(" %c", &opt);
        printf("\n");
    
        switch(opt) {
            
            case '+':
                printf("The sum of two number is: %d", num1 + num2);
                break;
                
            case '-':
                printf("The difference of two number is: %d", num1 - num2);
                break;
                
            case '*':
                printf("The product of two number is: %d", num1 * num2);
                break;
                
            case '/':
                printf("The quotient of two number is: %d", num1 / num2);
                break;
                
            default :
            
                printf("Enter valid operator!");
                break;
            
        }

            printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ Switch ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');
    
}

// Temp // 21

void Temp(){

    system("cls");
	printf("\n\n\t\t ************ Temp ************ \n\n\n");
	
	char reUse;

    do {

        float fahrenheit, celsius;
    
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        printf("\n");

        fahrenheit = (celsius-32) * 5/9;
        printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ Temp ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');
    
}

// Tri // 22

void Tri(){

    system("cls");
	printf("\n\n\t\t ************ Tri ************ \n\n\n");
	
	char reUse;

    do {

        int i,j,n;
    
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("\n");

        for(i = 1; i <= n; i++){
            for(j = 1; j <= i; j++){
                printf("%d", j);
            }
            printf("\n");
        }

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ Tri ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');
    
}

// Vote // 24

void Vote(){

    system("cls");
	printf("\n\n\t\t ************ Vote ************ \n\n\n");
	
	char reUse;

    do {

        int age;
   
        printf("Enter your age: ");
        scanf("%d", &age);
        printf("\n");

        if(age >= 18){
            printf("I can vote!");
        }else {
            printf("I am disqualified to vote!");

        }

        printf("\n\n You want to try again? Y/n: ");
	    		scanf(" %c", &reUse);
    
	    	if(reUse == 'Y' || reUse == 'y'){

	    		system("cls");
	    		printf("\n\n\t\t ************ Vote ************ \n\n\n");

	    	}else {
	    		system("cls");
	    		mainMenu();
	    	}

    }while (reUse == 'Y' || reUse == 'y');
    
}

// EXIT // 24

void Exit() {
	
	system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t *****     THANKYOUU      ******\n\n\n\n\n\n\n\n\n");
}

void mainMenu() {

    printf("\n\n\t\t\t\t\t\t\t\t       *\n");
    printf("\t\t\t\t\t\t\t\t      ***\n");
    printf("\t\t\t\t\t\t\t\t     *****\n");
    printf("\t\t\t\t\t\t\t\t    *******\n");
    printf("\t\t\t\t\t\t\t\t   *********\n");
    printf("\t\t\t\t\t\t\t\t  ***********\n");
    printf("\t\t\t\t\t\t\t\t *************\n");
    printf("\t\t\t\t\t\t\t\t |           |\n");
    printf("\t\t\t\t\t\t\t\t | MAIN MENU |\n");
    printf("\t\t\t\t\t\t\t\t |           |\n");
    printf("\t\t\t\t\t\t\t\t *************\n");
    printf("\t\t\t\t\t\t\t ******************************\n");
	printf("\t\t\t\t ________________________________________________________________________ \n\n\n");
	printf("\t\t\t\t   1. Asterisk \t\t\t 12. H \t\t\t\t 23. Vote\n");
	printf("\t\t\t\t   2. Convert \t\t\t 13. Month of Year \t\t 24. Exit\n");
	printf("\t\t\t\t   3. Cost \t\t\t 14. Parking Charge\n");
	printf("\t\t\t\t   4. Days Of Week \t\t 15. Quiz\n");
	printf("\t\t\t\t   5. Discount \t\t\t 16. RevNo\n");
	printf("\t\t\t\t   6. Fraction \t\t\t 17. RevTri\n");
	printf("\t\t\t\t   7. Func1 \t\t\t 18. Smallest \n");
	printf("\t\t\t\t   8. Func2 \t\t\t 19. Square\n");
	printf("\t\t\t\t   9. Func3 \t\t\t 20. Switch\n");
	printf("\t\t\t\t   10. FunConvert \t\t 21. Temp\n");
	printf("\t\t\t\t   11. Grade \t\t\t 22. Tri\n");
    // printf("\t\t\t\t   12. H \t\t\t\t");


	int opt;
	
	printf("\n\n Please choose: ");
	scanf("%d", &opt);
	
//    if(opt <= '1' && opt >= '24'){

        switch (opt) {
        case 1:
            asterisk();
            break;

        case 2:
            convert();
            break;

        case 3:
            cost();
            break;

        case 4:
            DaysOfWeek();
            break;

        case 5:
            Discount();
            break;

        case 6:
            Fraction();
            break;

        case 7:
            Func1();
            break;

        case 8:
            Func2();
            break;

        case 9:
            Func3();
            break;

        case 10:
            FunConvert();
            break;

        case 11:
            Grade();
            break;

        case 12:
            H_Asterisk();
            break;

        case 13:
            Month_of_Year();
            break;

        case 14:
            Parking_Charge();
            break;

        case 15:
            Quiz();
            break;

        case 16:
            RevNo();
            break;

        case 17:
            RevTri();
            break;

        case 18:
            Smallest();
            break;

        case 19:
            Square();
            break;

        case 20:
            Switch();
            break;

        case 21:
            Temp();
            break;

        case 22:
            Tri();
            break;

        case 23:
            Vote();
            break;

        case 24:
            Exit();
            break;

        default:
            system("cls");
            printf("\n\n\t\tPlease Enter a valid OPTION!");
            mainMenu();
            break;
}


//    }else{
//
//            system("cls"); 
//            printf("Please Enter a valid OPTION!");
//            mainMenu();
//
//        }
	

}


int main() {
	
	mainMenu();
	
	return 0;
}
