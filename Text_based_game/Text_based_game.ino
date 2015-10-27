#include <LiquidCrystal.h>
LiquidCrystal lcd(4, 6, 10, 11, 12, 13);
//Button VARIABLES
const int PressButton1 = 7;
const int PressButton2 = 8;
const int PressButton3 = 9;

void setup(){
Serial.begin(9600);
lcd.begin(16,2);
Serial.println("It was a cold November Evening in 1982");
Serial.println("You've finished up a long day of work and have finally");
Serial.println("settled into your all too comfortable seat on the 2 line");
Serial.println("Its a short ride from Brookln College to Clark St");
Serial.println("but its been a long day so you decide to rest your eyes for a few minutes");
delay (6000);
Serial. println(".");
delay (1000);
Serial. println(".");
delay (1000);
Serial. println(".");
delay(1000);
Serial.println("'Bop bop.. Please exit the train, this is the last stop on this train'");
Serial.println("'This train is going to the storage yard, please exit the train'");
delay (1000);
Serial.println("Oh no, youve woken up to find you missed your stop and made it all the way to WilliamsBridge in th BRONX!");
delay(500);
Serial.println("Youve got to get back home to Broklynn");
Serial.println("What should we do?");

delay (2000);
lcd.print("Outcomes");
lcd.setCursor(0,1);
lcd.print("Displayed Here");
}
void loop (){ 

}
/*
void State1Train() {
//Decison 1 text INCLUDING button options
Serial.println("You hear the conductor say this is the last train for the night so there wont be another for a few hours");
Serial.println("What should we do?");

delay (2000);

Serial.println("Button 1 > Head to nearby bodega");
delay (1000);
Serial.println("Button 2 > Signal the conductor for some help");
delay (1000);
Serial.println("Button 3 > Stay on the platform and wait for the next available train");
  
if (PressButton1 = HIGH)  { //run to store
  Serial.println ("You made it to the store now lets make a purchase");
  //initiate state 2
} else if (PressButton2 = HIGH) { //flare gun
  Serial.println ("whyy did you youe a flare!?");
  delay (1000);
  Serial.println ("they know youre here..");
  delay (2000);
  lcd.print ("Death by Roving Machete Gang");
  //restart game
} else if (PressButton3 = HIGH) { //sleep there
  println //
  lcd.print("Death by pack of wolves")
  //restart game
}
//}


//{ State 2 - Bodega
void State2Bodega();{
//Decison 2 text INCLUDING button options

Serial.println("Youve made it to the Bodega!");
Serial.println("What should do you want to do?");

delay (2000);

Serial.println("Button 1 > Purchase lighter and hairspray for protection");
delay (1000);
Serial.println("Button 2 > Purchase Calling Card");
delay (1000);
Serial.println("Button 3 > Purchase some snacks");
  
/*
if (PressButton2 = HIGH)  { //Buy calling card
  println //Lets head outside
  //initiate state 3
} else if (PressButton1 = HIGH) { //Purchase lighter + hairspray 
  println //" THE CLERK THINKS YOURE A THREAT "
  lcd.print ("Death by shotgun to chest")
  //restart game
} else if (PressButton3 = HIGH) { //Get Snacks
  Serial.println ("YOU STARTLED THE CAT!")
  Serial.println ("He bit your hand")
  lcd.print("Death by exposure to T Virus")
  //restart game
}
}
//}


//{ State 3
void State3CallingCard(); {
//Decison 3 text INCLUDING button options

Serial.println("Youve made it to the Bodega!");
Serial.println("What should do you want to do?");

delay (2000);

Serial.println("Button 1 > Purchase lighter and hairspray for protection");
delay (1000);
Serial.println("Button 2 > Purchase Calling Card");
delay (1000);
Serial.println("Button 3 > Purchase some snacks");
  

/*
if (PressButton1 = HIGH)  { //Talk to cop
  Serial.println ("He needed that caling card, he appreciates your gift")
  Serial.println ("He gives you a lift to the nearest precient")
  lcd.print ("You'll be safe till morning")("Great Job!")
} else if (PressButton2 = HIGH) { //Call Gov friend of yours
  println //"THE NSA WAS LISTENING!"
  lcd.print ("Death by drone strike")
  //restart game
} else if (PressButton3 = HIGH) { //sleep there
  println //"
  lcd.print("Death by pack of wolves")
}
}
//}

*/

