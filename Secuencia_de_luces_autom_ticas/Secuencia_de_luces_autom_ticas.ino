/*
 Fundacion Kinal
 Centro Educativo Tecnico Laborla Kinal
 Electronica
 Grado: Quinto
 Seccion: A
 Curso: Taller de eleectronica digital y reparacion de computadoras I
 Nombre: Juan Manuel Sebastian Ixen Coy
 Carne: 2019519
 Fecha: 13/04
 */
 int PIN=2;
#define a
void setup() 
{
for(PIN;PIN<=11;PIN++)
{
  {
  pinMode(PIN,OUTPUT);
  }
}
}
void loop() {
  PIN=2;
  for(a; PIN <= 11; PIN++)
  {
    digitalWrite(PIN,HIGH);
    delay(500);
    digitalWrite(PIN,LOW);
    }
  PIN=11;
  for(a; PIN >= 2; PIN--)
  {
    digitalWrite(PIN,HIGH);
    delay(500);
    digitalWrite(PIN,LOW);
 }
}
