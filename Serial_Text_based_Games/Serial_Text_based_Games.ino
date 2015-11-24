

int STATE = 0;


boolean enterSelection = false;
String inputString = "";
boolean stringComplete = false;
int selection = -1;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  STATE = 0;
}

void loop() {


  if (stringComplete == true) {
    stringComplete = false;
    selection = inputString.toInt();
    inputString = "";
Serial.println (selection);
Serial.println(STATE);
  }

  if (STATE == 0) {
    story();
  }
  if (STATE == 1) {
    question1();
  }
  if (STATE == 2) {

    question2();
  }
  if (STATE == 3) {

    Serial.println("You Win");
    delay(3000);
    STATE = 0;
  }

  if (STATE == 6) {

    if (selection == 1) {
      selection = -1;
      Serial.println ("OUPS! Baseball bat in your face");

      delay(2000);

      STATE = 0;
    }

    else if (selection == 2) {
      selection = -1;

      Serial.println ("You are safe for now");

      delay(2000);

      STATE = 2;
    }


    else if (selection == 2) {
      selection = -1;

      Serial.println ("killed in your sleep");

      delay(2000);

      STATE = 0;
    }


  }

  if (STATE == 7) {
    if (selection == 1) {
      selection = -1;
      Serial.println ("ate by rats");
      delay(2000);

      STATE = 0;
    }

    if (selection == 2) {
      selection = -1; 
      Serial.println ("Stabed 48 times");
        delay(2000);
        STATE = 0;
      }

      if (selection == 3) {
        selection = -1;


        Serial.println ("Got home safe");
        delay(2000);
        STATE = 3;
      }
    
   // Serial.println(STATE);
  }
}

void story() {

  Serial.println("November,1982. You wake up in the subway in the Bronx.");

  delay(2000);


  STATE = 1;
}

void question1() {

  Serial.println ("What do you want to do?");

  Serial.print ("1:Go left");

  Serial.print ("2:Go right");

  Serial.print ("3:sleep in the station");

  delay(2000);

  STATE = 6;

}


void question2() {

  Serial.println ("What do you want to do next?");

  Serial.println ("1:Sleep on a bench");

  Serial.println ("2:Grab a taxi");

  Serial.println ("3:Run!.");
  delay(2000);

  STATE = 7;
}

void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();

    if (inChar != '\n') {
      inputString += inChar;
    }

    if (inChar == '\n') {
      stringComplete = true;
      
    }
  }

}







