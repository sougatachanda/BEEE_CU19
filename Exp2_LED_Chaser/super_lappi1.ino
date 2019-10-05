void setup()
{
 for(int i=3;i<8;i++)
 {
   pinMode(i,OUTPUT);
 } 
}

void loop()
{
 for(int i=3;i<8;i++)
 {
   digitalWrite(i,HIGH);
   delay(100);
   digitalWrite(i,LOW);
   delay(100);
 } 
}