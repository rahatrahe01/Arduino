int pin = 10;

void setup() {
  // put your setup code here, to run once:

  pinMode(pin , OUTPUT);


}

void loop() {
  
  tone(pin , 1000);
  delay(1000);

  noTone(10);
  delay(1000);

  // put your main code here, to run repeatedly:

}
