int pin1 = 9;
int pin2 = 13;
int pin3 = 11;
int pin4 = 4;
int pin5 = 2;


void setup() {
  // put your setup code here, to run once:
  pinMode( pin1,OUTPUT);
  pinMode( pin2,OUTPUT);
  pinMode( pin3,OUTPUT);
  pinMode( pin4,OUTPUT);
  pinMode( pin5,OUTPUT);

}    

void loop() {

  digitalWrite(pin1, HIGH);
  delay(100);
  digitalWrite(pin1, LOW);
  delay(100);
  digitalWrite(pin2, HIGH);          
  delay(100);
  digitalWrite(pin2, LOW);
  delay(100);

   digitalWrite(pin3, HIGH);
  delay(100);                
  digitalWrite(pin3, LOW);
  delay(100);

   digitalWrite(pin4, HIGH);
  delay(100);
  digitalWrite(pin4, LOW);
  delay(100);

     digitalWrite(pin5, HIGH);
  delay(100);
  digitalWrite(pin5, LOW);
  delay(100);

  // put your main code here, to run repeatedly:

}
