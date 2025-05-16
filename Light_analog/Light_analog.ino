int pin = 9;



void setup() {
  // put your setup code here, to run once:

}

void loop() {

  analogWrite(pin , 0);
  delay(1000);

  analogWrite(pin , 64);
  delay(1000);

  analogWrite(pin , 128);
  delay(1000);

  analogWrite(pin , 191);
  delay(1000); 

  analogWrite(pin , 255);
  delay(1000);

   analogWrite(pin , 191);
  delay(1000);

   analogWrite(pin , 128);
  delay(1000); 

  analogWrite(pin , 64);
  delay(1000);




  // put your main code here, to run repeatedly:

}
