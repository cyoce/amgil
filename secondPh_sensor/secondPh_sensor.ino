// second ph sensor
// pHRead.ino

// Constants:-
const byte pHpin = A0;    // Connect the sensor's Po output to analogue pin 0.

// Variables:-
float Po;

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
    
    Serial.begin(9800);
    lcd.begin(16, 2);
}

void loop()
{
    Po = 1023 - analogRead(pHpin);  // Read and reverse the analogue input value from the pH sensor.
    Po = map(Po, 0, 1023, 0, 14);   // Map the '0 to 1023' result to '0 to 14'.
    int value = Po;
    Serial.println(Po);             // Print the result in the serial monitor.

     lcd.setCursor(0, 1);
     lcd.print("PH: " + value);
    
    delay(1000);                    // Take 1 reading per second.
}
