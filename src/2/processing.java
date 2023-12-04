import processing.serial.*;
Serial port;
void setup(){
    port = new Serial(this, Serial.list()[0], 9600);
}
void draw(){
    string myString = port.readStringUntil('\r');
    println(myString);
    delay(100);
}