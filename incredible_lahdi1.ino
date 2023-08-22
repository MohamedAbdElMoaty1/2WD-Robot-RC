byte en[2]={5,6};
//byte in[4]={7,8,9,10};
byte in[4]={10,9,8,7};
byte move[3]={
0b01010, //forward 
0b00000, //stop 
0b00101, //back 
};
byte y=0;
void setup()
{
  for(byte i=5;i<=11;i++)pinMode(i,OUTPUT);
  analogWrite(en[0],255);
  analogWrite(en[1],255);
}


void loop()
{
  for(byte x=0;x<=2;x++){
  for(byte y=0;y<=3;y++){
   digitalWrite(in[y],move[x]&1<<y);
  }
if(x==1)
{
delay(500);
}
else
{
delay(1000);
}
  }
}