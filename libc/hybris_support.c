#include "platform/bionic/tls_internal.h"

void** __get_tls(void) {
  return __get_tls_internal();
}

void** __get_tls_hooks(void) {
  return __get_tls_internal();
}
