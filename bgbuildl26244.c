#include <stdint.h>
#include <string.h>

#include "native_gecko.h"

#ifdef HOMEKIT
  void homekit_init();
  int homekit_handler(const struct gecko_cmd_packet *);
  #define HOMEKIT_INIT() homekit_init()
  #define HOMEKIT_HANDLER(p) homekit_handler(p)
#else
  #define HOMEKIT_INIT()
  #define HOMEKIT_HANDLER(p) 0
#endif //HOMEKIT

#include "gatt_db.h"
#include "C:/Users/Scott/Desktop/Scott Blue Gecko v4/bgbuildU26244.h"
#include "bgscript.h"
extern const gecko_configuration_t config;
uint8_t script_variable_memory[36];
uint8_t script_stack_memory[256];
void main()
{
    struct gecko_cmd_packet *p;
    gecko_init(&config);
    HOMEKIT_INIT();
    bgscript_init(script_data+8,36,256,script_variable_memory,script_stack_memory);
    while(1)
    {      p = gecko_wait_event();
      if (HOMEKIT_HANDLER(p))
        continue;
      bgscript_run_event(BGLIB_MSG_HEADER_LEN+BGLIB_MSG_LEN(p->header),(uint8_t*)p,0,NULL);    }}