int rojo=12;
int amarillo=9;
int verde=6;

void setup(){
    pinMode(rojo, OUTPUT);               
    pinMode(verde, OUTPUT);              
    pinMode(amarillo, OUTPUT);           
} 
  
void loop() { 

    digitalWrite(verde, HIGH);          
    delay(3000);                        
    digitalWrite(verde, LOW);           
    digitalWrite(amarillo, HIGH);       
    delay(1000);                        
    digitalWrite(amarillo, LOW);        
    digitalWrite(rojo, HIGH);           
    delay(3000);                        
    digitalWrite(rojo, LOW);           
  
}
