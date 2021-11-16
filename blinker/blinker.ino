int LED1 = 12;
int LED2 = 10;
int delaytime = 300;
void setup() {
  // put your setup code here, to run once:
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED1,HIGH);
delay(delaytime);
digitalWrite(LED1,LOW);
delay(delaytime);
digitalWrite(LED2,HIGH);
delay(delaytime);
digitalWrite(LED2,LOW);
delay(delaytime);
}
