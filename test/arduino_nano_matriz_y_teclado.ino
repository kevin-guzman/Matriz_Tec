
#define ROW_1 12
#define ROW_2 13
#define ROW_3 14
#define ROW_4 15
#define ROW_5 16
#define ROW_6 17
#define ROW_7 18
#define ROW_8 19

#define COL_1 4
#define COL_2 5
#define COL_3 6
#define COL_4 7
#define COL_5 8
#define COL_6 9
#define COL_7 10
#define COL_8 11

const byte rows[] = {
  ROW_1, ROW_2, ROW_3, ROW_4, ROW_5, ROW_6, ROW_7, ROW_8
};
const byte col[] = {
  COL_1, COL_2, COL_3, COL_4, COL_5, COL_6, COL_7, COL_8
};

byte EMPTY[] = {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000};
byte A[] = {  B00000000, B00111100, B01100110, B01100110, B01111110, B01100110, B01100110, B01100110};
byte B[] = {B01111000, B01001000, B01001000, B01110000, B01001000, B01000100, B01000100, B01111100};
byte C[] = {B00000000, B00011110, B00100000, B01000000, B01000000, B01000000, B00100000, B00011110};
byte D[] = {B00000000, B00111000, B00100100, B00100010, B00100010, B00100100, B00111000, B00000000};
byte E[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00111100, B00000000};
byte F[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00100000, B00000000};
byte G[] = {B00000000, B00111110, B00100000, B00100000, B00101110, B00100010, B00111110, B00000000};
byte H[] = {B00000000, B00100100, B00100100, B00111100, B00100100, B00100100, B00100100, B00000000};
byte I[] = {B00000000, B00111000, B00010000, B00010000, B00010000, B00010000, B00111000, B00000000};
byte J[] = {B00000000, B00011100, B00001000, B00001000, B00001000, B00101000, B00111000, B00000000};
byte K[] = {B00000000, B00100100, B00101000, B00110000, B00101000, B00100100, B00100100, B00000000};
byte L[] = {B00000000, B00100000, B00100000, B00100000, B00100000, B00100000, B00111100, B00000000};
byte M[] = {B00000000, B00000000, B01000100, B10101010, B10010010, B10000010, B10000010, B00000000};
byte N[] = {B00000000, B00100010, B00110010, B00101010, B00100110, B00100010, B00000000, B00000000};
byte O[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000010, B00111100, B00000000};
byte P[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100000, B00100000, B00000000};
byte Q[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000110, B00111110, B00000001};
byte R[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100100, B00100100, B00000000};
byte S[] = {B00000000, B00111100, B00100000, B00111100, B00000100, B00000100, B00111100, B00000000};
byte T[] = {B00000000, B01111100, B00010000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte U[] = {B00000000, B01000010, B01000010, B01000010, B01000010, B00100100, B00011000, B00000000};
byte V[] = {B00000000, B00100010, B00100010, B00100010, B00010100, B00010100, B00001000, B00000000};
byte W[] = {B00000000, B10000010, B10010010, B01010100, B01010100, B00101000, B00000000, B00000000};
byte X[] = {B00000000, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B00000000};
byte Y[] = {B00000000, B01000100, B00101000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte Z[] = {B00000000, B00111100, B00000100, B00001000, B00010000, B00100000, B00111100, B00000000};

void setup()
{
  
  Serial.begin(9600);

  for (byte i = 4; i <= 21; i++)
    pinMode(i, OUTPUT);

}

String cadenaEntrada = "A B C D E F G H";

int cont = 0;
int index = 0;
int lonitudCadenaEntrada=cadenaEntrada.length();

void loop() {
  

  for (byte k = 0; k < lonitudCadenaEntrada ; k++) {
    
    Serial.println(lonitudCadenaEntrada);
    
    if (index < lonitudCadenaEntrada) {
      index++;
    } else {
      index = 0;
    }
  if (cadenaEntrada.charAt(index) == ' ') {
    letraEnPantalla(EMPTY);

    }
    else if (cadenaEntrada.charAt(index) == 'A') {
    letraEnPantalla(A);

    }
    else if (cadenaEntrada.charAt(index) == 'B') {
    letraEnPantalla(B);

    }
    else if (cadenaEntrada.charAt(index) == 'C') {
    letraEnPantalla(C);

    }
    else if (cadenaEntrada.charAt(index) == 'D') {
    letraEnPantalla(D);

    }
    else if (cadenaEntrada.charAt(index) == 'E') {
    letraEnPantalla(E);

    }
    else if (cadenaEntrada. charAt(index) == 'F') {
    letraEnPantalla(F);

    }
    else if (cadenaEntrada.charAt(index) == 'G') {
    letraEnPantalla(G);

    }
    else if (cadenaEntrada.charAt(index) == 'H') {
    letraEnPantalla(H);

    }
    else if (cadenaEntrada.charAt(index) == 'I') {
    letraEnPantalla(I);

    }
    else if (cadenaEntrada.charAt(index) == 'J') {
    letraEnPantalla(J);

    }
    else if (cadenaEntrada.charAt(index) == 'K') {
    letraEnPantalla(K);

    }
    else if (cadenaEntrada.charAt(index) == 'L') {
    letraEnPantalla(L);

    }
    else if (cadenaEntrada.charAt(index) == 'M') {
    letraEnPantalla(M);

    }
    else if (cadenaEntrada.charAt(index) == 'N') {
    letraEnPantalla(N);

    }
    else if (cadenaEntrada.charAt(index) == 'O') {
    letraEnPantalla(O);

    }
    else if (cadenaEntrada.charAt(index) == 'P') {
    letraEnPantalla(P);

    }
    else if (cadenaEntrada.charAt(index) == 'Q') {
    letraEnPantalla(Q);

    }
    else if (cadenaEntrada.charAt(index) == 'R') {
    letraEnPantalla(R);

    }
    else if (cadenaEntrada.charAt(index) == 'S') {
    letraEnPantalla(S);

    }
    else if (cadenaEntrada.charAt(index) == 'T') {
    letraEnPantalla(T);

    }
    else if (cadenaEntrada.charAt(index) == 'U') {
    letraEnPantalla(U);

    }
    else if (cadenaEntrada.charAt(index) == 'V') {
    letraEnPantalla(V);

    }
    else if (cadenaEntrada.charAt(index) == 'W') {
    letraEnPantalla(W);

    }
    else if (cadenaEntrada.charAt(index) == 'X') {
    letraEnPantalla(X);

    }
    else if (cadenaEntrada.charAt(index) == 'Y') {
    letraEnPantalla(Y);

    }
    else if (cadenaEntrada.charAt(index) == 'Z') {
    letraEnPantalla(Z);
      
    }

  }

}
void  letraEnPantalla(byte buffer1[])
{

 
  for (byte h = 12; h > 0 ; h--) {

    for (byte i = 0; i < 8; i++)       
    {
     
      digitalWrite(rows[i], HIGH);    
      for (byte j = 0; j < 8; j++)    
      {
        
        digitalWrite(col[j], (~buffer1[j] >> (h - i  )) & 0x01);

        
        delayMicroseconds(1000);
     
        digitalWrite(col[j], 1);      
      }
      digitalWrite(rows[i], LOW);   
     
    }
  }

}
