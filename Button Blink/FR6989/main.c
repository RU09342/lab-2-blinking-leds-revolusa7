#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR &= ~BIT1;              //configures as input
	P9OUT |= BIT7;              // pull-up resistor
	P9REN |= BIT7;              //enable resistor on P2.1
    P9DIR |= BIT7;          //configures as output





	while(1)
	{
	    int value = P5IN & BIT6; // set button as an int value

	    if(value == 0)

	            P9OUT |= BIT7; // if value is 0 turn on LED
	    else
	            P9OUT &= ~BIT7; // if not keep it off

	}






}



	
