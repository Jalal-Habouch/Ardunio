#include <dht.h>
import processing.serial.*;
Serial mySerial;
PrintWriter output;
dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
   mySerial = new Serial( this, Serial.list()[0], 9600 );
   output = createWriter( "data.txt" );
}
void draw() {
    if (mySerial.available() > 0 ) {
         String value = mySerial.readString();
         if ( value != null ) {
              output.println( value );
         }
    }
}

void keyPressed() {
    output.flush();  // Writes the remaining data to the file
    output.close();  // Finishes the file
    exit();  // Stops the program
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(5000);
}

