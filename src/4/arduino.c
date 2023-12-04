void setup(){
    Serial.begin(9600);
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(8, OUTPUT);
}
void loop(){
    if (Serial.available() > 0)
    {
        int pattern = Serial.parseInt();
        execute(pattern);
    }
}
void execute(int pattern){
    switch (pattern)
    {
        case 1:
        while(Serial.available() == 0)
        {
            digitalWrite(13, HIGH);
            digitalWrite(12, LOW);
            digitalWrite(11, LOW);
            digitalWrite(10, LOW);
            digitalWrite(9, HIGH);
            digitalWrite(8, LOW);
            delay(3);
            digitalWrite(13, LOW);
            digitalWrite(12, HIGH);
            digitalWrite(11, LOW);
            digitalWrite(10, HIGH);
            digitalWrite(9, LOW);
            digitalWrite(8, HIGH);
            delay(3);
            digitalWrite(13, LOW);
            digitalWrite(12, LOW);
            digitalWrite(11, HIGH);
            digitalWrite(10, LOW);
            digitalWrite(9, HIGH);
            digitalWrite(8, LOW);
            delay(3);
            if (Serial.available() > 0) break;
        }
        break;
        case 2:
        while (Serial.available() == 0)
        {
            digitalWrite(13, HIGH);
            digitalWrite(12, LOW);
            digitalWrite(11, LOW);
            digitalWrite(10, LOW);
            digitalWrite(9, LOW);
            digitalWrite(8, LOW);
            delay(3);
            digitalWrite(13, LOW);
            digitalWrite(12, HIGH);
            digitalWrite(11, LOW);
            digitalWrite(10, LOW);
            digitalWrite(9, HIGH);
            digitalWrite(8, HIGH);
            delay(3);
            digitalWrite(13, LOW);
            digitalWrite(12, LOW);
            digitalWrite(11, HIGH);
            digitalWrite(10, LOW);
            digitalWrite(9, LOW);
            digitalWrite(8, LOW);
            delay(3);
            if (Serial.available() > 0) break;
        }
        break;
        case 3:
        while (Serial.available() == 0)
        {
            digitalWrite(13, HIGH);
            digitalWrite(12, LOW);
            digitalWrite(11, LOW);
            digitalWrite(10, LOW);
            digitalWrite(9, LOW);
            digitalWrite(8, LOW);
            if (Serial.available() > 0) break;
        }
        break;
        case 4:
        while (Serial.available() == 0)
        {
            digitalWrite(13, LOW);
            digitalWrite(12, HIGH);
            digitalWrite(11, LOW);
            digitalWrite(10, LOW);
            digitalWrite(9, LOW);
            digitalWrite(8, LOW);
            if (Serial.available() > 0) break;
        }
        break;
        case 5:
        while (Serial.available() == 0)
        {
            digitalWrite(13, LOW);
            digitalWrite(12, LOW);
            digitalWrite(11, HIGH);
            digitalWrite(10, LOW);
            digitalWrite(9, LOW);
            digitalWrite(8, LOW);
            if (Serial.available() > 0) break;
        }
        break;
        default:
        while (Serial.available() == 0)
        {
            digitalWrite(13, LOW);
            digitalWrite(12, LOW);
            digitalWrite(11, LOW);
            digitalWrite(10, LOW);
            digitalWrite(9, LOW);
            digitalWrite(8, LOW);
            if (Serial.available() > 0) break;
        }
        break;        
    }
}