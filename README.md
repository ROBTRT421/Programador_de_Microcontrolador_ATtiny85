# Prologo
Este es un "Programador de Microcontroladores ATtiny85" utilizando como base el ecosistema Arduino, la placa 
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

# IMPORTANTE
4. Paso I M P O R T A N T E una vez creada nuestra placa y teniendo nuestro ArduinoUNO ya configurado como programadorISP tendremos que instalar el gestor de tarjetas ATtiny, ya que de no hacerlo nunca encontraremos las librerias necesarias para cargar, programar o configurar nuestro Microcontrolador

   


   
