

#include <LiquidCrystal.h>

LiquidCrystal lcd(4, 6, 10, 11, 12, 13);
//Button VARIABLES

const int PressButton1 = 7;
const int PressButton2 = 8;
const int PressButton3 = 9;


int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

int STATE = 0;

boolean pressing1 = false;
boolean pressing2 = false;
boolean pressing3 = false;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(PressButton1, INPUT);
  pinMode(PressButton2, INPUT);
  pinMode(PressButton3, INPUT);

  STATE = 0;
}

void loop() {
  //register the reading into the variable
  buttonState1 = digitalRead(PressButton1);
  buttonState2 = digitalRead(PressButton2);
  buttonState3 = digitalRead(PressButton3);


  if (buttonState1 == HIGH) {
    pressing1 = true;
  }

  if (buttonState1 == LOW && pressing1 == true) {
    pressing1 = false;
  }

  if (buttonState2 == HIGH) {
    pressing2 = true;
  }

  if (buttonState2 == LOW && pressing2 == true) {
    pressing2 = false;
  }
  if (buttonState3 == HIGH) {
    pressing3 = true;
  }

  if (buttonState3 == LOW && pressing3 == true) {
    pressing3 = false;
  }



  if (STATE == 0) {
    story();
  }
  if (STATE == 1) {
    question1();
  }
  if (STATE == 2) {
    lcd.clear();
    question2();
  }
  if (STATE == 3) {
    lcd.clear();
    lcd.print("You Win");
    delay(3000);
    lcd.clear();
    lcd.print ("You are");
    lcd.setCursor(0,1);
    lcd.print("fucking good!!!");
    delay(2000);
    lcd.clear();
     
    STATE = 0;
  }
  if (STATE == 6) {

    if (buttonState1 == HIGH) {
      //Serial.print("1 has been pressed");
      lcd.clear();
      lcd.print ("OUPS! Baseball");
      lcd.setCursor (0, 1);
      lcd.print ("bat in your face!");
      delay(2000);
      lcd.clear();
      lcd.print ("Try again!");
      delay(2000);
      lcd.clear();
      
      buttonState1 = 0;
      STATE = 0;
    }

    else if (buttonState2 == HIGH) {
      lcd.clear();
      lcd.print ("You are safe for");
      lcd.setCursor (0, 1);
      lcd.print ("now");
      delay(2000);
      lcd.clear();
      buttonState2 = 0;
      STATE = 2;
    }

    else if (buttonState3 == HIGH) {
      lcd.clear();
      lcd.print ("killed in your ");
      lcd.setCursor (0, 1);
      lcd.print ("sleep");
      delay(2000);
      lcd.clear();
      lcd.print ("Try again!");
      delay(2000);
      lcd.clear();
      buttonState3 = 0;
      STATE = 0;
    }

    buttonState1 = LOW;
    buttonState2 = LOW;
    buttonState3 = LOW;



  }

  if (STATE == 7) {

    if (buttonState1 == HIGH) {

      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print ("ate by rats");
      delay(2000);
      lcd.clear();
      lcd.print ("Try again!");
      delay(2000);
      lcd.clear();
      
      STATE = 0;
    }

    if (buttonState2 == HIGH) {


      lcd.print ("Stabed 48 times");
      delay(2000);
      lcd.clear();
      lcd.print ("Try again!");
      delay(2000);
      lcd.clear();
      STATE = 0;
    }

    if (buttonState3 == HIGH) {

      lcd.clear();
      lcd.print("You're tired but");
      lcd.setCursor(0,1);
      lcd.print ("Got home safe!");
      delay(3000);
      lcd.clear();
      STATE = 3;
    }
  }
  Serial.println(STATE);
}

void story() {

  lcd.print("November,1982");
  lcd.setCursor (0, 1);
  lcd.print("You wake up in");
  delay(2000);
  lcd.clear();
  lcd.print("the subway in");
  lcd.setCursor (0, 1);
  lcd.print("the Bronx.");
  delay(2000);
  lcd.clear();

  STATE = 1;
}

void question1() {

  lcd.print ("What do you want");
  lcd.setCursor (0, 1);
  lcd.print("to do?");
  delay(2000);
  lcd.clear();
  lcd.print ("1:Go left.");
  delay(1500);
  lcd.clear();
  lcd.print ("2:Go right.");
  delay(1500);
  lcd.clear();
  lcd.print ("3:sleep in");
  lcd.setCursor (0, 1);
  lcd.print ("the station");
  delay(1500);
  lcd.clear();

  STATE = 6;

}


void question2() {
  lcd.setCursor(0, 0);
  lcd.print ("What do you want");
  lcd.setCursor (0, 1);
  lcd.print("to do next?");
  delay(2000);
  lcd.clear();
  lcd.print ("1:Sleep on a");
  lcd.setCursor (0, 1);
  lcd.print ("bench");
  delay(2000);
  lcd.clear();
  lcd.print ("2:Grab a taxi");
  delay(2000);
  lcd.clear();
  lcd.print ("3:Run!.");
  delay(2000);
  lcd.clear();

  STATE = 7;
}
