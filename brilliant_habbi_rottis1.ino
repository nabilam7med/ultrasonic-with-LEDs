int echo=8;
int trig=9;
int led1=7;
int led2=6;
int led3=5;
int led4=4;
int led5=3;
int led6=2;
int d,t,i;
void setup(){
 for(i=2;i<=7;i++){
    pinMode(i,OUTPUT);}
  pinMode(9,OUTPUT);
  pinMode(8,INPUT);
}
void loop(){
  digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
t = pulseIn(echo, HIGH);
d = (t/2) * 0.0343;
  if(d<30){
    digitalWrite(7, HIGH);}
  else if(d>=30&&d<80){
 digitalWrite(7, HIGH);
 digitalWrite(6, HIGH); }
   else if(d>=80&&d<140){
     digitalWrite(7, HIGH);
 digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);}
   else if(d>=140&&d<195){
     digitalWrite(7, HIGH);
 digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);}
  else if(d>=195&&d<230){
     digitalWrite(7, HIGH);
 digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  }
 else if(d>=230&&d<300){
     digitalWrite(7, HIGH);
 digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
 digitalWrite(2, HIGH); } 
  else {
    digitalWrite(7, LOW);
 digitalWrite(6,LOW);
     digitalWrite(5,LOW);
     digitalWrite(4,LOW);
  digitalWrite(3,LOW);
 digitalWrite(2,LOW); } 
    
  
}
  
  
  
