/*
    Blink
    Turns on an LED on for one second, then off for one second, repeatedly.
    This example code is in the public domain.

    To upload to your Gemma:
    1) Select Arduino Gemma Tools > Board Menu
    2) Select Arduino Gemma from the Tools > Programmer
    3) Plug in the Gemma, make sure you see the red LED lit
    4) Press the button on the Gemma - verify you see the red LED pulse. This means it is ready to receive data
    5) Select File > Upload Using Programmer above within 10 seconds
    */

    // the setup routine runs once when you press reset:
    void setup() {
    // initialize the digital pin as an output.
    //pinMode(1, OUTPUT);
 // Unused pins can be set to INPUT w/pullup -- most power-efficient state
  pinMode(0, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);

  // LED shenanigans.  Rather that setting pin 1 to an output and using
  // digitalWrite() to turn the LED on or off, the internal pull-up resistor
  // (about 10K) is enabled or disabled, dimly lighting the LED with much
  // less current.
  pinMode(1, INPUT);               // LED off to start
    }

    // the loop routine runs over and over again forever:
    void loop() {
     pinMode(1, INPUT_PULLUP); // LED on (using internal pullup)
       delay(3000);
     pinMode(1, INPUT);        // LED off
      delay(7000);

    
  

  
    }
