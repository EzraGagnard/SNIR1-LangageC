/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

//     EXERCICE Q2-4
/*
#define LD1 PB0
#define BPUSER PC13

byte bpUserState;

void setup() {
  pinMode(LD1, OUTPUT);
  pinMode(BPUSER, INPUT);
}

void loop() {
  bpUserState = digitalRead(BPUSER);
  if (bpUserState == 1) {
    digitalWrite(LD1, HIGH);
  }
  else
  {
    digitalWrite(LD1, LOW);
  }
*/

//     EXERCICE Q2-3
/*
#define LD1 PB0
#define LD2 PB7
#define LD3 PB14

// the setup function runs once when you press reset or power the board
void setup() {
   pinMode(LD1, OUTPUT);
  pinMode(LD2, OUTPUT);
  pinMode(LD3, OUTPUT );
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LD1, HIGH);
delay(100);             
digitalWrite(LD1, LOW);

digitalWrite(LD2, HIGH);
delay(100); 
digitalWrite(LD2, LOW); 

digitalWrite(LD3, HIGH);
delay(100); 
digitalWrite(LD3, LOW);         
}
*/

//     EXERCICE Q2-7
/*
int counter;
#define LD1 PB0
#define BPUSER PC13

byte bpUserState;
byte bpUserStatePrec = 0;
void setup() {
 
  Serial.begin(9600);
  counter=0;
  pinMode(LD1, OUTPUT);
  pinMode(BPUSER, INPUT);
}

void loop() {
  bpUserState = digitalRead(BPUSER);
  if (bpUserState == 1 && bpUserStatePrec == 0) {
  Serial.println(counter);
  counter++;
     digitalWrite(LD1, HIGH);
    delay(100);
  }
  
     digitalWrite(LD1, LOW);
     bpUserStatePrec = bpUserState;
     delay(100);
  
    
  }
  */

//     AUTRES
/*
#define LD1 PB0
#define LD2 PB7
#define LD3 PB14
#define BPUSER PC13

byte bpUserState;

void setup() {
  pinMode(LD1, OUTPUT);
   pinMode(LD2, OUTPUT);
    pinMode(LD3, OUTPUT);
  pinMode(BPUSER, INPUT);
}

void loop() {
  bpUserState = digitalRead(BPUSER);
  if (bpUserState == 1) {
    digitalWrite(LD1, HIGH);
  delay(100);
  digitalWrite(LD1, LOW);
  delay(100);
  digitalWrite(LD2, HIGH);
  delay(100);
  digitalWrite(LD2, LOW);
  delay(100);
  digitalWrite(LD3, HIGH);
  delay(100);
  digitalWrite(LD3, LOW);
  delay(100);
  }
  else
  {
    digitalWrite(LD3, HIGH);
  delay(100);
  digitalWrite(LD3, LOW);
  delay(100);
  digitalWrite(LD2, HIGH);
  delay(100);
  digitalWrite(LD2, LOW);
  delay(100);
  digitalWrite(LD1, HIGH);
  delay(100);
  digitalWrite(LD1, LOW);
  delay(100);
  }
}
*/



  
