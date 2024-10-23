# Ingenieria social

## Integrantes

- [Bruno Guglielmotti](https://github.com/BrunoGugli)
- [Franco Rodriguez](https://github.com/rodriguezzfran)

## Introduccion

Los ataques de ingeniería social tienen como objetivo lograr que una víctima introduzca información personal
o confidencial; este tipo de ataque puede ser realizado por un delincuente que está utilizando un capturador
de teclas, correos electrónicos de phishing o un método físico en persona. En esta práctica de laboratorio
tendrán que investigar la ingeniería social e identificar formas de reconocerla e impedirla.

## Metodos de ingenieria social

Si bien existen varios metodos de ingenieria social, los 3 mas comunes son:

1. __Phishing y variantes__:
    - __Phishing__: El phishing es un ataque que se realiza principalmente a través de correos electrónicos fraudulentos. Los atacantes envían mensajes que parecen provenir de fuentes legítimas, como bancos o empresas conocidas, con el objetivo de engañar a las víctimas para que revelen información sensible, como contraseñas o datos bancarios. Estos correos pueden incluir enlaces maliciosos o archivos adjuntos infectados.

    - __Vishing__: El vishing, o "voice phishing", implica el uso de llamadas telefónicas para engañar a las víctimas. Los atacantes se hacen pasar por representantes de empresas legítimas o autoridades, presionando a las víctimas para que proporcionen información personal o financiera. Este método es efectivo porque los atacantes pueden utilizar técnicas de persuasión y crear un sentido de urgencia durante la llamada.

    - __Smishing__: El smishing es una variante del phishing que utiliza mensajes SMS para engañar a las víctimas. Los atacantes envían mensajes que pueden contener enlaces maliciosos o solicitar información sensible. Al igual que en el phishing, el smishing a menudo juega con la curiosidad o la urgencia del receptor para lograr que actúe rápidamente sin pensar.

2. __Interaccion humana directa__:
    
    Este método implica el contacto físico o personal con la víctima. Los atacantes pueden presentarse en una ubicación específica, haciéndose pasar por empleados, contratistas o visitantes autorizados. Utilizan técnicas como:

    - __Tailgating__: Seguir a un empleado autorizado para entrar en áreas restringidas.

    - __Pretexting__: Crear una historia convincente para ganar la confianza de la víctima y obtener información o acceso a recursos.

3. __Ataques pasivos__:

    Los ataques pasivos son más sutiles y se basan en la observación y recolección de información sin interacción directa. Algunas técnicas incluyen:

    - __Shoulder surfing__: Observar a alguien mientras introduce información confidencial, como un PIN o contraseñas.

    - __Revisión de Desechos__: Examinar la basura de una organización para encontrar documentos sensibles que no fueron destruidos adecuadamente.

## Casos especificos

- __Phishing__: Uno de los ataques de phishing más notorios fue perpetrado por Evaldas Rimasauskas, quien engañó a Google y Facebook entre 2013 y 2015. Rimasauskas estableció una empresa falsa que pretendía ser un fabricante de hardware que trabajaba con ambas compañías. Enviando correos electrónicos fraudulentos que incluían facturas por servicios y productos legítimos, logró que empleados de Google y Facebook depositaran más de $100 millones en cuentas bancarias controladas por él. Este caso resalta la efectividad del phishing dirigido (spear phishing) en empresas grandes y tecnológicamente avanzadas.

- __Vishing__: Un caso reciente de vishing involucró a una empresa que fue víctima de un ataque mediante manipulación telefónica. Los atacantes llamaron a un punto de venta utilizando un número falsificado que parecía provenir de la sede de la empresa. Se hicieron pasar por personal autorizado para persuadir a un empleado a descargar un archivo malicioso desde OneDrive, lo que resultó en la instalación de un acceso no autorizado a su red. Este ataque combinó técnicas de ingeniería social con el uso de ransomware, destacando cómo los atacantes pueden manipular psicológicamente a las víctimas para ejecutar acciones dañinas.

- __Smishing__: Un caso notable de smishing ocurrió en el Reino Unido, donde varios usuarios recibieron mensajes SMS fraudulentos que afirmaban ser del banco, solicitando que verificaran su cuenta debido a "actividades sospechosas". Los mensajes contenían enlaces a sitios web falsos diseñados para robar credenciales bancarias. Este tipo de ataque es particularmente efectivo porque aprovecha la confianza que los usuarios tienen en las comunicaciones oficiales de sus bancos y crea un sentido de urgencia para actuar rápidamente sin pensar.

- __Tailgating__: 

    - __Caso del Hospital Mount Sinai St. Luke__: Un médico residente fue despedido después de acceder a cinco quirófanos en el hospital durante dos días. Se disfrazó con un uniforme médico y siguió a un empleado que utilizó su tarjeta de identificación para entrar.

    - __Incidente en Mar-a-Lago__: En 2019, una mujer llamada Yuking Zhang intentó ingresar al club Mar-a-Lago, propiedad de Donald Trump. Utilizó varias excusas, como la existencia de un evento ficticio, para persuadir al personal de seguridad. Aunque no se trató estrictamente de tailgating en el sentido clásico, su técnica implicaba seguir a otros y utilizar pretextos engañosos para ganar acceso a un área restringida.

- __Pretexting__:

    - __Caso de la Compañía de Telecomunicaciones__: Un atacante se hizo pasar por un representante de soporte técnico y llamó a un empleado de una empresa de telecomunicaciones. Utilizando información obtenida previamente sobre la empresa, logró convencer al empleado para que le proporcionara acceso a sistemas internos sensibles, alegando que necesitaba realizar una "verificación urgente".

    - __Incidente en una Institución Financiera__: En otro caso, un atacante se presentó en una sucursal bancaria como un auditor externo. Llevaba documentos falsificados y se mostró muy seguro al hablar con los empleados. Convenció a uno de ellos para que le proporcionara acceso a áreas restringidas bajo el pretexto de realizar una auditoría sorpresa.

## Redes sociales

Las redes sociales pueden implicar una amenaza de ingeniería social debido a varios factores. La ingeniería social es una técnica utilizada por atacantes para manipular a las personas y obtener información confidencial o acceso no autorizado a sistemas. Aquí hay algunas razones por las que las redes sociales pueden ser un vector para este tipo de ataques:

- __Información Personal__: Los usuarios suelen compartir mucha información personal en redes sociales, como fechas de nacimiento, direcciones, nombres de familiares, etc. Esta información puede ser utilizada por atacantes para responder preguntas de seguridad o para crear perfiles falsos.

- __Confianza__: Los usuarios tienden a confiar en las personas con las que interactúan en redes sociales. Los atacantes pueden hacerse pasar por amigos o colegas para ganar esa confianza y luego solicitar información sensible.

- __Phishing__: Las redes sociales son una plataforma común para ataques de phishing, donde los atacantes envían mensajes que parecen legítimos para engañar a los usuarios y que estos revelen información personal o hagan clic en enlaces maliciosos.

- __Ingeniería Social Directa__: Los atacantes pueden interactuar directamente con las víctimas a través de mensajes privados, comentarios o publicaciones, manipulándolos para que revelen información o realicen acciones que comprometan su seguridad.

- __Suplantación de Identidad__: Los atacantes pueden crear perfiles falsos que imitan a personas o empresas legítimas para engañar a los usuarios y obtener información o dinero.

## Estrategias para defensa de ataques de ingenieria social

1. __Capacitacion y concientizacion del personal__:

    - __Formacion regular__: Es fundamental proporcionar capacitación continua a todos los empleados sobre los riesgos asociados con la ingeniería social. Esto incluye identificar correos electrónicos sospechosos, llamadas telefónicas engañosas y mensajes SMS fraudulentos. Las sesiones de formación deben incluir ejemplos reales y simulaciones de ataques para que el personal pueda reconocer patrones de comportamiento sospechosos.

    - __Simulacros de fishing__: Realizar ejercicios periódicos de simulación de phishing puede ayudar a los empleados a practicar cómo responder ante intentos reales de ataque. Esto no solo aumenta la conciencia, sino que también permite a la organización evaluar la efectividad de su formación.

2. __Politicas y procedimientos claros__:

    - __Politicas de seguridad__: Establecer políticas claras sobre el manejo de información confidencial y cómo reportar incidentes sospechosos es crucial. Estas políticas deben ser accesibles y comprendidas por todos los empleados.

    - __Control de Acceso__: Aplicar un enfoque de "confianza cero" donde se limite el acceso a información sensible solo a aquellos empleados que realmente lo necesiten para realizar su trabajo. Esto reduce el riesgo si un atacante logra obtener credenciales.

3. __Tecnologia de seguridad__:

    - __Autenticacion Multifactor__: Implementar MFA para todas las cuentas críticas añade una capa adicional de seguridad, dificultando que los atacantes accedan a sistemas incluso si obtienen contraseñas.

    - __Actualizacion regular del software__: Mantener actualizado todo el software de seguridad, incluidos antivirus y sistemas operativos, es esencial para protegerse contra vulnerabilidades que pueden ser explotadas por ataques de ingeniería social.

4. __Fomentar la cultura del reporte__:

    - __Notificacion de incidentes__: Crear un ambiente donde los empleados se sientan cómodos reportando incidentes sin temor a represalias es vital. Esto permite una respuesta rápida ante posibles ataques y ayuda a mejorar las defensas organizacionales.

    - __Evaluaciones periodicas__: Realizar auditorías y revisiones regulares de las políticas y prácticas de seguridad para adaptarse a nuevas amenazas y mejorar continuamente la postura de seguridad.


## SANS Institute

El SANS Institute, oficialmente conocido como el Escal Institute of Advanced Technologies, es una organización privada con fines de lucro fundada en 1989 en los Estados Unidos. Se especializa en la formación y certificación en el ámbito de la seguridad informática y ciberseguridad.

Es reconocido por su enfoque práctico y su capacidad para preparar a los profesionales para enfrentar desafíos reales en el campo de la ciberseguridad. Sus cursos son valorados por su contenido relevante y la experiencia práctica que ofrecen, lo que permite a los participantes aplicar inmediatamente lo aprendido en sus trabajos

