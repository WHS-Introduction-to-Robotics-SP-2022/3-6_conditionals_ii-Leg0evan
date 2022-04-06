int readPin=A0;
int red=11;
int green=10;
int blue=9;
int val;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  val=analogRead(readPin);
  if (val<10){
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }

  else if (val<146){
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
  
  else if (val<292){
    digitalWrite(red, HIGH);
    analogWrite(green, 25);
    digitalWrite(blue, LOW);
  }
  
  else if (val<438){
    digitalWrite(red, HIGH);
    analogWrite(green, 130);
    digitalWrite(blue, LOW);
  }

  else if (val<584){
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(green, HIGH);
  }
  
  else if (val<730){
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }

  else if (val<876){
    analogWrite(red, 29);
    digitalWrite(green, LOW);
    analogWrite(blue, 51);
  }
  
  else{
    analogWrite(red, 127);
    digitalWrite(green, LOW);
    analogWrite(blue, 255);
  }

}
