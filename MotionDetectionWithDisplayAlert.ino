#include <Wire.h>
#include <LiquidCrystal_I2C.h>


int pirPin = A1;
bool sensorVal = false;
int ledPin = 8;
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() 
{
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  
  lcd.begin();
  lcd.backlight();
  lcd.print("Stand by");

 
 
}

void loop()
{
  // put your main code here, to run repeatedly:
   sensorVal = analogRead(pirPin);


    if(sensorVal){
    digitalWrite(ledPin,HIGH);
    lcd.clear();
    lcd.print("Motion Detected");
     delay(2000);
     digitalWrite(ledPin,LOW);
     delay(2000);
     
    }
    else{
       lcd.clear();
    }

}
