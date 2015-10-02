
//buttons
int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 8;
int button5 = 9;
int button6 = 10;



const int led1 = 5, led2 = 6, led3 = 7, led4 = 11, led5 = 12, led6 = 13;      // the number of the LED pin

//initial button states
int buttonState1 = 0, buttonState2 = 0, buttonState3 = 0,
buttonState4 = 0, buttonState5 = 0, buttonState6 = 0;
void setup() {

  pinMode(led1, OUTPUT);     
  pinMode(button1, INPUT); 
  pinMode(led2, OUTPUT);     
  pinMode(button2, INPUT);
  pinMode(led3, OUTPUT);     
  pinMode(button3, INPUT); 
  pinMode(led4, OUTPUT);     
  pinMode(button4, INPUT); 
  pinMode(led5, OUTPUT);     
  pinMode(button5, INPUT); 
  pinMode(led6, OUTPUT);     
  pinMode(button6, INPUT);    
}

void loop(){
 
  buttonState1 = digitalRead(button1);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {     
    // turn LED on:    
    digitalWrite(led1, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(led1, LOW); 
  }
  
  buttonState2 = digitalRead(button2);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState2 == HIGH) {     
    // turn LED on:    
    digitalWrite(led2, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(led2, LOW); 
  }
  
  buttonState3 = digitalRead(button3);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState3 == HIGH) {     
    // turn LED on:    
    digitalWrite(led3, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(led3, LOW); 
  }
  
    
  buttonState4 = digitalRead(button4);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState4 == HIGH) {     
    // turn LED on:    
    digitalWrite(led4, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(led4, LOW); 
  }
  
    
  buttonState5 = digitalRead(button5);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState5 == HIGH) {     
    // turn LED on:    
    digitalWrite(led5, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(led5, LOW); 
  }
  
  buttonState6 = digitalRead(button6);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState6 == HIGH) {     
    // turn LED on:    
    digitalWrite(led6, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(led6, LOW); 
  }
  
  //if each player hits the same button at the same time. All led light and win.
  if(buttonState1 == HIGH && buttonState4 == HIGH){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
  }
 //if each player hits the same button at the same time. All led light and win.
  if(buttonState2 == HIGH && buttonState5 == HIGH){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH); 
 }
  //if each player hits the same button at the same time. All led light and win.
  if(buttonState3 == HIGH && buttonState6 == HIGH){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH); 
 }

}



    


