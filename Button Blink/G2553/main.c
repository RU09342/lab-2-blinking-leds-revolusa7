#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR &= ~BIT3;              //configures as input
	P1OUT |= BIT6;              // pull-up resistor
	P1REN |= BIT6;              //enable resistor on P2.1
    P1DIR |= BIT6;          //configures as output





	while(1)
	{
	    int value = P1IN & BIT3; // set button as an int value

	    if(value == 0)

	            P1OUT |= BIT6; // if value is 0 turn on LED
	    else
	            P1OUT &= ~BIT6; // if not keep it off

	}






}



	
