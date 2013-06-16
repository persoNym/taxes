/* simple.c: tax output program. 
    @author Victoria C
    @since 01/12/13
 */ 

#include<stdio.h>
#include<math.h>

#define MIN 0.0
#define MAX 100000.00

int main( void)
{

	double salary;
	double tax[8]={.0,.05,.12,.20,.33,.38,.45,.50};
	double output;
	int input;

	printf( "\n Please select an option\n" ); //option for the range that the user salary falls undeer
	printf( "1) If you make under $10000.00 \n " );
	printf( "2) If you make between $10000.00-$20000.00 \n" );
	printf( "3) If you make between $20000.00-$30000.00\n" );
	printf( "4) If you make between $30000.00-$40000.00\n" );
	printf( "5) If you make between $40000.00-$50000.00\n" );
	printf( "6) If you make between $50000.00-$60000.00\n" );
	printf( "7) If you make between $60000.00-$70000.00\n" );
	printf( "8) If you make $70000.00 and up \n" );
	printf("\n Option:");
	scanf("%d", &input);

	while(input < 1 || input > 8) {	
	
		//Limit check to ensure valid option is picked
		printf("\nInvalid Option! Please re-enter:");
		scanf("%d", &input);
	}

	input = input - 1; //This ensures that the input will coincide with the array index

	// Get the salary from the user
	printf( "\n Enter your salary:" );
	scanf("%lf", &salary);

	while (salary < MIN || salary > MAX) {

		// While the salary is invalid, keep trying to get a new salary from the user
		printf("\n USER ERROR! The number you have entered is invalid. Please re-enter.\n");
		printf( "\n Enter your salary:" );
		scanf( "%lf", &salary);
	}
	
	// Returns the input back to user
	printf( "\n You have entered: %lf\n", salary);

	// The input value just tells us which value in the array we're interested in
	output = tax[input] * salary;
	printf( "\n Your tax rate is: %lf\n", tax[input]);
	printf( "\n You must pay: %lf\n", output);

return 0;
}



















