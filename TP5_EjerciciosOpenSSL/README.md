# Criptografía y seguridad en redes

### Parte 1 - Cifrar y descifrar datos con OpenSSL utilizando criptografía simétrica

OpenSSL es un proyecto de código abierto que proporciona un kit de herramientas robusto, comercial y
completo para los protocolos de Seguridad de capa de transporte Transport Layer Security (TLS) y Capa de
sockets segura, Secure Sockets Layer (SSL). También es una biblioteca de criptografía de uso general.

OpenSSL se puede utilizar como una herramienta independiente para el cifrado. Aunque pueden utilizarse
muchos algoritmos de cifrado, esta práctica de laboratorio se enfoca en AES. 

Para esta práctica vamos a cifrar un archivo ubicado en /home/analyst/lab.support.files/

![image](https://github.com/user-attachments/assets/a080376a-7377-4938-ac7f-12fd86e2fbd2)

Utilizaremos AES-256 para cifrar el archivo de texto y guardar la versión cifrada como message.enc. para eso usaremos el siguiente comando
*__openssl aes-256-cbc -in letter_to_grandma.txt -out message.enc__*

![image](https://github.com/user-attachments/assets/6ad88953-f28c-4812-8f28-025dfa08036c)

Ahora vamos a repetir lo mismo pero con la opción *__-a__*  que le indica a OpenSSL que debe cifrar el mensaje con un método de
codificación diferente a Base64 antes de guardar el resultado en un archivo.

![image](https://github.com/user-attachments/assets/14debf5d-00f5-4b44-a566-03c09ec41955)

Usar Base64 es útil si planeas transferir o almacenar el archivo cifrado en medios que prefieren texto sobre binario o si trabajas en un entorno donde el manejo de binarios puede ser difícil.

Ahora para descifrarlo usamos el comando `openssl aes-256-cbc –a -d -in message.enc -out decrypted_letter.txt` que nos pide la misma constraseña que usamos para cifrar el mensaje

![image](https://github.com/user-attachments/assets/6e340d53-fdd0-4e32-912e-3475990189f5)

`-a` sirve para decirle a OpenSSL que primero debe decodificar el archivo desde Base64 antes de proceder a la fase de descifrado.

### Parte 2 - Cifrar y descifrar datos con OpenSSL utilizando criptografía asimétrica

La Criptografía de clave pública utiliza un par de claves por usuario o entidad para brindar servicios de
seguridad. Una es la clave pública y se puede compartir libremente. La otra clave es privada y se supone que
es secreta y nunca se comparte.

Este comando utiliza el comando genrsa de OpenSSL para generar un par de claves pública/privada de
1024 bits. Esto es posible porque el algoritmo RSA es asimétrico. También usa aes128, un algoritmo de
clave simétrica, para encriptar la clave privada que Alice genera usando genrsa.

![image](https://github.com/user-attachments/assets/d6823838-ff65-47e2-86eb-82e2faa9bee6)

Ahora *__Bob__* genera el mismo procedimiento

![image](https://github.com/user-attachments/assets/73b64302-6aa6-404c-8f34-73e3a0dfae49)

Extraemos la clave pública, que es la que se puede compartir, mientras que la privada queda guardada.

![image](https://github.com/user-attachments/assets/05d5d59e-801c-4986-a743-ec1e2e193863)

El siguiente paso sería que Bob haga lo mismo y compartan entre ellos las claves públicas

Una vez hecho esto, podemos generar un mensaje y cifrarlo de modo que sólo Bob pueda leerlo

Para cifrar este mensaje secreto, Alice necesita utilizar el comando openssls `-encrypt` Para ello,
Necesita proporcionar estas tres cosas:
- El nombre del archivo que contiene el mensaje secreto.
- Clave pública de Bob (archivo)
- El nombre de un archivo donde se almacenará el mensaje cifrado

![image](https://github.com/user-attachments/assets/2ef2cf8b-73c3-48cb-b3f5-cab4ac1ad035)

Bob necesita hacer su parte descifrando el mensaje usando openssl, pero esta vez usando como
argumento de línea de comandos -decrypt. Patra lograrlo necesita proporcionar la siguiente
información:
- El archivo encriptado (que obtuvo de Alice)
- La propia clave privada de Bob (para descifrar, ya que se cifró con la clave pública de Bob)
- Un nombre de archivo para guardar la salida descifrada a través de la redirección

![image](https://github.com/user-attachments/assets/eec9ba59-6f21-4afe-b2cf-b283ea2269fd)













