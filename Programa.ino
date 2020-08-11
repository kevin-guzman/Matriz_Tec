const int columnas [8]={
  4,5,6,7,8,9,10,11  
};
const int filas [8]={
  //19,20,21,22,23,24,25,26
  12,13,14,15,16,17,18,19
};





int empty[8][8]        = { {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0, 0}};
int a[8][8]        = { {0, 0, 0, 1, 1, 0, 0, 0},
                      {0, 0, 1, 0, 0, 1, 0, 0},
                      {0, 0, 1, 0, 0, 1, 0, 0},
                      {0, 0, 1, 0, 0, 1, 0, 0},
                      {0, 0, 1, 1, 1, 1, 0, 0},
                      {0, 0, 1, 0, 0, 1, 0, 0},
                      {0, 0, 1, 0, 0, 1, 0, 0},
                      {0, 0, 1, 0, 0, 1, 0, 0}};
int b[8][8]        = { {0, 0, 0, 1, 1, 0, 0, 0},
                      {0, 0, 1, 0, 0, 1, 0, 0},
                      {0, 0, 1, 0, 0, 1, 0, 0},
                      {0, 0, 1, 0, 1, 0, 0, 0},
                      {0, 0, 1, 1, 1, 0, 0, 0},
                      {0, 0, 1, 0, 0, 1, 0, 0},
                      {0, 0, 1, 0, 0, 1, 0, 0},
                      {0, 0, 1, 1, 1, 1, 0, 0}};
int c[8][8]        = { {0, 0, 0, 0, 1, 1, 0, 0},
                      {0, 0, 0, 1, 0, 0, 0, 0},
                      {0, 0, 1, 0, 0, 0, 0, 0},
                      {0, 0, 1, 0, 0, 0, 0, 0},
                      {0, 0, 1, 0, 0, 0, 0, 0},
                      {0, 0, 1, 0, 0, 0, 0, 0},
                      {0, 0, 0, 1, 0, 0, 0, 0},
                      {0, 0, 0, 0, 1, 1, 0, 0}};

int combi[8][16]        = { {0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
                            {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0},
                            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0},
                            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0},
                            {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0},
                            {0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0}};

int mat [] = {a,b,c}; //{{a},{b},{c}};


int aux =0; 
char input;


//{a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};





int contador = 0, velAnimacion = 100, co=1, longitudMensaje=24;


void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(columnas[i], OUTPUT);
    pinMode(filas[i], OUTPUT);
    digitalWrite(columnas[i], HIGH);
  }
  Serial.begin(9600);
}



