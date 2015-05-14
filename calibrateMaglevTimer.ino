void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  
 
  //digitalWrite(8, HIGH);
  //digitalWrite(4,HIGH);
  if(analogRead(2) > 0) {
    digitalWrite(8, HIGH);
  } {
    while(analogRead(2) == 0) {
      digitalWrite(8,HIGH);
      delay(500);
      digitalWrite(8,LOW);
      delay(500);
    }
    digitalWrite(8,HIGH);  
  }
  if(analogRead(3) > 0) {
    digitalWrite(4, HIGH);
  } else{
    while(analogRead(3) == 0) {
      digitalWrite(4,HIGH);
      delay(500);
      digitalWrite(4,LOW);
      delay(500);
    }
    digitalWrite(4,HIGH);  
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
if(analogRead(2) > 0) {
    digitalWrite(8, HIGH);
  } {
    while(analogRead(2) == 0) {
      digitalWrite(8,HIGH);
      delay(500);
      digitalWrite(8,LOW);
      delay(500);
    }
    digitalWrite(8,HIGH);  
  }
  if(analogRead(3) > 0) {
    digitalWrite(4, HIGH);
  } else{
    while(analogRead(3) == 0) {
      digitalWrite(4,HIGH);
      delay(500);
      digitalWrite(4,LOW);
      delay(500);
    }
    digitalWrite(4,HIGH);  
  }
  
}
