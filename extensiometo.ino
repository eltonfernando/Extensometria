// extenciometro tcc engenharial civil prova de carga
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
Serial.println("inicio");
pinMode(12,OUTPUT);
digitalWrite(12,HIGH);
delay(500);
digitalWrite(12,LOW);
//analogReference(EXTERNAL);
}

void loop() {


   //analogReadResolution(12);
   //float s1 = 3.2*analogRead(A1)/1024;
   float s1 = 4.8*analogRead(A0)/1024;
   double s2 = 4.8*analogRead(A1)/1024;
   float s3 = 4.8*analogRead(A2)/1024;
Serial.println("s1 ## s2 ## s3");
//Serial.println("========================");
Serial.print(s1);
Serial.print(" ");
Serial.print(s2);
Serial.print(" ");
Serial.println(s3);
Serial.println("========================");
delay(2000);



  // put your main code here, to run repeatedly:

}
