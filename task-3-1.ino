int led = D7;
int lightSensor = A0;
int analogValue = 0;

void setup()
{
    pinMode(led,OUTPUT);
    pinMode(lightSensor,INPUT);
}

void loop()
{
    analogValue = analogRead(lightSensor);
    digitalWrite(led,HIGH);
    
    String light_intensity = String(analogValue);
    Particle.publish("light",light_intensity,PRIVATE);
    delay(30000);
    
    digitalWrite(led,LOW);
    delay(5000);
}