void setup() {
  // 
pinMode(3,OUTPUT);
pinMode(2,OUTPUT);

pinMode(4,OUTPUT);
pinMode(5,OUTPUT);

analogWrite(10,255);
analogWrite(11,235);

pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);

}
void forward()
{
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);

}

void left_spin() {
  //
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,1);

}
void right_spin()
{
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
}
void backward()
{
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);

}



void loop()
{
  int ex_right=analogRead(A0);
 
  int centre=analogRead(A1);
  
  int ex_left=analogRead(A2);
  
  if (ex_left<700 && ex_right<700)
  {
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);

  }
  if (ex_left>700 && ex_right<700)
  {
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,1);
}
if (ex_left<700 && ex_right>700)
{
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
}
forward();
}
  



