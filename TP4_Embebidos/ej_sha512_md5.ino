#include <mbedtls/md.h>  // Librería para hash MD y SHA

// Función para imprimir los resultados en hexadecimal
void printHash(unsigned char* hash, size_t length) {
  for (size_t i = 0; i < length; i++) {
    Serial.printf("%02x", hash[i]);
  }
  Serial.println();
}

void setup() {
  Serial.begin(115200);
  delay(2000);  // Espera para abrir el monitor serie

  const char* input = "hola, ESP32!";
  
  // --- MD5 ---
  Serial.println("MD5 Hash:");

  // Crear contexto MD5
  unsigned char md5_result[16];  // MD5 genera un hash de 128 bits (16 bytes)
  mbedtls_md_context_t md5_ctx;
  mbedtls_md_init(&md5_ctx);
  const mbedtls_md_info_t* md5_info = mbedtls_md_info_from_type(MBEDTLS_MD_MD5);
  mbedtls_md_setup(&md5_ctx, md5_info, 0);
  mbedtls_md_starts(&md5_ctx);
  mbedtls_md_update(&md5_ctx, (const unsigned char*)input, strlen(input));
  mbedtls_md_finish(&md5_ctx, md5_result);
  mbedtls_md_free(&md5_ctx);

  // Imprimir el resultado MD5 en formato hexadecimal
  printHash(md5_result, 16);

  // --- SHA-512 ---
  Serial.println("SHA-512 Hash:");

  // Crear contexto SHA-512
  unsigned char sha512_result[64];  // SHA-512 genera un hash de 512 bits (64 bytes)
  mbedtls_md_context_t sha512_ctx;
  mbedtls_md_init(&sha512_ctx);
  const mbedtls_md_info_t* sha512_info = mbedtls_md_info_from_type(MBEDTLS_MD_SHA512);
  mbedtls_md_setup(&sha512_ctx, sha512_info, 0);
  mbedtls_md_starts(&sha512_ctx);
  mbedtls_md_update(&sha512_ctx, (const unsigned char*)input, strlen(input));
  mbedtls_md_finish(&sha512_ctx, sha512_result);
  mbedtls_md_free(&sha512_ctx);

  // Imprimir el resultado SHA-512 en formato hexadecimal
  printHash(sha512_result, 64);
}

void loop() {
  // No se necesita hacer nada en el loop
}