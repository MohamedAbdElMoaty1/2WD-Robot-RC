int enable1 = 10 ; 
int enable2 = 11 ;
int ln1 = 6 ;
int ln2 = 7 ;
int ln3 = 8 ;
int ln4 = 9 ;
int reading = 0 ; 

void setup()
{
  Serial.begin(9600);
  pinMode(enable1,OUTPUT);
  pinMode(enable2,OUTPUT);
  pinMode(ln1,OUTPUT);
  pinMode(ln2,OUTPUT);
  pinMode(ln3,OUTPUT);
  pinMode(ln4,OUTPUT);
  
}
void loop()
{
  analogWrite(enable1,255);
  analogWrite(enable2,255);
   
  if(Serial.available()>0)
  {
  reading=Serial.read();
    switch(reading)
    {
      case'f' :

 
      digitalWrite(ln1,HIGH);
      digitalWrite(ln2,LOW);
      digitalWrite(ln3,HIGH);
      digitalWrite(ln4,LOW);
      
      Serial.print( "go forward");
      break;
      
      case'b' : 

      digitalWrite(ln1,LOW);
      digitalWrite(ln2,HIGH);
      digitalWrite(ln3,LOW);
      digitalWrite(ln4,HIGH);
      
      Serial.print( "go back");
      break;
      
      case'r' : 

      digitalWrite(ln1,HIGH);
      digitalWrite(ln2,LOW);
      digitalWrite(ln3,LOW);
      digitalWrite(ln4,LOW);
      
      Serial.print( "go right");
      break;
      
      case'l' :
 
      digitalWrite(ln1,LOW);
      digitalWrite(ln2,LOW);
      digitalWrite(ln3,HIGH);
      digitalWrite(ln4,LOW);
      
      Serial.print( "go left");
      break;
      
      case's' : 

      
      digitalWrite(ln1,LOW);
      digitalWrite(ln2,LOW);
      digitalWrite(ln3,LOW);
      digitalWrite(ln4,LOW);
      
      Serial.print( "stop");
      break;
    
    
    }
    
    
  }
  
}
