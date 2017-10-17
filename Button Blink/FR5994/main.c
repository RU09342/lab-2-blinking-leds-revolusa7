#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P5DIR &= ~BIT6;              //configures as input
	P1OUT |= BIT2;              // pull-up resistor
	P1REN |= BIT2;              //enable resistor on P2.1
    P1DIR |= BIT2;          //configures as output





	while(1)
	{
	    int value = P5IN & BIT6; // set button as an int value

	    if(value == 0)

	            P1OUT |= BIT2; // if value is 0 turn on LED
	    else
	            P1OUT &= ~BIT2; // if not keep it off

	}






}



	
