#include <mbedtls/aes.h>  // Librería para AES

// Clave de 128 bits (16 bytes) para AES
const unsigned char aes_key[16] = { 
  0x60, 0x3d, 0xeb, 0x10, 0x15, 0xca, 0x71, 0xbe,
  0x2b, 0x73, 0xae, 0xf0, 0x85, 0x7d, 0x77, 0x81 
};

// Mensaje a encriptar (16 bytes como múltiplo de bloque para AES-128)
unsigned char input[16] = "Hello, ESP32!  ";  // 16 bytes con padding manual
unsigned char encrypted[16];  // Buffer para almacenar el texto cifrado
unsigned char decrypted[16];  // Buffer para almacenar el texto descifrado

// Función para imprimir el contenido en formato hexadecimal
void printHex(const unsigned char* data, size_t length) {
  for (size_t i = 0; i < length; i++) {
    Serial.printf("%02x", data[i]);
  }
  Serial.println();
}

void setup() {
  Serial.begin(115200);
  delay(2000);  // Espera para el monitor serie

  // Mostrar el mensaje original
  Serial.println("Mensaje original:");
  Serial.println((char*)input);

  // Crear contexto para AES
  mbedtls_aes_context aes_ctx;
  mbedtls_aes_init(&aes_ctx);

  // --- Encriptación AES-128 ---
  Serial.println("\nEncriptando con AES-128...");

  // Establecer la clave AES-128
  mbedtls_aes_setkey_enc(&aes_ctx, aes_key, 128);

  // Encriptar en modo ECB (AES-128)
  mbedtls_aes_crypt_ecb(&aes_ctx, MBEDTLS_AES_ENCRYPT, input, encrypted);

  // Imprimir el resultado encriptado en hexadecimal
  Serial.print("Texto encriptado (hex): ");
  printHex(encrypted, 16);

  // --- Desencriptación AES-128 ---
  Serial.println("\nDesencriptando con AES-128...");

  // Establecer la clave AES-128 (necesaria para desencriptar)
  mbedtls_aes_setkey_dec(&aes_ctx, aes_key, 128);

  // Desencriptar en modo ECB (AES-128)
  mbedtls_aes_crypt_ecb(&aes_ctx, MBEDTLS_AES_DECRYPT, encrypted, decrypted);

  // Imprimir el resultado desencriptado
  Serial.print("Texto desencriptado: ");
  Serial.println((char*)decrypted);  // Convertir a string

  // Limpiar el contexto AES
  mbedtls_aes_free(&aes_ctx);
}

void loop() {
  // No se necesita hacer nada en el loop
}