void loop() {


  contador++;
  String cadena = "abb";

  int mataux[8][longitudMensaje]; //longitudMensaje
  int counter=0;
  
  

    
  //Serial.println(cadena.length());
    //Serial.println(cadena[x]);El teclado broder

    if ( aux == 0){
      for (int i=0;i<8;i++){
        for(int j=0;j<24;j++){
          
          if (j< 8*(counter+1)){
            if(counter != cadena.length() ){
              if(j == 8*(counter+1) -1){
                mataux[i][j]= arrayPorLetra(cadena[counter],i-counter,j);
                delay(3);
                counter++;
              }else{
                mataux[i][j]= arrayPorLetra(cadena[counter],i-counter,j);
                delay(3);
              }
            }else{
              counter=0; 
              //Serial.print("Yaa we");
              //break;
            }
             
          }

          /*if(j<8){
            mataux[i][j]=arrayPorLetra('a', i,j); delay(2); //a[i][j];//arrayPorLetra('a', i,j);
          }else if(j<16){
            mataux[i][j]=arrayPorLetra('c', i-1,j); delay(2);//c[i-1][j];//arrayPorLetra('c', i-1,j-1);
          }else{
            mataux[i][j]=arrayPorLetra('b', i-2,j); delay(2);//b[i-2][j];//arrayPorLetra('b', i-2,j-2);
          }*/

          
        }
      }
      //aux=1;
    }
      
      if (contador <= velAnimacion*2){
       for(int s=0; s<longitudMensaje+1;s++){
           for (int i=0; i<longitudMensaje; i++){ //En este varía la i xd
            
              digitalWrite(filas[i-s], HIGH);
              for (int j=0; j<8; j++){
                  if (mataux[j][i] == 1){
                    digitalWrite(columnas[j], LOW);  
                  } 
              }
            
              delayMicroseconds(2000);
              digitalWrite(filas[i-s], LOW);
              
              for (int j=0; j<8; j++){
                digitalWrite(columnas[j], HIGH); 
              }
            
          }
          delay(15);
        }  
      }else{
        contador = 0;
      }
  
    
      
    
    
  
  //helperMat=arrayPorLetra('a');
  

  /*for (int i=0;i<8;i++){
    for(int j=0;j<longitudMensaje;j++){
      
      if(j<8){
        mataux[i][j]= arrayPorLetra('a',i,j);
      }else if(j<16) {
        mataux[i][j]=b[i-1][j-1];
      }else{
        mataux[i][j]=c[i-2][j-2];
      }
    }
  }*/

  

  //Serial.println(arrayPorLetra('a'));//sizeof(arrayPorLetra('a'))/16

  
  

  
  /*for (int f=0;f<8;f++){
    for(int c=0;c<8;c++){
      
    }
  }*/
  

  //Serial.println(sizeof(combi)/16);
  /*if (Serial.available() >0 ){
    input=Serial.read();
    if (input != '*'){
      cadena+=char(input);
      Serial.println(cadena);
      mataux[0]=input;
      
    }else{
      Serial.println(cadena.length());
      if (cadena == "a"){
        mataux[0]=a;
        dibujar(mataux[0]);
      }
    }
  }*/
  
  /*if (co<4){
    if (contador <= velAnimacion*2){
      dibujar(mat[co-1]);
    }else{
      contador = 0;
      co++;
    }
  }else{
    co=1;
  }*/
  

  /*if (contador <= velAnimacion){
    dibujar(mat[0]); 
  }
  else if (contador <= velAnimacion*2){
            dibujar(mat[1]); //enemyFrame04
          }else{
            contador = 0;
          }*/

          
}

int arrayPorLetra(char letra, int i, int j){
int empty[8][8] = { {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0}};
int a[8][8] = { {0, 0, 0, 1, 1, 0, 0, 0},
                {0, 0, 1, 0, 0, 1, 0, 0},
                {0, 0, 1, 0, 0, 1, 0, 0},
                {0, 0, 1, 0, 0, 1, 0, 0},
                {0, 0, 1, 1, 1, 1, 0, 0},
                {0, 0, 1, 0, 0, 1, 0, 0},
                {0, 0, 1, 0, 0, 1, 0, 0},
                {0, 0, 1, 0, 0, 1, 0, 0}};
int b[8][8] = { {0, 0, 0, 1, 1, 0, 0, 0},
                {0, 0, 1, 0, 0, 1, 0, 0},
                {0, 0, 1, 0, 0, 1, 0, 0},
                {0, 0, 1, 0, 1, 0, 0, 0},
                {0, 0, 1, 1, 1, 0, 0, 0},
                {0, 0, 1, 0, 0, 1, 0, 0},
                {0, 0, 1, 0, 0, 1, 0, 0},
                {0, 0, 1, 1, 1, 1, 0, 0}};
int c[8][8] = { {0, 0, 0, 0, 1, 1, 0, 0},
                {0, 0, 0, 1, 0, 0, 0, 0},
                {0, 0, 1, 0, 0, 0, 0, 0},
                {0, 0, 1, 0, 0, 0, 0, 0},
                {0, 0, 1, 0, 0, 0, 0, 0},
                {0, 0, 1, 0, 0, 0, 0, 0},
                {0, 0, 0, 1, 0, 0, 0, 0},
                {0, 0, 0, 0, 1, 1, 0, 0}};
  switch (letra){
    case 'a':
      return a[i][j];
    case 'b':
      return b[i][j];
    case 'c':
      return c[i][j];


    /*case '':
      return [i][j];*/
  }
}


/*void dibujar(int caracter[][16]){
  for(int s=0; s<8;s++){
     for (int i=0; i<16; i++){ //En este varía la i xd
      
        digitalWrite(filas[i-s], HIGH);
        for (int j=0; j<8; j++){
            if (caracter[j][i] == 1){
              digitalWrite(columnas[j], LOW);  
            } 
        }
      
        delayMicroseconds(1000);
        digitalWrite(filas[i-s], LOW);
        
        for (int j=0; j<8; j++){
          digitalWrite(columnas[j], HIGH); 
        }
      
    }
    delay(50);
  }

}*/
