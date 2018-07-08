int switchState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:





if(switchState == 0){
  while ( digitalRead(4) == HIGH ){       
        }
  
  for(int i=1;i<=3;i++){
    digitalWrite(i,HIGH);
    delay(250);
  }
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
   delay(250);
  
   if ( digitalRead(4) == HIGH ){
    (switchState = 1);
   }
   else{
    (switchState = 0);
   }
}
else{
  while ( digitalRead(4) == HIGH ){       
        }

  for(int i=3;i>=1;i--){
    digitalWrite(i,HIGH);
    delay(250);
  }
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
   delay(250);

   if ( digitalRead(4) == HIGH ){
    (switchState = 0);
   }
   else{
    (switchState = 1);
   }
}







}
