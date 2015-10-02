//Variables go here
int pot = 0; //The pin we are going to connect to
int analogValue = 0; // This is the variable that holds the value of out potentiometer
int led = 3; //https://github.com/zevenwolf/mtec/raw/master/Breadboard%20examples/analogpot_bb.jpg
int led2 = 4;

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(led2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue = analogRead(pot);
  Serial.println(analogValue);
  

if (analogValue <= 512) {
digitalWrite(led,LOW);
  digitalWrite(led2,HIGH); 
}

else if  (analogValue > 512) {
digitalWrite(led,HIGH);
  digitalWrite(led2,LOW); 
}
 else {
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW); 
 }

}

