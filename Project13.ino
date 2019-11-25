const int pwm_1 = 2 ;  //initializing pins as pwm
const int pwm_2 = 3 ;
const int pwm_3 = 4 ;
const int pwm_4 = 5 ;
const int pwm_5 = 6 ;
const int pwm_6 = 7 ;
const int in_1 = 52 ;
const int in_2 = 50 ;
const int in_3 = 48 ;
const int in_4 = 46 ;
const int in_5 = 44 ;
const int in_11 = 53 ;
const int in_21 = 51 ;
const int in_31 = 49 ;
const int in_41 = 47 ;
const int in_51 = 45 ;
const int in_6 = 42 ;
const int in_61 = 43;
/*const int in_6 = 35 ;
const int in_7 = 36 ;
const int in_8 = 37 ;
const int in_9 = 38 ;
const int in_10 = 39 ;*/
int pot1 = A1;
int pot2 = A2;
int pot3 = A3;
int pot4 = A4;
int pot5 = A5;
int motor1 = 0;
int motor2 = 0;
int motor3 = 0;
int motor4 = 0;
int motor5 = 0;

void setup() {

  Serial.begin(9600);
  pinMode(pwm_1, OUTPUT) ;   //we have to set PWM pin as output
  pinMode(pwm_2, OUTPUT) ;
  pinMode(pwm_3, OUTPUT) ;
  pinMode(pwm_4, OUTPUT) ;
  pinMode(pwm_5, OUTPUT) ;
  pinMode(pwm_6, OUTPUT) ; 
  pinMode(in_1, OUTPUT) ; //Logic pins are also set as output
  pinMode(in_2, OUTPUT) ;
  pinMode(in_3, OUTPUT) ;
  pinMode(in_4, OUTPUT) ;
  pinMode(in_5, OUTPUT) ;
  pinMode(in_6, OUTPUT) ; 
/*  pinMode(in_6, OUTPUT) ;
  pinMode(in_7, OUTPUT) ;
  pinMode(in_8, OUTPUT) ;
  pinMode(in_9, OUTPUT) ;
  pinMode(in_10, OUTPUT) ;*/
//  pinMode(pot1, OUTPUT);
 
}


void loop()
{

int motor1 = analogRead(pot1);
          int motor2 = analogRead(pot2);
          int motor3 = analogRead(pot3);
          int motor4 = analogRead(pot4);
          int motor5 = analogRead(pot5);

          float digital_1 = map(motor1, 0, 1023, 0, 255);
          float digital_2 = map(motor2, 0, 1023, 0, 255);
          float digital_3 = map(motor3, 0, 1023, 0, 255);
          float digital_4 = map(motor4, 0, 1023, 0, 255);
          float digital_5 = map(motor5, 0, 1023, 0, 255);

      /*    Serial.println(motor1);
          Serial.println(motor2);
          Serial.println(motor3);
          Serial.println(motor4);
          Serial.println(motor5);   */
          Serial.print("M1= ");
          Serial.println(digital_1);
          Serial.print("M2= ");
          Serial.println(digital_2);
          Serial.print("M3= ");
          Serial.println(digital_3);
          Serial.print("M4= ");
          Serial.println(digital_4);
          Serial.print("M5= ");
          Serial.println(digital_5);
          Serial.println("--------------");
delay(2000);


////////////////////////////////////////////R


while((digital_5)>= 99)
  {
     
     digitalWrite(in_5,LOW) ;      //For motor 5 C(till 0)
     digitalWrite(in_51,HIGH) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

while((digital_3)>= 55)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 down
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,150) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(2000);

 Serial.println("-------RRRRRRRRRRRRRRRRRRR-------");

while((digital_4)<= 130)
  {
     
     digitalWrite(in_4,LOW) ;      //For motor 4 up
     digitalWrite(in_41,HIGH) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(1000);
 
/////////////////////////////////////////////////O

    while((digital_4)>= 125)
  {
     
     digitalWrite(in_4,HIGH) ;      //For motor 4 down
     digitalWrite(in_41,LOW) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);

while((digital_5)<= 100)
  {
     
     digitalWrite(in_5,HIGH) ;      //For motor 5 AC(till 0)
     digitalWrite(in_51,LOW) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);
  } 
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);
   

 while((digital_3)<= 57)
  {
     
     digitalWrite(in_3,LOW) ;      //For motor 3 UP
     digitalWrite(in_31,HIGH) ;
     analogWrite(pwm_3,220) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);
 

while((digital_5)>= 99)
  {
     
     digitalWrite(in_5,LOW) ;      //For motor 5 C(till 0)
     digitalWrite(in_51,HIGH) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

while((digital_3)>= 55)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 down
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,150) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(2000);

Serial.println("-------OOOOOOOOOOOOOOOOOO-------");


/////////////////////////////////////////////////B

