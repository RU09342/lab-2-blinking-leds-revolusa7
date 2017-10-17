#include <msp430.h>				


/**
 * blink.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;		// stop watchdog timer
	P1DIR |= BIT0;					// configure P1.0 as output

	P1DIR |= BIT1;                  // configure P4.7 as output
	volatile unsigned int i;		// volatile to prevent optimization for P1.0
	volatile unsigned int j;        // volatile to prevent optimization for P4.7

	while(1)
	{
	    i ++;
	    j++;
	    if(i>30000)                 // time delay for P1.0
	    {i=0;P1OUT^=BIT0;}          // toggle P1.0
	    if(j>10000)                 // time delay for P4.7
	    {j=0;P4OUT^=BIT7;}          // toggle P4.7





	}
}
