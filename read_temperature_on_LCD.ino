#include <LiquidCrystal.h>
 
LiquidCrystal lcd1(2,3,4,5,6,7);

//Jump cable from PIN2 on UNO to RS
//Jump cable from PIN3 on UNO to EN
//Jump cable from PIN4 on UNO to D4
//Jump cable from PIN5 on UNO to D5
//Jump cable from PIN6 on UNO to D6
//Jump cable from PIN7 on UNO to D7
//Jump cable from A0 on UNO to TEMPERATURE

void setup() {
  //lm35_1
  pinMode(A0,INPUT);
  lcd1.begin(16,2);
 
  lcd1.print("TEMPERATURE READ");
}
 
void loop() {
  lcd1.setCursor(5,2);
  lcd1.print(analogRead(A0)*0.48828125);
  delay(2000);
}
