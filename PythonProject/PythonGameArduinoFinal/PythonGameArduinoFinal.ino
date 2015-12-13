#include "pitches.h"
int melody2[] = { NOTE_D3, NOTE_DS3, NOTE_C3, NOTE_B3};
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations2[] = {4, 4, 4, 4};


int melody3[] = { NOTE_D5, NOTE_DS3, NOTE_E3, NOTE_F5,NOTE_D5, NOTE_DS3, NOTE_E3, NOTE_F5,NOTE_D5, NOTE_DS3, NOTE_E3, NOTE_F5,NOTE_F5,NOTE_F5,NOTE_F5 };
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations3[] = { 8, 8, 4, 4,8, 8, 4, 4,8, 8, 4, 4,4,4,4};

int melody1[] = { NOTE_D5, NOTE_F5};
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {8, 8,};


String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete
const int tonePin = 2;
int toneNumber = -1;
int sumNumber = 0;

void setup() {
  // initialize serial:
  Serial.begin(9600);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);
  pinMode(tonePin, OUTPUT);

}


void loop() {
  // put your main code here, to run repeatedly:
  serialEvent(); //call the function
  //Serial.println(sumNumber);
  if (stringComplete) {
    inputString.trim();
    

    //when python sends message
    // if (message == "melody1")
    //play loop

  
    sumNumber = inputString.toInt();
    Serial.print("sumNumber: ");
    Serial.println(sumNumber);

    inputString = "";
    stringComplete = false;
  }

  if (sumNumber == 1) {
    Serial.println("State 1");
    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 3; thisNote++) {

      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(12, melody1[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      
    }
    noTone(12);
    sumNumber = 0;
  }

 if (sumNumber == 2) {
    Serial.println("State 2");
     for (int thisNote = 0; thisNote <4 ; thisNote++) {

      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations2[thisNote];
      tone(12, melody2[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      
    }
    sumNumber = 0;
 }

   if (sumNumber == 3) {
    Serial.println("State 3");
    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 16; thisNote++) {

      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations3[thisNote];
      tone(12, melody3[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
     
    }
     
      sumNumber = 0;
  }

  

}

void serialEvent() {
  
  while (Serial.available()) {
    
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    //inputString += inChar;
    

    if (inChar != '\n') {
      inputString += inChar;
    }

    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == '\n') {
      stringComplete = true;
      //Serial.println(inputString);
    }
  }
}
