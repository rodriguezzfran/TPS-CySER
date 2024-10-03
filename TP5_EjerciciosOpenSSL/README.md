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






