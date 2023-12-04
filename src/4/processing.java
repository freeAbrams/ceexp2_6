import processing.serial.*;
Serial port;
int currentpattern = 0;
void setup(){
    port = new Serial(this, Serial.list()[0], 9600);
}
void draw(){
    if (mousePressed){
        port.write((byte)currentpattern);
        currentpattern = (currentpattern % 5) + 1;
        delay(100);
    }
}