unsigned long deltatime;
unsigned long previousMillis;
int PIN[] = {A0,A1,A2,A3,A4,A5};
int seconds = 1;

void setup() {
  Serial.begin(9600);
  deltatime = 1000*seconds;
  previousMillis = 0;
}

void loop() {
  int IN[] = {0,0,0,0,0,0};
  if (millis() - previousMillis >= deltatime)
  {
    previousMillis = millis();
    for (int i = 0; i < 1; i++)
    {
      IN[i] = analogRead(PIN[i]);
      float out = (77.2-0.0934*IN[i]);
      Serial.print(out);
      if (i == 5)
      {
        Serial.println(" ");
        Serial.flush();
        break;
      }
      //Serial.print(",");
    }
    disp 
  }
}