while((digital_4)<= 130)
  {
     
     digitalWrite(in_4,LOW) ;      //For motor 4 up
     digitalWrite(in_41,HIGH) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(1000);

 

while((digital_3)<= 57)
  {
     
     digitalWrite(in_3,LOW) ;      //For motor 3 UP
     digitalWrite(in_31,HIGH) ;
     analogWrite(pwm_3,220) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);

while((digital_4)>= 125)
  {
     
     digitalWrite(in_4,HIGH) ;      //For motor 4 down
     digitalWrite(in_41,LOW) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);
 
while((digital_3)>= 55)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 down
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,150) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);

while((digital_5)<= 101)
  {
     
     digitalWrite(in_5,HIGH) ;      //For motor 5 AC(till 0)
     digitalWrite(in_51,LOW) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);
  } 
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);
   

 while((digital_3)<= 57)
  {
     
     digitalWrite(in_3,LOW) ;      //For motor 3 UP
     digitalWrite(in_31,HIGH) ;
     analogWrite(pwm_3,220) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);
 

while((digital_5)>= 96)
  {
     
     digitalWrite(in_5,LOW) ;      //For motor 5 C(till 0)
     digitalWrite(in_51,HIGH) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(2000);

while((digital_4)<= 130)
  {
     
     digitalWrite(in_4,LOW) ;      //For motor 4 up
     digitalWrite(in_41,HIGH) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);

Serial.println("-------BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB-------");


////////////////////////////////////////////////O

while((digital_3)>= 55)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 down
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,150) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);

 while((digital_4)>= 125)
  {
     
     digitalWrite(in_4,HIGH) ;      //For motor 4 down
     digitalWrite(in_41,LOW) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);

while((digital_5)<= 100)
  {
     
     digitalWrite(in_5,HIGH) ;      //For motor 5 AC(till 0)
     digitalWrite(in_51,LOW) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);
  } 
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);
   

 while((digital_3)<= 57)
  {
     
     digitalWrite(in_3,LOW) ;      //For motor 3 UP
     digitalWrite(in_31,HIGH) ;
     analogWrite(pwm_3,220) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);
 

while((digital_5)>= 99)
  {
     
     digitalWrite(in_5,LOW) ;      //For motor 5 C(till 0)
     digitalWrite(in_51,HIGH) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

while((digital_3)>= 55)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 down
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,150) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(2000);

Serial.println("-------OOOOOOOOOOOOOOOOOO-------");

while((digital_4)>= 125)
  {
     
     digitalWrite(in_4,HIGH) ;      //For motor 4 down
     digitalWrite(in_41,LOW) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);   

while((digital_5)<= 102)
  {
     
     digitalWrite(in_5,HIGH) ;      //For motor 5 AC(till 0)
     digitalWrite(in_51,LOW) ;
     analogWrite(pwm_5,150) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);
  } 
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);
   
while((digital_3)>= 55)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 down
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,150) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);

while((digital_5)>= 99)
  {
     
     digitalWrite(in_5,LOW) ;      //For motor 5 C(till 0)
     digitalWrite(in_51,HIGH) ;
     analogWrite(pwm_5,150) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);


 while((digital_3)<= 57)
  {
     
     digitalWrite(in_3,LOW) ;      //For motor 3 UP
     digitalWrite(in_31,HIGH) ;
     analogWrite(pwm_3,220) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(2000);

 Serial.println("-------OOOOOOOOOOOOOOOOOO-------");
 

/////////////////////////////////////////////////T

while((digital_4)<= 130)
  {
     
     digitalWrite(in_4,LOW) ;      //For motor 4 up
     digitalWrite(in_41,HIGH) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(1000);

 while((digital_4)>= 125)
  {
     
     digitalWrite(in_4,HIGH) ;      //For motor 4 down
     digitalWrite(in_41,LOW) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);   

 while((digital_3)>= 52)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 down
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,150) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);

while((digital_4)<= 130)
  {
     
     digitalWrite(in_4,LOW) ;      //For motor 4 up
     digitalWrite(in_41,HIGH) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(1000);

while((digital_3)<= 56)
  {
     
     digitalWrite(in_3,LOW) ;      //For motor 3 UP
     digitalWrite(in_31,HIGH) ;
     analogWrite(pwm_3,220) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);

 while((digital_5)>= 95)
  {
     
     digitalWrite(in_5,LOW) ;      //For motor 5 C(till 0)
     digitalWrite(in_51,HIGH) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

 while((digital_4)>= 125)
  {
     
     digitalWrite(in_4,HIGH) ;      //For motor 4 down
     digitalWrite(in_41,LOW) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);

while((digital_5)<= 100)
  {
     
     digitalWrite(in_5,HIGH) ;      //For motor 5 AC(till 0)
     digitalWrite(in_51,LOW) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);
  } 
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);
   

