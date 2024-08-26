# Criptografía y seguridad en redes 
### Laboratorio 2.B - Registro de eventos

¿Que es un *__registro de eventos__*? Los archivos de registro, son archivos que las computadoras utilizan para registrar eventos. Los programas
de software, los procesos en segundo plano, los servicios o las transacciones entre servicios (incluido el propio sistema) pueden generar tales eventos. Los archivos de registro dependen de la aplicación que los
genera. Cumplir con la convención de los archivos de registro es responsabilidad del desarrollador de la aplicación. La documentación del software debe incluir información sobre sus archivos de registro.

### Parte 1: Descripción general de los archivos de registro

*__Paso 1__*

En este paso se nos pide analizar el siguiente registro de evento:

```bash
[Wed Mar 22 11:23:12.207022 2017] [core:error] [pid 3548:tid 4682351596] [client
209.165.200.230] File does not exist: /var/www/apache/htdocs/favicon.ico
```

Mucha información se puede obtener del análisis del registro, en este caso está diciendo que el servir  *__Apche__* no pudo encontrar el archivo `favicon.ico` en la ruta `/var/www/apache/htdocs` en la solicitud hecha por el usuario con la ip `209.165.200.230`

Luego se usa el comando `cat /var/log/logstash-tutorial.log` que muestra la siguiente salida 

```Bash
83.149.9.216 - - [04/Jan/2015:05:13:42 +0000] "GET
/presentations/logstash-monitorama-2013/images/kibana-search.png HTTP/1.1" 200 203023
"http://semicomplete.com/presentations/logstash-monitorama-2013/" "Mozilla/5.0
(Macintosh; Intel Mac OS X 10_9_1) AppleWebKit/537.36 (KHTML, like Gecko)
Chrome/32.0.1700.77 Safari/537.36"
83.149.9.216 - - [04/Jan/2015:05:13:42 +0000] "GET
/presentations/logstash-monitorama-2013/images/kibana-dashboard3.png HTTP/1.1" 200
171717 "http://semicomplete.com/presentations/logstash-monitorama-2013/" "Mozilla/5.0
(Macintosh; Intel Mac OS X 10_9_1) AppleWebKit/537.36 (KHTML, like Gecko)
Chrome/32.0.1700.77 Safari/537.36"
83.149.9.216 - - [04/Jan/2015:05:13:44 +0000] "GET
/presentations/logstash-monitorama-2013/plugin/highlight/highlight.js HTTP/1.1" 200
26185 "http://semicomplete.com/presentations/logstash-monitorama-2013/" "Mozilla/5.0
(Macintosh; Intel Mac OS X 10_9_1) AppleWebKit/537.36 (KHTML, like Gecko)
Chrome/32.0.1700.77 Safari/537.36”
```
La salida está omitida para que no sea larga pero la podemos considerar una transacción web debido a que todas son solicitudes HTTP realizadas por un cliente web (Mozilla) que solicita un recurso como un archivo o una imágen, vemos el estado de la solicitud hecha y el tipo, así como también la marca de tiempo y la ip.

Es diferente porque el primero es un registro de error que se usan para diagnosticar problemas, mientras que el segundo es un registro de acceso que se usa para monitorear el tráfico web y el comportamientos de los usuarios. La información es diferente porque los propósitos son diferentes.

*__Paso 2__*

Ahora pasaremos a analizar los registros del sistema operativo, los cuales se encuentran en la ruta `/var/log/messages` al ejecutarlo la salida es similar a la siguiente








