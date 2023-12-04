int SWITCHPIN = 7;
void setup(){
    Serial.begin(9600);
    pinMode(SWITCHPIN, INPUT);
}
void loop(){
    int switch_push;
    switch_push = digitalRead(SWITCHPIN);
    if (switch_push == HIGH)
    {
        Serial.println("switch pressed\r");
        delay(100);
    }
}