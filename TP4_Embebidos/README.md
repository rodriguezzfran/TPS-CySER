
# Criptografía y seguridad en redes

## Punto 2 - casos de incidentes de seguridad

1. Marcapasos 'St Jude Medical'

- _incidente:_ Los marcapasos de esta empresa son controlados vía radio, dónde se descubrió que 6 modelos tienen el mismo firmware de control que permite que un usuario
  no autorizado equipado con equipo comercial siomple pueda reprogramar el marcapasos para agotar su bateria o alterar el ritmo de los latidos del paciente.
- _Solución:_ Asegurar que los dispositivos médicos embebidos utilicen cifrado fuerte para la comunicación y autenticación multifactor. También es importante realizar pruebas de penetración y actualizaciones de seguridad regulares

2. Caso de Jeep Cherokee

- _Incidente:_ En 2015, investigadores de seguridad demostraron que podían tomar el control remoto de un Jeep Cherokee explotando vulnerabilidades en su sistema de entretenimiento y navegación. Esto permitió a los atacantes controlar funciones críticas del vehículo como el acelerador y los frenos.
- _Solución:_ Diseñar los sistemas automotrices con una arquitectura de seguridad robusta que incluya la segmentación de redes internas y la implementación de firewalls. Como en el caso anterior, es importante realizar pruebas de penetración e incluir formas de mantener el sistema actualizado contra amenazas.

  3. Ataque a Ucrania
- _Incidente:_ En 2015, un ataque cibernético dirigido a la red eléctrica de Ucrania dejó sin electricidad a más de 230,000 personas. Los atacantes utilizaron malware conocido como BlackEnergy para comprometer los sistemas embebidos de control industrial (ICS) y tomar el control de las subestaciones eléctricas.
- _Solución:_ Segmentación de redes, implementar sistemas de detección y prevención de intrusiones, cifrar comunicaciones y uso de autenticación multifactor, capacitar en ciberseguridad a los empleados.

## Punto 3 - ejemplos de cifrado con esp32

Una vez configurada la esp32 con el arduino IDE podemos usar la libería _mbedtls_ para probar los siguientes algortimos de cifrado.

El primer código probado es el de implementar los algoritmos de _SHA 512_ y _MD5_

![image](https://github.com/user-attachments/assets/8934cdbb-63f6-4f1c-b527-cef0e4ab5432)

- SHA-512: Es un algoritmo de hash criptográfico que produce un valor de hash de 512 bits. Es parte de la familia de algoritmos SHA-2 y se utiliza para asegurar la integridad de los datos y la autenticación.
- MD5: Es un algoritmo de hash criptográfico que produce un valor de hash de 128 bits. Aunque fue muy popular, ahora se considera inseguro para muchas aplicaciones debido a sus vulnerabilidades2.

La salida de la ESP32 muestra lo siguiente al cifrar la palabra "Hello, ESP32!"

```arduino
MD5 Hash:
b98c8142a9341854d5b369baf13577ac
SHA-512 Hash:
74c077210927470dd35cdb2c538a9407ec16ed27510ac57e9d85c281683e678e603345ef6d5be6c59009ff611663086f192e7e5493b9ada980218c72551b60c6
````

Para el segundo código vamos a utilizar encriptación simétrica, el algoritmo de AES

AES es un algoritmo de cifrado simétrico que cifra datos en bloques de 128 bits utilizando claves de 128, 192 o 256 bits. Es conocido por su seguridad y eficiencia, y se utiliza ampliamente para proteger datos electrónicos. Su principal característica es que al ser simétrico la misma clave se usa para enmcriptar y desencriptar.

![image](https://github.com/user-attachments/assets/034cda67-0631-472d-94c1-1c0c6bc0cda8)

La salida muestra lo siguiente

```arduino
Mensaje original:
Hello, ESP32!

Encriptando con AES-128...
Texto encriptado (hex): 2326522d77bbf20c180bb757c5c494a1

Desencriptando con AES-128...
Texto desencriptado: Hello, ESP32!
```
