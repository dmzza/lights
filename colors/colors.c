#include <math.h>

/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int red = 3,
    green = 5,
    blue = 6, 
    i=0;
double angle = 0.0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(red, OUTPUT); 
  pinMode(green, OUTPUT); 
  pinMode(blue, OUTPUT); 
  Serial.begin(9600);
  delay(100);
  Serial.print(sin(3));
}

// the loop routine runs over and over again forever:
void loop() {
  angle = sin((i*0.0174532925*255)/360)
  
  analogWrite(red, i);   // turn the LED on (HIGH is the voltage level)
  analogWrite(green, i);
  analogWrite(blue, i);
  delay(3);               // wait for a second
  i++;             // wait for a second
  i = i & 255;
  
  
  
}
