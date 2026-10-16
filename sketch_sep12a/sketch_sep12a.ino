#include <Thermistor.h>


 Thermistor temp(4);
void setup() 
{
 Serial.begin(9600);

}

void loop() {
  int temperature=temp.getTemp();
  Serial.println("Metodo Steinhart-Hart");
  Serial.print ("Temperatura do sensor eh:"); 
  Serial.println(temperature);
  Serial.println ("*C");
  delay(3000);
}
