
void setup(){
  // put your setup code here, to run once:
pinMode (9,OUTPUT);
pinMode (10,OUTPUT);       //water pump
pinMode (11,OUTPUT);

pinMode (5,OUTPUT);
pinMode (7,OUTPUT);       // left gear motor
pinMode (8,OUTPUT);

pinMode (2,OUTPUT);
pinMode (3,OUTPUT);      // right gear motor
pinMode (4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int flamesensor = digitalRead (6);
int leftsensor = analogRead(A1);
    int rightsensor = analogRead(A0); 
    if (flamesensor == LOW){
      digitalWrite (5,LOW);            //stop
      digitalWrite (7,LOW);
      digitalWrite (8,LOW);  

      digitalWrite (3,LOW);
      digitalWrite (2,LOW);
      digitalWrite (4,LOW);

      digitalWrite (9,HIGH);           //water pump
      digitalWrite (10,LOW);
      digitalWrite (11,HIGH);
      delay(3000);
      digitalWrite (9,LOW);
      digitalWrite (10,LOW);
      digitalWrite (11,LOW);
      delay(1000);
      }
      else {
if (rightsensor<100 && leftsensor<100){
analogWrite(5,100);
digitalWrite (7,LOW);
digitalWrite (8,HIGH);

analogWrite(3,100);
digitalWrite (2,LOW);
digitalWrite (4,HIGH);
  }
  if (rightsensor>100 && leftsensor<100){
analogWrite(5,100);
digitalWrite (7,LOW);
digitalWrite (8,HIGH);  

digitalWrite (3,LOW);
digitalWrite (2,LOW);
digitalWrite (4,LOW);
}
if (rightsensor<100 && leftsensor>100){
digitalWrite (5,LOW);
digitalWrite (7,LOW);
digitalWrite (8,LOW); 
 
analogWrite(3,100);
digitalWrite (2,LOW);
digitalWrite (4,HIGH);
  }
}
        }
