int in1=23;
int in2=25;
int in3=27;
int in4=29;



int led=47;


char data=0;









void setup() {
  Serial.begin(9600);
 
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

}
void loop() {


  if (Serial.available()>0)
  {
    data =Serial.read();
  
   Serial.println(data);}
switch (data)
{
  case 'U': {
digitalWrite(in1,HIGH);
digitalWrite(in2,HIGH);

digitalWrite(in3,LOW);
digitalWrite(in4,LOW); break;

}
  case 'D' : {
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);

digitalWrite(in3,HIGH);
digitalWrite(in4,HIGH); break;
}

  case 'R' :  {
 digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);

digitalWrite(in3,LOW);
digitalWrite(in4,LOW); break;
}

 case 'L' : {
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);

digitalWrite(in3,LOW);
digitalWrite(in4,LOW); break;
}
 case 'S' : {
 digitalWrite(in1,LOW);
digitalWrite(in2,LOW);

digitalWrite(in3,LOW);
digitalWrite(in4,LOW);   break;
  }
  
case 'O' : {    digitalWrite(led,HIGH); break; }

case 'N' : {  digitalWrite(led,LOW);   break; }

}




  
  delay(5);
  
}

