#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR &= ~BIT1;              //configures as input
	P2OUT |= BIT0;              // pull-up resistor
	P2REN |= BIT0;              //enable resistor on P2.1
    P1DIR |= BIT0;          //configures as output





	while(1)
	{
	    int value = P2IN & BIT0; // set button as an int value

	    if(value == 0)

	            P1OUT |= BIT1; // if value is 0 turn on LED
	    else
	            P1OUT &= ~BIT1; // if not keep it off

	}






}



	
