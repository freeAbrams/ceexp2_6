import processing.serial.*;
Serial port;
void setup(){
    port = new Serial(this, Serial.list()[0], 9600);
}
void draw(){

}
void mousePressed(){
    port.write('H');
}
void mouseReleased(){
    port.write('L');
}