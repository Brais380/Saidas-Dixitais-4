/*
Practiac de dous led intermitentes e control de un rele 
Autor: Brais Rey Miron
Data: 12/12/20024
*/
// C++ code
//
int i = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH); //Encender pin 13
  delay(10000); //Espera 10 segundo(s)
  digitalWrite(13, LOW); //Apagar pin 13
  delay(4000); //Espera 4 segundo(s)
  digitalWrite(12, HIGH); //Encender pin 12
  digitalWrite(11, HIGH); //Encender pin 11
  delay(10000); //Espera 10 segundo(s)
  digitalWrite(12, LOW); //Apagar pin 12
  digitalWrite(11, LOW); //Apagar pin 11
  delay(4000); //Espera 4 segundo(s)
}
