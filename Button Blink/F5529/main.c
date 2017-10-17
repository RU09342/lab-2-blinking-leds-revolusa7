#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P2DIR &= ~BIT1;              //configures as input
	P2OUT |= BIT1;              // pull-up resistor
	P2REN |= BIT1;              //enable resistor on P2.1
    P1DIR |= BIT0;          //configures as output





	while(1)
	{
	    int value = P2IN & BIT1; // set button as an int value

	    if(value == 0)

	            P1OUT |= BIT0; // if value is 0 turn on LED
	    else
	            P1OUT &= ~BIT0; // if not keep it off

	}






}



	
