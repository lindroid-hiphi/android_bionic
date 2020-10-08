void** __get_tls_hooks(void) {
#include "platform/bionic/tls_internal.h"
  return __get_tls_internal();
}
