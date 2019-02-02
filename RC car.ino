char command;

void setup() 
{       
  Serial.begin(9600);  //Set the baud rate to your Bluetooth module.
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
}

void loop()
{
  if(Serial.available() > 0)
  { 
    command = Serial.read(); 
   // Stop(); //initialize with motors stoped
    //Change pin mode only if new command is different from previous.   
    //Serial.println(command);
    switch(command)
    {
    case 'F':
      forward();
      break ;
      
    case 'B':
       back();
      break;
      
    case 'L':  
      left();
      break;
      
    case 'R':
      right();
      break;
      
    case 'S':
      Stop();
      break;
    }
  } 
}

void forward()
{
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  void loop(){
  buttonState = digitalRead(4,HIGH);
  buttonState = digitalRead(5,LOW);
  buttonState = digitalRead(6,HIGH);
  buttonState = digitalRead(7,LOW);
  if(buttonState == HIGH){
    digitalWrite(ledPin,HIGH);
  }
  digitalWrite(ledPin,LOW);
}

void back()
{
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
void loop(){
  buttonState = digitalRead(4,HIGH);
  buttonState = digitalRead(5,LOW);
  buttonState = digitalRead(6,HIGH);
  buttonState = digitalRead(7,LOW);
  if(buttonState == HIGH){
    digitalWrite(ledPin,HIGH);
  }
  digitalWrite(ledPin,LOW);
  }

void left()
{
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  void loop(){
  buttonState = digitalRead(4,HIGH);
  buttonState = digitalRead(5,LOW);
  buttonState = digitalRead(6,HIGH);
  buttonState = digitalRead(7,LOW);
  if(buttonState == HIGH){
    digitalWrite(ledPin,HIGH);
  }
  digitalWrite(ledPin,LOW);
}

void right()
{
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  void loop(){
  buttonState = digitalRead(4,HIGH);
  buttonState = digitalRead(5,LOW);
  buttonState = digitalRead(6,HIGH);
  buttonState = digitalRead(7,LOW);
  if(buttonState == HIGH){
    digitalWrite(ledPin,HIGH);
  }
  digitalWrite(ledPin,LOW);
}

void Stop()
{
   digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  void loop(){
  buttonState = digitalRead(4,HIGH);
  buttonState = digitalRead(5,LOW);
  buttonState = digitalRead(6,HIGH);
  buttonState = digitalRead(7,LOW);
  if(buttonState == HIGH){
    digitalWrite(ledPin,HIGH);
  }
  digitalWrite(ledPin,LOW);
}
}
