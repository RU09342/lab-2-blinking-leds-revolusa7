# Lab Abstract
In this lab we made an LED blink with the press of a button. Even though this is very simple, it gave us a proper basis on how to interface with the inputs and outputs of the MSP340. With this knowledge we can advance further to more difficult assignments.

# Difference in boards
The main difference between the individual boards are the input pins and output pins. The FR5994 also needs to disable the GPIO power on high impedance mode.

# Method
In the initilization I enabled the pull up reisistor of the led. Then  I Directed the button pin to input and the LED pin to output. I created a while loop that would turn on the LED everytime in the input value was zero.
