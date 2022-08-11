# serialEvent
[![Untitled-Sketch-bb.png](https://i.postimg.cc/nhTYnpyq/Untitled-Sketch-bb.png)](https://postimg.cc/Hrc72DsL)
Uso de la función ```SerialEvent()``` para recibir datos desde el puerto serie.

## Hardware y software necesarios
- Placa de desarrollo Arduino 
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/)

## Funcionamiento
#### Variables
- ```sRun```: Variable para evitar que el programa se ejecute más de una vez.
- ```Input```: String que contiene los datos recibidos por el puerto serie.
- ```Cache```: String que contiene los antiguos datos recibidos por el puerto serie.

#### Funcionamiento
Cuando se recibe un dato, los datos se guardan en un string para mandarse nuevamente al puerto serie usando la función ```serialEvent()```.

