// declarar donde va conectado cada switch
int sw1 = 2;  // suma (0001)
int sw2 = 3;  // resta (0010)
int sw3 = 4;  // mult (0011)
int sw4 = 5;  // div (0100)

// declarar donde se encuentran conectados los leds
int ledA = 8;  
int ledB = 9;  
int ledC = 10; 
int ledD = 11; 
int ledE = 12; 

void setup() {
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(sw3, INPUT);
  pinMode(sw4, INPUT);
  
 
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  
  
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
}

void loop() {
  // saber que estado tienen
  int s1 = digitalRead(sw1);  // suma
  int s2 = digitalRead(sw2);  // res
  int s3 = digitalRead(sw3);  // mult
  int s4 = digitalRead(sw4);  // div

  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);

  if (s1 == HIGH && s2 == LOW && s3 == LOW && s4 == LOW) {
    //sum
    digitalWrite(ledA, HIGH);  
  } 
  else if (s1 == LOW && s2 == HIGH && s3 == LOW && s4 == LOW) {
    // res
    digitalWrite(ledB, HIGH);  
  } 
  else if (s1 == HIGH && s2 == HIGH && s3 == LOW && s4 == LOW) {
    // mult
    digitalWrite(ledA, HIGH);  
    digitalWrite(ledB, HIGH);  
  } 
  else if (s1 == LOW && s2 == LOW && s3 == HIGH && s4 == LOW) {
    // div
    digitalWrite(ledC, HIGH);  
  } 
  else if (s1 == LOW && s2 == LOW && s3 == LOW && s4 == HIGH) {
    // indefinida
    digitalWrite(ledD, HIGH);  
  } 
  else {
    // indefinida (ninguna combinación válida)
    digitalWrite(ledE, HIGH);  
  }
  
  delay(10);  
}
