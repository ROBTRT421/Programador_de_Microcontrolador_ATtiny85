# Video: https://youtube.com/shorts/JILIO7g21a0

# Prologo
- Este es un "Programador de Microcontroladores ATtiny85" utilizando como base el ecosistema Arduino, la placa 
ArduinoUNO como "Programadora" y su IDE, para la configuracion de la misma, todo esto entre otros componentes minimos
para la correcta elaboracion casera pero eficiente de nuestro "Programador de Microcontroladores"

# Tutorial
1. Obtenga las piezas, instale [Arduino IDE] (https://www.arduino.cc/en/Main/Software), instale los controladores para Arduino (igual funciona si tiene un clon de Arduino Y está utilizando Windows)
2. Configure la placa ArduinoUNO como un programador ArduinoISP-AVR con la siguiente ruta "Archivo > Ejemplos > Arduino ISP" Seleccionas y cargas el programa en tu placa ArduinoUNO

   2.1. Abre ArduinoIDE
   ![Step1]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step.1_Open%20Arduino.png "Open IDE")

   2.2. Pincha en Archivo
   ![Step2]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step.2_Archivo.png "Archivo")

   2.3. Pincha en Ejemplos
   ![Step3]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step.3_Ejemplos.png "Ejemplos")

   2.4. Selecciona Arduino ISP
   ![Step4]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step.4_ArduinoISP.png "ArduinoISP")

   2.5. Conecta tu Placa ArduinoUNO y Carga el codigo
   ![Step5]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step.5_Conecta_y_Carga.png "Conecta y Carga")


3. Procedemos a crear la base de nuestro microcontrolador, la cual conectaremos con nuestra placa programadora, para eso tomaremos nuestra placa fenolica de 8x20, el socket de 8 pines, nuestro led rojo, la resistencia asi como el capacitor y con la ayuda de jumpers haremos las conexiones debidas, tal cual se muestran en la imagen

![Placa Frontal]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Placa_Grabadora.png "PlacaFrontal")
![Placa Reverso]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Trasera.jpg "PlacaReverso")


4. Paso I M P O R T A N T E una vez creada nuestra placa y teniendo nuestro ArduinoUNO ya configurado como programadorISP tendremos que instalar el gestor de tarjetas ATtiny, ya que de no hacerlo nunca encontraremos las librerias necesarias para cargar, programar o configurar nuestro Microcontrolador, esto lo haremos con la siguiente ruta, una vez iniciado ArduinoIDE "Archivo > Preferencias > URLs adicionales de gestor de placas" y en el apartado copiar y pegar el siguiente URL > https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json <, una vez echo esto, ahora si podras encontrar el gestor de placas tal y como se muestra en las imagenes ilustrativas. 
   4.1 Archivo
      ![Archivo]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step.2_Archivo.png "Archivo")

   4.2 Preferencias
      ![Preferencias]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step2_Preferencias.png "Preferenciaas")

   4.3 URLs
      ![URLs]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step3_URLS.png "URLs")

   4.4 Introduce URL
      ![PegaURL]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step4_IntroduceURL.png "PegaURL")

   4.5 Board ATtiny
      ![BoardATtiny]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/BoardATtiny.png "BoardATtiny")



5. A trabajar, ya realizados los pasos anteriores con exito, procederemos a conectar todo, nuestro Microcontrolador a la base programadora, la base programadora a nuestra placa programadora y la placa programadora a nuestra computadora, copiaremos [el código](https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Test_de_Programacion_ATtiny85.ino) lo pegaremos en nuestro IDE Arduino y haremos los ultimos ajustes en nuestro IDE para que todo salga a la perfeccion, recuerda que este codigo de prueba solo prende y apaga un led, pero una ves hecho esto, ya podremos montarle cualquier codigo a nuestro micorcontolador. las siguientes imagentes ilutrsativas describen las ultimas configuraciones.

      5.1 Placa a Programar
         ![Board]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step1.Herramienta_Placa_ATtiny_85.png "Board")

      5.2 Puerto
         ![Port]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step2.Puerto.png "Port")

      5.3 Reloj
         ![Clock]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step3.Clock_1MHZ.png "Clock")

      5.4 Processor
         ![Processor]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step4.Processor_ATtiny85.png "Processor")

      5.5 ArduinoISP
         ![ISP]( https://github.com/ROBTRT421/Programador_de_Microcontrolador_ATtiny85/blob/main/Step5.Programador_ArduinoISP.png "ISP")
   


   
