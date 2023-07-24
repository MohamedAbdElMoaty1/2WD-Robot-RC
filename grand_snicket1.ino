
int ana1 = 3 ;
int ana2 = 5 ; 
int dig1 = 8 ;
int dig2 =  9; 
int dig3 = 10 ; 
int dig4 = 11 ;
//int pb1 = 3 ;
//int pb2 = 4 ;
int reading1 = 0 ;
int reading2 = 0 ; 
int counter1 = 0 ;
int counter2 = 0 ;

void setup()
{
  
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);

  
}

void loop()
{
reading1=digitalRead(pb1);
reading2=digitalRead(pb2);

if(reading1 == HIGH)
{
  counter1 ++ ; 
if(counter1 == 1)
{
  analogWrite(ana1,127);
  digitalWrite(6,HIGH);
  delay(250);
}
  }
else
{
  analogWrite(ana1,0);
  digitalWrite(6,LOW);
  counter1=0 ;
  delay(250);

}
 if(reading2 == HIGH)
{
  counter2 ++ ; 
if(counter2 == 1)
{
  analogWrite(ana2,127);
  digitalWrite(dig3,HIGH);
  delay(250);

}
}
else
{
  analogWrite(ana2,0);
  digitalWrite(dig3,LOW);
  counter2=0 ;
  delay(250);

}

}