while((digital_4)<= 130)
  {
     
     digitalWrite(in_4,LOW) ;      //For motor 4 up
     digitalWrite(in_41,HIGH) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(1000);
 
    
Serial.println("-------TTTTTTTTTTTTTTTTTTTTTTTTTTT-------");


while((digital_4)>= 125)
  {
     
     digitalWrite(in_4,HIGH) ;      //For motor 4 down
     digitalWrite(in_41,LOW) ;
     analogWrite(pwm_4,150) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);


////////////////////////////////////////////////A

while((digital_3)<= 61)
  {
     
     digitalWrite(in_3,LOW) ;      //For motor 3 UP
     digitalWrite(in_31,HIGH) ;
     analogWrite(pwm_3,220) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);
 
while((digital_5)>= 100)
  {
     
     digitalWrite(in_5,LOW) ;      //For motor 5 C(till 0)
     digitalWrite(in_51,HIGH) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

   while((digital_3)>= 56)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 DOWN
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,220) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);

while((digital_5)<= 100)
  {
     
     digitalWrite(in_5,HIGH) ;      //For motor 5 AC
     digitalWrite(in_51,LOW) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

   while((digital_4)<= 140)
  {
     
     digitalWrite(in_4,LOW) ;      //For motor 4 up
     digitalWrite(in_41,HIGH) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(1000);

Serial.println("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");


////////////////////////////////////////////////R

while((digital_4)>= 128)
  {
     
     digitalWrite(in_4,HIGH) ;      //For motor 4 down
     digitalWrite(in_41,LOW) ;
     analogWrite(pwm_4,150) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);

while((digital_5)>= 98)
  {
     
     digitalWrite(in_5,LOW) ;      //For motor 5 C(till 0)
     digitalWrite(in_51,HIGH) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

while((digital_3)>= 48)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 down
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,150) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(2000);

 Serial.println("-------RRRRRRRRRRRRRRRRRRR-------");

 ////////////////////////////////////////////////m

while((digital_4)<= 130)
  {
     
     digitalWrite(in_4,LOW) ;      //For motor 4 up
     digitalWrite(in_41,HIGH) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(1000);

 while((digital_3)<= 59)
  {
     
     digitalWrite(in_3,LOW) ;      //For motor 3 UP
     digitalWrite(in_31,HIGH) ;
     analogWrite(pwm_3,220) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);

while((digital_5)<= 100)
  {
     
     digitalWrite(in_5,HIGH) ;      //For motor 5 AC
     digitalWrite(in_51,LOW) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

   
while((digital_4)>= 120)
  {
     
     digitalWrite(in_4,HIGH) ;      //For motor 4 down
     digitalWrite(in_41,LOW) ;
     analogWrite(pwm_4,150) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);




while((digital_5)>= 98)
  {
     
     digitalWrite(in_5,LOW) ;      //For motor 5 C(till 0)
     digitalWrite(in_51,HIGH) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

while((digital_3)>= 58)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 down
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,150) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(2000);

while((digital_5)<= 100)
  {
     
     digitalWrite(in_5,HIGH) ;      //For motor 5 AC
     digitalWrite(in_51,LOW) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);
 
while((digital_4)<= 130)
  {
     
     digitalWrite(in_4,LOW) ;      //For motor 4 up
     digitalWrite(in_41,HIGH) ;
     analogWrite(pwm_4,235) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(1000);

  while((digital_3)<= 59)
  {
     
     digitalWrite(in_3,LOW) ;      //For motor 3 UP
     digitalWrite(in_31,HIGH) ;
     analogWrite(pwm_3,220) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(1000);


while((digital_5)>= 98)
  {
     
     digitalWrite(in_5,LOW) ;      //For motor 5 C(till 0)
     digitalWrite(in_51,HIGH) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

while((digital_4)>= 120)
  {
     
     digitalWrite(in_4,HIGH) ;      //For motor 4 down
     digitalWrite(in_41,LOW) ;
     analogWrite(pwm_4,150) ;
     Serial.print("M4= ");
     Serial.println(digital_4);
     Serial.println("--------------");
     motor4 = analogRead(pot4);
     digital_4 = map(motor4, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_41,HIGH) ;
 delay(2000);


   while((digital_3)>= 57)
  {
     
     digitalWrite(in_3,HIGH) ;      //For motor 3 down
     digitalWrite(in_31,LOW) ;
     analogWrite(pwm_3,150) ;
     Serial.print("M3= ");
     Serial.println(digital_3);
     Serial.println("--------------");
     motor3 = analogRead(pot3);
     digital_3 = map(motor3, 0, 1023, 0, 255);
  }
 
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_31,HIGH) ;
 delay(2000);

while((digital_5)<= 100)
  {
     
     digitalWrite(in_5,HIGH) ;      //For motor 5 AC
     digitalWrite(in_51,LOW) ;
     analogWrite(pwm_5,200) ;
     Serial.print("M5= ");
     Serial.println(digital_5);
     Serial.println("--------------");
     motor5 = analogRead(pot5);
     digital_5 = map(motor5, 0, 1023, 0, 255);

  }
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_51,HIGH) ;
   delay(1000);

   Serial.println("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");

}
