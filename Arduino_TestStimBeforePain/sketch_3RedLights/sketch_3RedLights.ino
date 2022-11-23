
// variables
int RED1 = 2;
int RED2 = 3;
int RED3 = 4;

int DELAY_RED = 1000;

void setup() {
  // put your setup ,code here, to run once:
  for(int i=0;i<1;i++) ;
pinMode(RED1, OUTPUT);
pinMode(RED2, OUTPUT);
pinMode(RED3, OUTPUT);

}

  // put your main code here, to run repeatedly:
void loop()
{
  red_lightmin();
  delay(DELAY_RED);
  red_lightmid();
  delay(DELAY_RED);
  red_lightmax();
  delay(DELAY_RED);
  exit(0);
}




void red_lightmin()
{
  digitalWrite(RED1, HIGH);
  digitalWrite(RED2, LOW);
  digitalWrite(RED3, LOW);
}

void red_lightmid()
{
  digitalWrite(RED1, HIGH);
  digitalWrite(RED2, HIGH);
  digitalWrite(RED3, LOW);
}

void red_lightmax()
{
  digitalWrite(RED1, HIGH);
  digitalWrite(RED2, HIGH);
  digitalWrite(RED3, HIGH);
}
