#define LED_PIN 11
#define LDR_PIN A7

int workingValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //9600 - 115200
  pinMode(LDR_PIN,INPUT);
  pinMode(LED_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  workingValue = analogRead(LDR_PIN);
  analogWrite(LED_PIN,map(workingValue,0,1023,255,0));
  Serial.println(workingValue);
  delay(100);
}
