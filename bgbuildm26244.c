#include <stdint.h>
#include <stdbool.h>
#include "gecko_configuration.h"
          #define _CMU_HFXOSTARTUPCTRL_CTUNE_DEFAULT                  0x000000A0UL                                          /**< Mode DEFAULT for CMU_HFXOSTARTUPCTRL */
          #define _CMU_HFXOSTARTUPCTRL_REGISHWARM_DEFAULT             0x0000000AUL                                          /**< Mode DEFAULT for CMU_HFXOSTARTUPCTRL */
          #define _CMU_HFXOSTEADYSTATECTRL_REGISH_DEFAULT             0x0000000AUL                                         /**< Mode DEFAULT for CMU_HFXOSTEADYSTATECTRL */
          #define _CMU_HFXOSTARTUPCTRL_IBTRIMXOCORE_DEFAULT           0x00000060UL                                          /**< Mode DEFAULT for CMU_HFXOSTARTUPCTRL */
          #define _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_DEFAULT        0x00000002UL                                            /**< Mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
          #define _CMU_HFXOTIMEOUTCTRL_WARMSTEADYTIMEOUT_DEFAULT      0x00000006UL                                            /**< Mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
          #define _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_DEFAULT          0x00000006UL                                            /**< Mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
          #define _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_DEFAULT         0x00000007UL                                            /**< Mode DEFAULT for CMU_HFXOTIMEOUTCTRL */
    typedef struct
{
  bool lowPowerMode;                    /**< Enable low-power mode */
  bool autoStartEm01;                   /**< Enable auto-start on entry to EM0/1 */
  bool autoSelEm01;                     /**< Enable auto-select on entry to EM0/1 */
  bool autoStartSelOnRacWakeup;         /**< Enable auto-start and select on RAC wakeup */
  uint16_t ctuneStartup;                /**< Startup phase CTUNE (load capacitance) value */
  uint16_t ctuneSteadyState;            /**< Steady-state phase CTUNE (load capacitance) value */
  uint8_t regIshSteadyState;            /**< Shunt steady-state current */
  uint8_t xoCoreBiasTrimStartup;        /**< Startup XO core bias current trim */
  uint8_t xoCoreBiasTrimSteadyState;    /**< Steady-state XO core bias current trim */
  uint8_t thresholdPeakDetect;          /**< Peak detection threshold */
  uint8_t timeoutShuntOptimization;     /**< Timeout - shunt optimization */
  uint8_t timeoutPeakDetect;            /**< Timeout - peak detection */
  uint8_t timeoutSteady;                /**< Timeout - steady-state */
  uint8_t timeoutStartup;               /**< Timeout - startup */
} CMU_HFXOInit_TypeDef;
extern const CMU_HFXOInit_TypeDef gecko_hfxo_init;
#include "bg_gattdb_def.h"
extern const struct bg_gattdb_def bg_gattdb_data;
const gecko_configuration_t config __attribute__ ((section (".gecko_configuration")))=
{
    .adc.flags=0x1,
    .sleep.flags=0 | SLEEP_FLAGS_DEEP_SLEEP_ENABLE,
    .gpios[0].MODEH=0,
    .gpios[0].MODEL=0,
    .gpios[0].DOUT=0,
    .gpios[1].MODEH=4096,
    .gpios[1].MODEL=0,
    .gpios[1].DOUT=0,
    .gpios[2].MODEH=0,
    .gpios[2].MODEL=0,
    .gpios[2].DOUT=0,
    .gpios[3].MODEH=0,
    .gpios[3].MODEL=0,
    .gpios[3].DOUT=0,
    .gpios[4].MODEH=0,
    .gpios[4].MODEL=0,
    .gpios[4].DOUT=0,
    .gpios[5].MODEH=0,
    .gpios[5].MODEL=0,
    .gpios[5].DOUT=0,
    .gpio_exti.EXTIPSELL=0,
    .gpio_exti.EXTIPSELH=0,
    .gpio_exti.EXTIRISE=0,
    .gpio_exti.EXTIFALL=0,
    .gpio_exti.IEN=0,
    .config_flags=24,
    .bluetooth.max_connections=4,
    .gattdb=&bg_gattdb_data,
    .hfxo=&gecko_hfxo_init,
    .pti=NULL};
const CMU_HFXOInit_TypeDef gecko_hfxo_init  __attribute__ ((section (".xo_configuration")))=
{                                                                               
              false,        /* Low-noise mode */                                            
              false,        /* Disable auto-start on EM0/1 entry */                         
              false,        /* Disable auto-select on EM0/1 entry */                        
              false,        /* Disable auto-start and select on RAC wakeup */               
              _CMU_HFXOSTARTUPCTRL_CTUNE_DEFAULT,                                           
              0,        /* Steady-state CTUNE for WSTK boards without load caps */      
              _CMU_HFXOSTEADYSTATECTRL_REGISH_DEFAULT,                                      
              _CMU_HFXOSTARTUPCTRL_IBTRIMXOCORE_DEFAULT,                                    
              0x7,          /* Recommended steady-state XO core bias current */             
              0x6,          /* Recommended peak detection threshold */                      
              _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_DEFAULT,                                 
              0xA,          /* Recommended peak detection timeout  */                       
              _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_DEFAULT,                                   
              _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_DEFAULT,                                  
            };