int IndicadorkgCO2m2 = 40;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( IndicadorkgCO2m2 < 3.5 )
  {
    Serial.print(" NO HI HA CONTAMINACIÓ!! ");
  } 


else if ( IndicadorkgCO2m2 < 6.5 )
 {
    Serial.print("NO HI HA PROU CONTAMINACIÓ!!");
  } 


else if ( IndicadorkgCO2m2 < 11.1 )
 {
    Serial.print(" CONTAMINACIÓ PER SOTA DE LA PERJUDICIAL!! ");
  } 
  
else if ( IndicadorkgCO2m2 < 17.7 )
 {
    Serial.print("CONTAMINACIÓ MITJA, COMPTE!!");
  } 

else if ( IndicadorkgCO2m2 < 38.2 )
 {
    Serial.print("CONTAMINACIÓ PROU PERJUDICIAL, COMPTE!!");
  } 
  
  else if ( IndicadorkgCO2m2 < 43.2 )
 {
    Serial.print("CONTAMINACIÓ MOLT ELEVADA, MORT!!");
  } 
  
else 
 {
    Serial.print( IndicadorkgCO2m2 >= 43.2 );
  } 

}
void loop()   // we need this to be here even though its empty
{
}
