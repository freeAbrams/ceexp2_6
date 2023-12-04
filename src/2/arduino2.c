int SWITCHPIN1 = 7;
int SWITCHPIN2 = 8;
void setup(){
    Serial.begin(9600);
    pinMode(SWITCHPIN1, INPUT);
    pinMode(SWITCHPIN2, INPUT);
}
void loop(){
    int switch_push1;
    int switch_push2;
    switch_push1 = digitalRead(SWITCHPIN1);
    switch_push2 = digitalRead(SWITCHPIN2);
    if (switch_push1 == HIGH)
    {
        if (switch_push2 == HIGH)
        {
            Serial.println("switch1 and switch2 pressed\r");
            delay(100);
        }
        else
        {
            Serial.println("switch1 pressed\r");
            delay(100);
        }
    }
    else
    {
        if (switch_push2 == HIGH)
        {
            Serial.println("switch2 pressed\r");
            delay(100);
        }
    }    
}