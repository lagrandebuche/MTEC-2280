

int STATE = 0;

boolean pressing1 = false;
boolean pressing2 = false;
boolean pressing3 = false;

boolean typeStart = false;
boolean enterSelection = false;

String inputString = "";
boolean stringComplete = false;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

 STATE = 0;
}

void loop() {

 
 

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

  if (inputString.equals("1")) { 
      //Serial.print("1 has been pressed");
      
      Serial.println ("OUPS! Baseball bat in your face");
      
      delay(2000);
      
      STATE = 0;
    }

    else if (inputString.equals("2"))  {
      
      Serial.println ("You are safe for now");
      
   
      delay(2000);
    
    
      STATE = 2;
    }


    else if (inputString.equals("3")) { 
      
      Serial.println ("killed in your sleep");
      
      delay(2000);
     
      STATE = 0;
    }


  }

  if (STATE == 7) {
    if (inputString.equals("1")) {

      
   
      Serial.println ("ate by rats");
      delay(2000);
      
      STATE = 0;
    }

    if (inputString.equals("2")) {


      Serial.println ("Stabed 48 times");
      delay(2000);
      STATE = 0;
    }

    if (inputString.equals("3")) {

    
      Serial.println ("Got home safe");
      delay(2000);
      STATE = 3;
    }
  }
  Serial.println(STATE);
}

void story() {

  Serial.println("November,1982. You wake up in the subway in the Bronx.");
 
  delay(2000);


  STATE = 1;
}

void question1() {

  Serial.println ("What do you want to do?");
 
  Serial.print ("1:Go left. 2:Go right. 3:sleep in the station");
  
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
