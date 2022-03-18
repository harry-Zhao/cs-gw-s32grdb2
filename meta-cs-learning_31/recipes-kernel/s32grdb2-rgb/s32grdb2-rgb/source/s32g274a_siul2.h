#pragma once
#include "regs_types.h"

/* ============================================================================
   =============================== Module: SIUL2_0 ============================
   ============================================================================ */

typedef union SIUL2_0_MIDR1_union_tag { /* SIUL2 MCU ID Register #1 */
  vuint32_t R;
  struct {
    vuint32_t MINOR_MASK:4;            /* Minor Mask Revision */
    vuint32_t MAJOR_MASK:4;            /* Major Mask Revision */
    vuint32_t CC_REVISION:8;           /* CC Revision */
    vuint32_t PART_NO:10;              /* MCU Part Number */
    vuint32_t PRODUCT_LINE_LETTER:6;   /* Product Line Letter */
  } B;
} SIUL2_0_MIDR1_tag;

typedef union SIUL2_0_MIDR2_union_tag { /* SIUL2 MCU ID Register #2 */
  vuint32_t R;
  struct {
    vuint32_t FLASH_SIZE_CODE:8;       /* Flash Size Code */
    vuint32_t FLASH_SIZE_DATA:4;       /* Flash Size Data */
    vuint32_t FLASH_DATA:2;            /* Flash Data */
    vuint32_t FLASH_CODE:2;            /* Flash Code */
    vuint32_t FREQUENCY:4;             /* Frequency */
    vuint32_t PACKAGE:6;               /* Package */
    vuint32_t TEMPERATURE:3;           /* Temperature */
    vuint32_t TECHNOLOGY:3;            /* Technology */
  } B;
} SIUL2_0_MIDR2_tag;

typedef union SIUL2_0_DISR0_union_tag { /* SIUL2 DMA/Interrupt Status Flag Register0 */
  vuint32_t R;
  struct {
    vuint32_t EIFR0:1;                 /* External Interrupt Status Flag 0 */
    vuint32_t EIFR1:1;                 /* External Interrupt Status Flag 1 */
    vuint32_t EIFR2:1;                 /* External Interrupt Status Flag 2 */
    vuint32_t EIFR3:1;                 /* External Interrupt Status Flag 3 */
    vuint32_t EIFR4:1;                 /* External Interrupt Status Flag 4 */
    vuint32_t EIFR5:1;                 /* External Interrupt Status Flag 5 */
    vuint32_t EIFR6:1;                 /* External Interrupt Status Flag 6 */
    vuint32_t EIFR7:1;                 /* External Interrupt Status Flag 7 */
    vuint32_t EIFR8:1;                 /* External Interrupt Status Flag 8 */
    vuint32_t EIFR9:1;                 /* External Interrupt Status Flag 9 */
    vuint32_t EIFR10:1;                /* External Interrupt Status Flag 10 */
    vuint32_t EIFR11:1;                /* External Interrupt Status Flag 11 */
    vuint32_t _unused_12:1;            /* Reserved */
    vuint32_t _unused_13:1;            /* Reserved */
    vuint32_t _unused_14:1;            /* Reserved */
    vuint32_t _unused_15:1;            /* Reserved */
    vuint32_t _unused_16:1;            /* Reserved */
    vuint32_t _unused_17:1;            /* Reserved */
    vuint32_t _unused_18:1;            /* Reserved */
    vuint32_t _unused_19:1;            /* Reserved */
    vuint32_t _unused_20:1;            /* Reserved */
    vuint32_t _unused_21:1;            /* Reserved */
    vuint32_t _unused_22:1;            /* Reserved */
    vuint32_t _unused_23:1;            /* Reserved */
    vuint32_t _unused_24:1;            /* Reserved */
    vuint32_t _unused_25:1;            /* Reserved */
    vuint32_t _unused_26:1;            /* Reserved */
    vuint32_t _unused_27:1;            /* Reserved */
    vuint32_t _unused_28:1;            /* Reserved */
    vuint32_t _unused_29:1;            /* Reserved */
    vuint32_t _unused_30:1;            /* Reserved */
    vuint32_t _unused_31:1;            /* Reserved */
  } B;
} SIUL2_0_DISR0_tag;

typedef union SIUL2_0_DIRER0_union_tag { /* SIUL2 DMA/Interrupt Request Enable Register0 */
  vuint32_t R;
  struct {
    vuint32_t EIRE0:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE1:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE2:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE3:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE4:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE5:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE6:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE7:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE8:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE9:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE10:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE11:1;                /* External Interrupt Request Enable */
    vuint32_t _unused_12:1;            /* Reserved */
    vuint32_t _unused_13:1;            /* Reserved */
    vuint32_t _unused_14:1;            /* Reserved */
    vuint32_t _unused_15:1;            /* Reserved */
    vuint32_t _unused_16:1;            /* Reserved */
    vuint32_t _unused_17:1;            /* Reserved */
    vuint32_t _unused_18:1;            /* Reserved */
    vuint32_t _unused_19:1;            /* Reserved */
    vuint32_t _unused_20:1;            /* Reserved */
    vuint32_t _unused_21:1;            /* Reserved */
    vuint32_t _unused_22:1;            /* Reserved */
    vuint32_t _unused_23:1;            /* Reserved */
    vuint32_t _unused_24:1;            /* Reserved */
    vuint32_t _unused_25:1;            /* Reserved */
    vuint32_t _unused_26:1;            /* Reserved */
    vuint32_t _unused_27:1;            /* Reserved */
    vuint32_t _unused_28:1;            /* Reserved */
    vuint32_t _unused_29:1;            /* Reserved */
    vuint32_t _unused_30:1;            /* Reserved */
    vuint32_t _unused_31:1;            /* Reserved */
  } B;
} SIUL2_0_DIRER0_tag;

typedef union SIUL2_0_DIRSR0_union_tag { /* SIUL2 DMA/Interrupt Request Select Register0 */
  vuint32_t R;
  struct {
    vuint32_t DIRSR0:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR1:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR2:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR3:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR4:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR5:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR6:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR7:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR8:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR9:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR10:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR11:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t _unused_12:1;            /* Reserved */
    vuint32_t _unused_13:1;            /* Reserved */
    vuint32_t _unused_14:1;            /* Reserved */
    vuint32_t _unused_15:1;            /* Reserved */
    vuint32_t _unused_16:1;            /* Reserved */
    vuint32_t _unused_17:1;            /* Reserved */
    vuint32_t _unused_18:1;            /* Reserved */
    vuint32_t _unused_19:1;            /* Reserved */
    vuint32_t _unused_20:1;            /* Reserved */
    vuint32_t _unused_21:1;            /* Reserved */
    vuint32_t _unused_22:1;            /* Reserved */
    vuint32_t _unused_23:1;            /* Reserved */
    vuint32_t _unused_24:1;            /* Reserved */
    vuint32_t _unused_25:1;            /* Reserved */
    vuint32_t _unused_26:1;            /* Reserved */
    vuint32_t _unused_27:1;            /* Reserved */
    vuint32_t _unused_28:1;            /* Reserved */
    vuint32_t _unused_29:1;            /* Reserved */
    vuint32_t _unused_30:1;            /* Reserved */
    vuint32_t _unused_31:1;            /* Reserved */
  } B;
} SIUL2_0_DIRSR0_tag;

typedef union SIUL2_0_IREER0_union_tag { /* SIUL2 Interrupt Rising-Edge Event Enable Register 0 */
  vuint32_t R;
  struct {
    vuint32_t IREE0:1;                 /* Enable rising-edge events to cause the IREE0 bit to be set. */
    vuint32_t IREE1:1;                 /* Enable rising-edge events to cause the IREE1 bit to be set. */
    vuint32_t IREE2:1;                 /* Enable rising-edge events to cause the IREE2 bit to be set. */
    vuint32_t IREE3:1;                 /* Enable rising-edge events to cause the IREE3 bit to be set. */
    vuint32_t IREE4:1;                 /* Enable rising-edge events to cause the IREE4 bit to be set. */
    vuint32_t IREE5:1;                 /* Enable rising-edge events to cause the IREE5 bit to be set. */
    vuint32_t IREE6:1;                 /* Enable rising-edge events to cause the IREE6 bit to be set. */
    vuint32_t IREE7:1;                 /* Enable rising-edge events to cause the IREE7 bit to be set. */
    vuint32_t IREE8:1;                 /* Enable rising-edge events to cause the IREE8 bit to be set. */
    vuint32_t IREE9:1;                 /* Enable rising-edge events to cause the IREE9 bit to be set. */
    vuint32_t IREE10:1;                /* Enable rising-edge events to cause the IREE10 bit to be set. */
    vuint32_t IREE11:1;                /* Enable rising-edge events to cause the IREE11 bit to be set. */
    vuint32_t _unused_12:1;            /* Reserved */
    vuint32_t _unused_13:1;            /* Reserved */
    vuint32_t _unused_14:1;            /* Reserved */
    vuint32_t _unused_15:1;            /* Reserved */
    vuint32_t _unused_16:1;            /* Reserved */
    vuint32_t _unused_17:1;            /* Reserved */
    vuint32_t _unused_18:1;            /* Reserved */
    vuint32_t _unused_19:1;            /* Reserved */
    vuint32_t _unused_20:1;            /* Reserved */
    vuint32_t _unused_21:1;            /* Reserved */
    vuint32_t _unused_22:1;            /* Reserved */
    vuint32_t _unused_23:1;            /* Reserved */
    vuint32_t _unused_24:1;            /* Reserved */
    vuint32_t _unused_25:1;            /* Reserved */
    vuint32_t _unused_26:1;            /* Reserved */
    vuint32_t _unused_27:1;            /* Reserved */
    vuint32_t _unused_28:1;            /* Reserved */
    vuint32_t _unused_29:1;            /* Reserved */
    vuint32_t _unused_30:1;            /* Reserved */
    vuint32_t _unused_31:1;            /* Reserved */
  } B;
} SIUL2_0_IREER0_tag;

typedef union SIUL2_0_IFEER0_union_tag { /* SIUL2 Interrupt Falling-Edge Event Enable Register 0 */
  vuint32_t R;
  struct {
    vuint32_t IFEE0:1;                 /* Enable falling-edge events to cause the IFEE0 bit to be set. */
    vuint32_t IFEE1:1;                 /* Enable falling-edge events to cause the IFEE1 bit to be set. */
    vuint32_t IFEE2:1;                 /* Enable falling-edge events to cause the IFEE2 bit to be set. */
    vuint32_t IFEE3:1;                 /* Enable falling-edge events to cause the IFEE3 bit to be set. */
    vuint32_t IFEE4:1;                 /* Enable falling-edge events to cause the IFEE4 bit to be set. */
    vuint32_t IFEE5:1;                 /* Enable falling-edge events to cause the IFEE5 bit to be set. */
    vuint32_t IFEE6:1;                 /* Enable falling-edge events to cause the IFEE6 bit to be set. */
    vuint32_t IFEE7:1;                 /* Enable falling-edge events to cause the IFEE7 bit to be set. */
    vuint32_t IFEE8:1;                 /* Enable falling-edge events to cause the IFEE8 bit to be set. */
    vuint32_t IFEE9:1;                 /* Enable falling-edge events to cause the IFEE9 bit to be set. */
    vuint32_t IFEE10:1;                /* Enable falling-edge events to cause the IFEE10 bit to be set. */
    vuint32_t IFEE11:1;                /* Enable falling-edge events to cause the IFEE11 bit to be set. */
    vuint32_t _unused_12:1;            /* Reserved */
    vuint32_t _unused_13:1;            /* Reserved */
    vuint32_t _unused_14:1;            /* Reserved */
    vuint32_t _unused_15:1;            /* Reserved */
    vuint32_t _unused_16:1;            /* Reserved */
    vuint32_t _unused_17:1;            /* Reserved */
    vuint32_t _unused_18:1;            /* Reserved */
    vuint32_t _unused_19:1;            /* Reserved */
    vuint32_t _unused_20:1;            /* Reserved */
    vuint32_t _unused_21:1;            /* Reserved */
    vuint32_t _unused_22:1;            /* Reserved */
    vuint32_t _unused_23:1;            /* Reserved */
    vuint32_t _unused_24:1;            /* Reserved */
    vuint32_t _unused_25:1;            /* Reserved */
    vuint32_t _unused_26:1;            /* Reserved */
    vuint32_t _unused_27:1;            /* Reserved */
    vuint32_t _unused_28:1;            /* Reserved */
    vuint32_t _unused_29:1;            /* Reserved */
    vuint32_t _unused_30:1;            /* Reserved */
    vuint32_t _unused_31:1;            /* Reserved */
  } B;
} SIUL2_0_IFEER0_tag;

typedef union SIUL2_0_IFER0_union_tag { /* SIUL2 Interrupt Filter Enable Register 0 */
  vuint32_t R;
  struct {
    vuint32_t IFE0:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE1:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE2:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE3:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE4:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE5:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE6:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE7:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE8:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE9:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE10:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE11:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t _unused_12:1;            /* Reserved */
    vuint32_t _unused_13:1;            /* Reserved */
    vuint32_t _unused_14:1;            /* Reserved */
    vuint32_t _unused_15:1;            /* Reserved */
    vuint32_t _unused_16:1;            /* Reserved */
    vuint32_t _unused_17:1;            /* Reserved */
    vuint32_t _unused_18:1;            /* Reserved */
    vuint32_t _unused_19:1;            /* Reserved */
    vuint32_t _unused_20:1;            /* Reserved */
    vuint32_t _unused_21:1;            /* Reserved */
    vuint32_t _unused_22:1;            /* Reserved */
    vuint32_t _unused_23:1;            /* Reserved */
    vuint32_t _unused_24:1;            /* Reserved */
    vuint32_t _unused_25:1;            /* Reserved */
    vuint32_t _unused_26:1;            /* Reserved */
    vuint32_t _unused_27:1;            /* Reserved */
    vuint32_t _unused_28:1;            /* Reserved */
    vuint32_t _unused_29:1;            /* Reserved */
    vuint32_t _unused_30:1;            /* Reserved */
    vuint32_t _unused_31:1;            /* Reserved */
  } B;
} SIUL2_0_IFER0_tag;

typedef union SIUL2_0_IFMCR_union_tag { /* SIUL2 Interrupt Filter Maximum Counter Register */
  vuint32_t R;
  struct {
    vuint32_t MAXCNT:4;                /* Maximum Interrupt Filter Counter setting */
    vuint32_t _unused_4:28;            /* Reserved */
  } B;
} SIUL2_0_IFMCR_tag;

typedef union SIUL2_0_IFCPR_union_tag { /* SIUL2 Interrupt Filter Clock Prescaler Register */
  vuint32_t R;
  struct {
    vuint32_t IFCP:4;                  /* Interrupt Filter Clock Prescaler setting */
    vuint32_t _unused_4:28;            /* Reserved */
  } B;
} SIUL2_0_IFCPR_tag;

typedef union SIUL2_0_MSCR_union_tag { /* SIUL2 Multiplexed Signal Configuration Register */
  vuint32_t R;
  struct {
    vuint32_t SSS:3;                   /* Source Signal Select */
    vuint32_t _unused_3:2;             /* Reserved */
    vuint32_t SMC:1;                   /* Safe Mode Control */
    vuint32_t _unused_6:4;             /* Reserved */
    vuint32_t RCVR:1;                  /* Receiver Select */
    vuint32_t _unused_11:1;            /* Reserved */
    vuint32_t PUS:1;                   /* Pull Select */
    vuint32_t PUE:1;                   /* Pull Enable */
    vuint32_t SRE:3;                   /* Slew Rate Control */
    vuint32_t _unused_17:2;            /* Reserved */
    vuint32_t IBE:1;                   /* Input Buffer Enable */
    vuint32_t ODE:1;                   /* Open Drain Enable */
    vuint32_t OBE:1;                   /* GPIO Output Buffer Enable */
    vuint32_t _unused_22:10;           /* Reserved */
  } B;
} SIUL2_0_MSCR_tag;

typedef union SIUL2_0_IMCR_union_tag { /* SIUL2 Input Multiplexed Signal Configuration Register */
  vuint32_t R;
  struct {
    vuint32_t SSS:3;                   /* Source Signal Select */
    vuint32_t _unused_3:29;            /* Reserved */
  } B;
} SIUL2_0_IMCR_tag;

typedef union SIUL2_0_GPDO3_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO3_tag;

typedef union SIUL2_0_GPDO2_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO2_tag;

typedef union SIUL2_0_GPDO1_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO1_tag;

typedef union SIUL2_0_GPDO0_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO0_tag;

typedef union SIUL2_0_GPDO7_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO7_tag;

typedef union SIUL2_0_GPDO6_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO6_tag;

typedef union SIUL2_0_GPDO5_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO5_tag;

typedef union SIUL2_0_GPDO4_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO4_tag;

typedef union SIUL2_0_GPDO11_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO11_tag;

typedef union SIUL2_0_GPDO10_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO10_tag;

typedef union SIUL2_0_GPDO9_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO9_tag;

typedef union SIUL2_0_GPDO8_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO8_tag;

typedef union SIUL2_0_GPDO15_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO15_tag;

typedef union SIUL2_0_GPDO14_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO14_tag;

typedef union SIUL2_0_GPDO13_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO13_tag;

typedef union SIUL2_0_GPDO12_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO12_tag;

typedef union SIUL2_0_GPDO19_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO19_tag;

typedef union SIUL2_0_GPDO18_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO18_tag;

typedef union SIUL2_0_GPDO17_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO17_tag;

typedef union SIUL2_0_GPDO16_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO16_tag;

typedef union SIUL2_0_GPDO23_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO23_tag;

typedef union SIUL2_0_GPDO22_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO22_tag;

typedef union SIUL2_0_GPDO21_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO21_tag;

typedef union SIUL2_0_GPDO20_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO20_tag;

typedef union SIUL2_0_GPDO27_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO27_tag;

typedef union SIUL2_0_GPDO26_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO26_tag;

typedef union SIUL2_0_GPDO25_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO25_tag;

typedef union SIUL2_0_GPDO24_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO24_tag;

typedef union SIUL2_0_GPDO31_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO31_tag;

typedef union SIUL2_0_GPDO30_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO30_tag;

typedef union SIUL2_0_GPDO29_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO29_tag;

typedef union SIUL2_0_GPDO28_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO28_tag;

typedef union SIUL2_0_GPDO35_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO35_tag;

typedef union SIUL2_0_GPDO34_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO34_tag;

typedef union SIUL2_0_GPDO33_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO33_tag;

typedef union SIUL2_0_GPDO32_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO32_tag;

typedef union SIUL2_0_GPDO39_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO39_tag;

typedef union SIUL2_0_GPDO38_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO38_tag;

typedef union SIUL2_0_GPDO37_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO37_tag;

typedef union SIUL2_0_GPDO36_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO36_tag;

typedef union SIUL2_0_GPDO43_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO43_tag;

typedef union SIUL2_0_GPDO42_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO42_tag;

typedef union SIUL2_0_GPDO41_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO41_tag;

typedef union SIUL2_0_GPDO40_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO40_tag;

typedef union SIUL2_0_GPDO47_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO47_tag;

typedef union SIUL2_0_GPDO46_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO46_tag;

typedef union SIUL2_0_GPDO45_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO45_tag;

typedef union SIUL2_0_GPDO44_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO44_tag;

typedef union SIUL2_0_GPDO51_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO51_tag;

typedef union SIUL2_0_GPDO50_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO50_tag;

typedef union SIUL2_0_GPDO49_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO49_tag;

typedef union SIUL2_0_GPDO48_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO48_tag;

typedef union SIUL2_0_GPDO55_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO55_tag;

typedef union SIUL2_0_GPDO54_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO54_tag;

typedef union SIUL2_0_GPDO53_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO53_tag;

typedef union SIUL2_0_GPDO52_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO52_tag;

typedef union SIUL2_0_GPDO59_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO59_tag;

typedef union SIUL2_0_GPDO58_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO58_tag;

typedef union SIUL2_0_GPDO57_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO57_tag;

typedef union SIUL2_0_GPDO56_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO56_tag;

typedef union SIUL2_0_GPDO63_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO63_tag;

typedef union SIUL2_0_GPDO62_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO62_tag;

typedef union SIUL2_0_GPDO61_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO61_tag;

typedef union SIUL2_0_GPDO60_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO60_tag;

typedef union SIUL2_0_GPDO67_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO67_tag;

typedef union SIUL2_0_GPDO66_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO66_tag;

typedef union SIUL2_0_GPDO65_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO65_tag;

typedef union SIUL2_0_GPDO64_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO64_tag;

typedef union SIUL2_0_GPDO71_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO71_tag;

typedef union SIUL2_0_GPDO70_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO70_tag;

typedef union SIUL2_0_GPDO69_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO69_tag;

typedef union SIUL2_0_GPDO68_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO68_tag;

typedef union SIUL2_0_GPDO75_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO75_tag;

typedef union SIUL2_0_GPDO74_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO74_tag;

typedef union SIUL2_0_GPDO73_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO73_tag;

typedef union SIUL2_0_GPDO72_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO72_tag;

typedef union SIUL2_0_GPDO79_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO79_tag;

typedef union SIUL2_0_GPDO78_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO78_tag;

typedef union SIUL2_0_GPDO77_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO77_tag;

typedef union SIUL2_0_GPDO76_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO76_tag;

typedef union SIUL2_0_GPDO83_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO83_tag;

typedef union SIUL2_0_GPDO82_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO82_tag;

typedef union SIUL2_0_GPDO81_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO81_tag;

typedef union SIUL2_0_GPDO80_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO80_tag;

typedef union SIUL2_0_GPDO87_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO87_tag;

typedef union SIUL2_0_GPDO86_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO86_tag;

typedef union SIUL2_0_GPDO85_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO85_tag;

typedef union SIUL2_0_GPDO84_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO84_tag;

typedef union SIUL2_0_GPDO91_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO91_tag;

typedef union SIUL2_0_GPDO90_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO90_tag;

typedef union SIUL2_0_GPDO89_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO89_tag;

typedef union SIUL2_0_GPDO88_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO88_tag;

typedef union SIUL2_0_GPDO95_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO95_tag;

typedef union SIUL2_0_GPDO94_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO94_tag;

typedef union SIUL2_0_GPDO93_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO93_tag;

typedef union SIUL2_0_GPDO92_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO92_tag;

typedef union SIUL2_0_GPDO99_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO99_tag;

typedef union SIUL2_0_GPDO98_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO98_tag;

typedef union SIUL2_0_GPDO97_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO97_tag;

typedef union SIUL2_0_GPDO96_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO96_tag;

typedef union SIUL2_0_GPDO101_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO101_tag;

typedef union SIUL2_0_GPDO100_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDO100_tag;

typedef union SIUL2_0_GPDI3_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI3_tag;

typedef union SIUL2_0_GPDI2_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI2_tag;

typedef union SIUL2_0_GPDI1_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI1_tag;

typedef union SIUL2_0_GPDI0_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI0_tag;

typedef union SIUL2_0_GPDI7_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI7_tag;

typedef union SIUL2_0_GPDI6_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI6_tag;

typedef union SIUL2_0_GPDI5_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI5_tag;

typedef union SIUL2_0_GPDI4_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI4_tag;

typedef union SIUL2_0_GPDI11_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI11_tag;

typedef union SIUL2_0_GPDI10_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI10_tag;

typedef union SIUL2_0_GPDI9_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI9_tag;

typedef union SIUL2_0_GPDI8_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI8_tag;

typedef union SIUL2_0_GPDI15_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI15_tag;

typedef union SIUL2_0_GPDI14_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI14_tag;

typedef union SIUL2_0_GPDI13_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI13_tag;

typedef union SIUL2_0_GPDI12_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI12_tag;

typedef union SIUL2_0_GPDI19_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI19_tag;

typedef union SIUL2_0_GPDI18_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI18_tag;

typedef union SIUL2_0_GPDI17_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI17_tag;

typedef union SIUL2_0_GPDI16_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI16_tag;

typedef union SIUL2_0_GPDI23_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI23_tag;

typedef union SIUL2_0_GPDI22_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI22_tag;

typedef union SIUL2_0_GPDI21_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI21_tag;

typedef union SIUL2_0_GPDI20_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI20_tag;

typedef union SIUL2_0_GPDI27_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI27_tag;

typedef union SIUL2_0_GPDI26_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI26_tag;

typedef union SIUL2_0_GPDI25_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI25_tag;

typedef union SIUL2_0_GPDI24_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI24_tag;

typedef union SIUL2_0_GPDI31_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI31_tag;

typedef union SIUL2_0_GPDI30_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI30_tag;

typedef union SIUL2_0_GPDI29_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI29_tag;

typedef union SIUL2_0_GPDI28_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI28_tag;

typedef union SIUL2_0_GPDI35_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI35_tag;

typedef union SIUL2_0_GPDI34_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI34_tag;

typedef union SIUL2_0_GPDI33_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI33_tag;

typedef union SIUL2_0_GPDI32_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI32_tag;

typedef union SIUL2_0_GPDI39_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI39_tag;

typedef union SIUL2_0_GPDI38_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI38_tag;

typedef union SIUL2_0_GPDI37_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI37_tag;

typedef union SIUL2_0_GPDI36_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI36_tag;

typedef union SIUL2_0_GPDI43_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI43_tag;

typedef union SIUL2_0_GPDI42_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI42_tag;

typedef union SIUL2_0_GPDI41_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI41_tag;

typedef union SIUL2_0_GPDI40_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI40_tag;

typedef union SIUL2_0_GPDI47_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI47_tag;

typedef union SIUL2_0_GPDI46_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI46_tag;

typedef union SIUL2_0_GPDI45_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI45_tag;

typedef union SIUL2_0_GPDI44_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI44_tag;

typedef union SIUL2_0_GPDI51_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI51_tag;

typedef union SIUL2_0_GPDI50_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI50_tag;

typedef union SIUL2_0_GPDI49_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI49_tag;

typedef union SIUL2_0_GPDI48_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI48_tag;

typedef union SIUL2_0_GPDI55_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI55_tag;

typedef union SIUL2_0_GPDI54_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI54_tag;

typedef union SIUL2_0_GPDI53_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI53_tag;

typedef union SIUL2_0_GPDI52_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI52_tag;

typedef union SIUL2_0_GPDI59_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI59_tag;

typedef union SIUL2_0_GPDI58_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI58_tag;

typedef union SIUL2_0_GPDI57_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI57_tag;

typedef union SIUL2_0_GPDI56_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI56_tag;

typedef union SIUL2_0_GPDI63_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI63_tag;

typedef union SIUL2_0_GPDI62_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI62_tag;

typedef union SIUL2_0_GPDI61_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI61_tag;

typedef union SIUL2_0_GPDI60_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI60_tag;

typedef union SIUL2_0_GPDI67_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI67_tag;

typedef union SIUL2_0_GPDI66_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI66_tag;

typedef union SIUL2_0_GPDI65_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI65_tag;

typedef union SIUL2_0_GPDI64_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI64_tag;

typedef union SIUL2_0_GPDI71_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI71_tag;

typedef union SIUL2_0_GPDI70_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI70_tag;

typedef union SIUL2_0_GPDI69_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI69_tag;

typedef union SIUL2_0_GPDI68_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI68_tag;

typedef union SIUL2_0_GPDI75_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI75_tag;

typedef union SIUL2_0_GPDI74_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI74_tag;

typedef union SIUL2_0_GPDI73_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI73_tag;

typedef union SIUL2_0_GPDI72_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI72_tag;

typedef union SIUL2_0_GPDI79_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI79_tag;

typedef union SIUL2_0_GPDI78_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI78_tag;

typedef union SIUL2_0_GPDI77_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI77_tag;

typedef union SIUL2_0_GPDI76_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI76_tag;

typedef union SIUL2_0_GPDI83_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI83_tag;

typedef union SIUL2_0_GPDI82_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI82_tag;

typedef union SIUL2_0_GPDI81_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI81_tag;

typedef union SIUL2_0_GPDI80_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI80_tag;

typedef union SIUL2_0_GPDI87_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI87_tag;

typedef union SIUL2_0_GPDI86_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI86_tag;

typedef union SIUL2_0_GPDI85_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI85_tag;

typedef union SIUL2_0_GPDI84_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI84_tag;

typedef union SIUL2_0_GPDI91_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI91_tag;

typedef union SIUL2_0_GPDI90_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI90_tag;

typedef union SIUL2_0_GPDI89_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI89_tag;

typedef union SIUL2_0_GPDI88_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI88_tag;

typedef union SIUL2_0_GPDI95_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI95_tag;

typedef union SIUL2_0_GPDI94_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI94_tag;

typedef union SIUL2_0_GPDI93_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI93_tag;

typedef union SIUL2_0_GPDI92_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI92_tag;

typedef union SIUL2_0_GPDI99_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI99_tag;

typedef union SIUL2_0_GPDI98_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI98_tag;

typedef union SIUL2_0_GPDI97_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI97_tag;

typedef union SIUL2_0_GPDI96_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI96_tag;

typedef union SIUL2_0_GPDI101_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI101_tag;

typedef union SIUL2_0_GPDI100_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_0_GPDI100_tag;

typedef union SIUL2_0_PGPDO1_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t PPDO0:1;                 /* Parallel Pad Data Out 0 */
    vuint16_t PPDO1:1;                 /* Parallel Pad Data Out 1 */
    vuint16_t PPDO2:1;                 /* Parallel Pad Data Out 2 */
    vuint16_t PPDO3:1;                 /* Parallel Pad Data Out 3 */
    vuint16_t PPDO4:1;                 /* Parallel Pad Data Out 4 */
    vuint16_t PPDO5:1;                 /* Parallel Pad Data Out 5 */
    vuint16_t PPDO6:1;                 /* Parallel Pad Data Out 6 */
    vuint16_t PPDO7:1;                 /* Parallel Pad Data Out 7 */
    vuint16_t PPDO8:1;                 /* Parallel Pad Data Out 8 */
    vuint16_t PPDO9:1;                 /* Parallel Pad Data Out 9 */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_0_PGPDO1_tag;

typedef union SIUL2_0_PGPDO0_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t PPDO0:1;                 /* Parallel Pad Data Out 0 */
    vuint16_t PPDO1:1;                 /* Parallel Pad Data Out 1 */
    vuint16_t PPDO2:1;                 /* Parallel Pad Data Out 2 */
    vuint16_t PPDO3:1;                 /* Parallel Pad Data Out 3 */
    vuint16_t PPDO4:1;                 /* Parallel Pad Data Out 4 */
    vuint16_t PPDO5:1;                 /* Parallel Pad Data Out 5 */
    vuint16_t PPDO6:1;                 /* Parallel Pad Data Out 6 */
    vuint16_t PPDO7:1;                 /* Parallel Pad Data Out 7 */
    vuint16_t PPDO8:1;                 /* Parallel Pad Data Out 8 */
    vuint16_t PPDO9:1;                 /* Parallel Pad Data Out 9 */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_0_PGPDO0_tag;

typedef union SIUL2_0_PGPDO3_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t PPDO0:1;                 /* Parallel Pad Data Out 0 */
    vuint16_t PPDO1:1;                 /* Parallel Pad Data Out 1 */
    vuint16_t PPDO2:1;                 /* Parallel Pad Data Out 2 */
    vuint16_t PPDO3:1;                 /* Parallel Pad Data Out 3 */
    vuint16_t PPDO4:1;                 /* Parallel Pad Data Out 4 */
    vuint16_t PPDO5:1;                 /* Parallel Pad Data Out 5 */
    vuint16_t PPDO6:1;                 /* Parallel Pad Data Out 6 */
    vuint16_t PPDO7:1;                 /* Parallel Pad Data Out 7 */
    vuint16_t PPDO8:1;                 /* Parallel Pad Data Out 8 */
    vuint16_t PPDO9:1;                 /* Parallel Pad Data Out 9 */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_0_PGPDO3_tag;

typedef union SIUL2_0_PGPDO2_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t PPDO0:1;                 /* Parallel Pad Data Out 0 */
    vuint16_t PPDO1:1;                 /* Parallel Pad Data Out 1 */
    vuint16_t PPDO2:1;                 /* Parallel Pad Data Out 2 */
    vuint16_t PPDO3:1;                 /* Parallel Pad Data Out 3 */
    vuint16_t PPDO4:1;                 /* Parallel Pad Data Out 4 */
    vuint16_t PPDO5:1;                 /* Parallel Pad Data Out 5 */
    vuint16_t PPDO6:1;                 /* Parallel Pad Data Out 6 */
    vuint16_t PPDO7:1;                 /* Parallel Pad Data Out 7 */
    vuint16_t PPDO8:1;                 /* Parallel Pad Data Out 8 */
    vuint16_t PPDO9:1;                 /* Parallel Pad Data Out 9 */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_0_PGPDO2_tag;

typedef union SIUL2_0_PGPDO5_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t PPDO0:1;                 /* Parallel Pad Data Out 0 */
    vuint16_t PPDO1:1;                 /* Parallel Pad Data Out 1 */
    vuint16_t PPDO2:1;                 /* Parallel Pad Data Out 2 */
    vuint16_t PPDO3:1;                 /* Parallel Pad Data Out 3 */
    vuint16_t PPDO4:1;                 /* Parallel Pad Data Out 4 */
    vuint16_t PPDO5:1;                 /* Parallel Pad Data Out 5 */
    vuint16_t PPDO6:1;                 /* Parallel Pad Data Out 6 */
    vuint16_t PPDO7:1;                 /* Parallel Pad Data Out 7 */
    vuint16_t PPDO8:1;                 /* Parallel Pad Data Out 8 */
    vuint16_t PPDO9:1;                 /* Parallel Pad Data Out 9 */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_0_PGPDO5_tag;

typedef union SIUL2_0_PGPDO4_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t PPDO0:1;                 /* Parallel Pad Data Out 0 */
    vuint16_t PPDO1:1;                 /* Parallel Pad Data Out 1 */
    vuint16_t PPDO2:1;                 /* Parallel Pad Data Out 2 */
    vuint16_t PPDO3:1;                 /* Parallel Pad Data Out 3 */
    vuint16_t PPDO4:1;                 /* Parallel Pad Data Out 4 */
    vuint16_t PPDO5:1;                 /* Parallel Pad Data Out 5 */
    vuint16_t PPDO6:1;                 /* Parallel Pad Data Out 6 */
    vuint16_t PPDO7:1;                 /* Parallel Pad Data Out 7 */
    vuint16_t PPDO8:1;                 /* Parallel Pad Data Out 8 */
    vuint16_t PPDO9:1;                 /* Parallel Pad Data Out 9 */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_0_PGPDO4_tag;

typedef union SIUL2_0_PGPDO6_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t _unused_0:1;             /* Reserved */
    vuint16_t _unused_1:1;             /* Reserved */
    vuint16_t _unused_2:1;             /* Reserved */
    vuint16_t _unused_3:1;             /* Reserved */
    vuint16_t _unused_4:1;             /* Reserved */
    vuint16_t _unused_5:1;             /* Reserved */
    vuint16_t _unused_6:1;             /* Reserved */
    vuint16_t _unused_7:1;             /* Reserved */
    vuint16_t _unused_8:1;             /* Reserved */
    vuint16_t _unused_9:1;             /* Reserved */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_0_PGPDO6_tag;

typedef union SIUL2_0_PGPDI1_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t PPDI0:1;                 /* Parallel Pad Data In 0 */
    vuint16_t PPDI1:1;                 /* Parallel Pad Data In 1 */
    vuint16_t PPDI2:1;                 /* Parallel Pad Data In 2 */
    vuint16_t PPDI3:1;                 /* Parallel Pad Data In 3 */
    vuint16_t PPDI4:1;                 /* Parallel Pad Data In 4 */
    vuint16_t PPDI5:1;                 /* Parallel Pad Data In 5 */
    vuint16_t PPDI6:1;                 /* Parallel Pad Data In 6 */
    vuint16_t PPDI7:1;                 /* Parallel Pad Data In 7 */
    vuint16_t PPDI8:1;                 /* Parallel Pad Data In 8 */
    vuint16_t PPDI9:1;                 /* Parallel Pad Data In 9 */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_0_PGPDI1_tag;

typedef union SIUL2_0_PGPDI0_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t PPDI0:1;                 /* Parallel Pad Data In 0 */
    vuint16_t PPDI1:1;                 /* Parallel Pad Data In 1 */
    vuint16_t PPDI2:1;                 /* Parallel Pad Data In 2 */
    vuint16_t PPDI3:1;                 /* Parallel Pad Data In 3 */
    vuint16_t PPDI4:1;                 /* Parallel Pad Data In 4 */
    vuint16_t PPDI5:1;                 /* Parallel Pad Data In 5 */
    vuint16_t PPDI6:1;                 /* Parallel Pad Data In 6 */
    vuint16_t PPDI7:1;                 /* Parallel Pad Data In 7 */
    vuint16_t PPDI8:1;                 /* Parallel Pad Data In 8 */
    vuint16_t PPDI9:1;                 /* Parallel Pad Data In 9 */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_0_PGPDI0_tag;

typedef union SIUL2_0_PGPDI3_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t PPDI0:1;                 /* Parallel Pad Data In 0 */
    vuint16_t PPDI1:1;                 /* Parallel Pad Data In 1 */
    vuint16_t PPDI2:1;                 /* Parallel Pad Data In 2 */
    vuint16_t PPDI3:1;                 /* Parallel Pad Data In 3 */
    vuint16_t PPDI4:1;                 /* Parallel Pad Data In 4 */
    vuint16_t PPDI5:1;                 /* Parallel Pad Data In 5 */
    vuint16_t PPDI6:1;                 /* Parallel Pad Data In 6 */
    vuint16_t PPDI7:1;                 /* Parallel Pad Data In 7 */
    vuint16_t PPDI8:1;                 /* Parallel Pad Data In 8 */
    vuint16_t PPDI9:1;                 /* Parallel Pad Data In 9 */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_0_PGPDI3_tag;

typedef union SIUL2_0_PGPDI2_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t PPDI0:1;                 /* Parallel Pad Data In 0 */
    vuint16_t PPDI1:1;                 /* Parallel Pad Data In 1 */
    vuint16_t PPDI2:1;                 /* Parallel Pad Data In 2 */
    vuint16_t PPDI3:1;                 /* Parallel Pad Data In 3 */
    vuint16_t PPDI4:1;                 /* Parallel Pad Data In 4 */
    vuint16_t PPDI5:1;                 /* Parallel Pad Data In 5 */
    vuint16_t PPDI6:1;                 /* Parallel Pad Data In 6 */
    vuint16_t PPDI7:1;                 /* Parallel Pad Data In 7 */
    vuint16_t PPDI8:1;                 /* Parallel Pad Data In 8 */
    vuint16_t PPDI9:1;                 /* Parallel Pad Data In 9 */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_0_PGPDI2_tag;

typedef union SIUL2_0_PGPDI5_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t PPDI0:1;                 /* Parallel Pad Data In 0 */
    vuint16_t PPDI1:1;                 /* Parallel Pad Data In 1 */
    vuint16_t PPDI2:1;                 /* Parallel Pad Data In 2 */
    vuint16_t PPDI3:1;                 /* Parallel Pad Data In 3 */
    vuint16_t PPDI4:1;                 /* Parallel Pad Data In 4 */
    vuint16_t PPDI5:1;                 /* Parallel Pad Data In 5 */
    vuint16_t PPDI6:1;                 /* Parallel Pad Data In 6 */
    vuint16_t PPDI7:1;                 /* Parallel Pad Data In 7 */
    vuint16_t PPDI8:1;                 /* Parallel Pad Data In 8 */
    vuint16_t PPDI9:1;                 /* Parallel Pad Data In 9 */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_0_PGPDI5_tag;

typedef union SIUL2_0_PGPDI4_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t PPDI0:1;                 /* Parallel Pad Data In 0 */
    vuint16_t PPDI1:1;                 /* Parallel Pad Data In 1 */
    vuint16_t PPDI2:1;                 /* Parallel Pad Data In 2 */
    vuint16_t PPDI3:1;                 /* Parallel Pad Data In 3 */
    vuint16_t PPDI4:1;                 /* Parallel Pad Data In 4 */
    vuint16_t PPDI5:1;                 /* Parallel Pad Data In 5 */
    vuint16_t PPDI6:1;                 /* Parallel Pad Data In 6 */
    vuint16_t PPDI7:1;                 /* Parallel Pad Data In 7 */
    vuint16_t PPDI8:1;                 /* Parallel Pad Data In 8 */
    vuint16_t PPDI9:1;                 /* Parallel Pad Data In 9 */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_0_PGPDI4_tag;

typedef union SIUL2_0_PGPDI6_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t _unused_0:1;             /* Reserved */
    vuint16_t _unused_1:1;             /* Reserved */
    vuint16_t _unused_2:1;             /* Reserved */
    vuint16_t _unused_3:1;             /* Reserved */
    vuint16_t _unused_4:1;             /* Reserved */
    vuint16_t _unused_5:1;             /* Reserved */
    vuint16_t _unused_6:1;             /* Reserved */
    vuint16_t _unused_7:1;             /* Reserved */
    vuint16_t _unused_8:1;             /* Reserved */
    vuint16_t _unused_9:1;             /* Reserved */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_0_PGPDI6_tag;

typedef union SIUL2_0_MPGPDO_union_tag { /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
  vuint32_t R;
  struct {
    vuint32_t MPPDO0:1;                /* Masked Parallel Pad Data Out 0 */
    vuint32_t MPPDO1:1;                /* Masked Parallel Pad Data Out 1 */
    vuint32_t MPPDO2:1;                /* Masked Parallel Pad Data Out 2 */
    vuint32_t MPPDO3:1;                /* Masked Parallel Pad Data Out 3 */
    vuint32_t MPPDO4:1;                /* Masked Parallel Pad Data Out 4 */
    vuint32_t MPPDO5:1;                /* Masked Parallel Pad Data Out 5 */
    vuint32_t MPPDO6:1;                /* Masked Parallel Pad Data Out 6 */
    vuint32_t MPPDO7:1;                /* Masked Parallel Pad Data Out 7 */
    vuint32_t MPPDO8:1;                /* Masked Parallel Pad Data Out 8 */
    vuint32_t MPPDO9:1;                /* Masked Parallel Pad Data Out 9 */
    vuint32_t MPPDO10:1;               /* Masked Parallel Pad Data Out 10 */
    vuint32_t MPPDO11:1;               /* Masked Parallel Pad Data Out 11 */
    vuint32_t MPPDO12:1;               /* Masked Parallel Pad Data Out 12 */
    vuint32_t MPPDO13:1;               /* Masked Parallel Pad Data Out 13 */
    vuint32_t MPPDO14:1;               /* Masked Parallel Pad Data Out 14 */
    vuint32_t MPPDO15:1;               /* Masked Parallel Pad Data Out 15 */
    vuint32_t MASK0:1;                 /* Mask Field 0 */
    vuint32_t MASK1:1;                 /* Mask Field 1 */
    vuint32_t MASK2:1;                 /* Mask Field 2 */
    vuint32_t MASK3:1;                 /* Mask Field 3 */
    vuint32_t MASK4:1;                 /* Mask Field 4 */
    vuint32_t MASK5:1;                 /* Mask Field 5 */
    vuint32_t MASK6:1;                 /* Mask Field 6 */
    vuint32_t MASK7:1;                 /* Mask Field 7 */
    vuint32_t MASK8:1;                 /* Mask Field 8 */
    vuint32_t MASK9:1;                 /* Mask Field 9 */
    vuint32_t MASK10:1;                /* Mask Field 10 */
    vuint32_t MASK11:1;                /* Mask Field 11 */
    vuint32_t MASK12:1;                /* Mask Field 12 */
    vuint32_t MASK13:1;                /* Mask Field 13 */
    vuint32_t MASK14:1;                /* Mask Field 14 */
    vuint32_t MASK15:1;                /* Mask Field 15 */
  } B;
} SIUL2_0_MPGPDO_tag;

struct SIUL2_0_tag {
  uint8_t SIUL2_0_reserved0[4];
  SIUL2_0_MIDR1_tag MIDR1;             /* SIUL2 MCU ID Register #1 */
  SIUL2_0_MIDR2_tag MIDR2;             /* SIUL2 MCU ID Register #2 */
  uint8_t SIUL2_0_reserved1[4];
  SIUL2_0_DISR0_tag DISR0;             /* SIUL2 DMA/Interrupt Status Flag Register0 */
  uint8_t SIUL2_0_reserved2[4];
  SIUL2_0_DIRER0_tag DIRER0;           /* SIUL2 DMA/Interrupt Request Enable Register0 */
  uint8_t SIUL2_0_reserved3[4];
  SIUL2_0_DIRSR0_tag DIRSR0;           /* SIUL2 DMA/Interrupt Request Select Register0 */
  uint8_t SIUL2_0_reserved4[4];
  SIUL2_0_IREER0_tag IREER0;           /* SIUL2 Interrupt Rising-Edge Event Enable Register 0 */
  uint8_t SIUL2_0_reserved5[4];
  SIUL2_0_IFEER0_tag IFEER0;           /* SIUL2 Interrupt Falling-Edge Event Enable Register 0 */
  uint8_t SIUL2_0_reserved6[4];
  SIUL2_0_IFER0_tag IFER0;             /* SIUL2 Interrupt Filter Enable Register 0 */
  uint8_t SIUL2_0_reserved7[4];
  SIUL2_0_IFMCR_tag IFMCR[12];         /* SIUL2 Interrupt Filter Maximum Counter Register */
  uint8_t SIUL2_0_reserved8[80];
  SIUL2_0_IFCPR_tag IFCPR;             /* SIUL2 Interrupt Filter Clock Prescaler Register */
  uint8_t SIUL2_0_reserved9[380];
  SIUL2_0_MSCR_tag MSCR[102];          /* SIUL2 Multiplexed Signal Configuration Register */
  uint8_t SIUL2_0_reserved10[1640];
  SIUL2_0_IMCR_tag IMCR[84];           /* SIUL2 Input Multiplexed Signal Configuration Register; Valid array indices: 0-1, 3-61, 68-83 */
  uint8_t SIUL2_0_reserved11[1904];
  SIUL2_0_GPDO3_tag GPDO3;             /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO2_tag GPDO2;             /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO1_tag GPDO1;             /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO0_tag GPDO0;             /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO7_tag GPDO7;             /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO6_tag GPDO6;             /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO5_tag GPDO5;             /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO4_tag GPDO4;             /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO11_tag GPDO11;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO10_tag GPDO10;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO9_tag GPDO9;             /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO8_tag GPDO8;             /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO15_tag GPDO15;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO14_tag GPDO14;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO13_tag GPDO13;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO12_tag GPDO12;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO19_tag GPDO19;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO18_tag GPDO18;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO17_tag GPDO17;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO16_tag GPDO16;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO23_tag GPDO23;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO22_tag GPDO22;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO21_tag GPDO21;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO20_tag GPDO20;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO27_tag GPDO27;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO26_tag GPDO26;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO25_tag GPDO25;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO24_tag GPDO24;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO31_tag GPDO31;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO30_tag GPDO30;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO29_tag GPDO29;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO28_tag GPDO28;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO35_tag GPDO35;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO34_tag GPDO34;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO33_tag GPDO33;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO32_tag GPDO32;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO39_tag GPDO39;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO38_tag GPDO38;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO37_tag GPDO37;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO36_tag GPDO36;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO43_tag GPDO43;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO42_tag GPDO42;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO41_tag GPDO41;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO40_tag GPDO40;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO47_tag GPDO47;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO46_tag GPDO46;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO45_tag GPDO45;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO44_tag GPDO44;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO51_tag GPDO51;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO50_tag GPDO50;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO49_tag GPDO49;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO48_tag GPDO48;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO55_tag GPDO55;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO54_tag GPDO54;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO53_tag GPDO53;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO52_tag GPDO52;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO59_tag GPDO59;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO58_tag GPDO58;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO57_tag GPDO57;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO56_tag GPDO56;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO63_tag GPDO63;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO62_tag GPDO62;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO61_tag GPDO61;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO60_tag GPDO60;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO67_tag GPDO67;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO66_tag GPDO66;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO65_tag GPDO65;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO64_tag GPDO64;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO71_tag GPDO71;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO70_tag GPDO70;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO69_tag GPDO69;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO68_tag GPDO68;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO75_tag GPDO75;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO74_tag GPDO74;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO73_tag GPDO73;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO72_tag GPDO72;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO79_tag GPDO79;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO78_tag GPDO78;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO77_tag GPDO77;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO76_tag GPDO76;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO83_tag GPDO83;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO82_tag GPDO82;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO81_tag GPDO81;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO80_tag GPDO80;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO87_tag GPDO87;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO86_tag GPDO86;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO85_tag GPDO85;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO84_tag GPDO84;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO91_tag GPDO91;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO90_tag GPDO90;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO89_tag GPDO89;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO88_tag GPDO88;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO95_tag GPDO95;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO94_tag GPDO94;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO93_tag GPDO93;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO92_tag GPDO92;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO99_tag GPDO99;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO98_tag GPDO98;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO97_tag GPDO97;           /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO96_tag GPDO96;           /* SIUL2 GPIO Pad Data Output Register */
  uint8_t SIUL2_0_reserved12[2];
  SIUL2_0_GPDO101_tag GPDO101;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_0_GPDO100_tag GPDO100;         /* SIUL2 GPIO Pad Data Output Register */
  uint8_t SIUL2_0_reserved13[408];
  SIUL2_0_GPDI3_tag GPDI3;             /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI2_tag GPDI2;             /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI1_tag GPDI1;             /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI0_tag GPDI0;             /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI7_tag GPDI7;             /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI6_tag GPDI6;             /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI5_tag GPDI5;             /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI4_tag GPDI4;             /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI11_tag GPDI11;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI10_tag GPDI10;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI9_tag GPDI9;             /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI8_tag GPDI8;             /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI15_tag GPDI15;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI14_tag GPDI14;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI13_tag GPDI13;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI12_tag GPDI12;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI19_tag GPDI19;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI18_tag GPDI18;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI17_tag GPDI17;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI16_tag GPDI16;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI23_tag GPDI23;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI22_tag GPDI22;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI21_tag GPDI21;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI20_tag GPDI20;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI27_tag GPDI27;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI26_tag GPDI26;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI25_tag GPDI25;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI24_tag GPDI24;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI31_tag GPDI31;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI30_tag GPDI30;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI29_tag GPDI29;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI28_tag GPDI28;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI35_tag GPDI35;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI34_tag GPDI34;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI33_tag GPDI33;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI32_tag GPDI32;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI39_tag GPDI39;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI38_tag GPDI38;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI37_tag GPDI37;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI36_tag GPDI36;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI43_tag GPDI43;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI42_tag GPDI42;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI41_tag GPDI41;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI40_tag GPDI40;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI47_tag GPDI47;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI46_tag GPDI46;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI45_tag GPDI45;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI44_tag GPDI44;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI51_tag GPDI51;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI50_tag GPDI50;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI49_tag GPDI49;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI48_tag GPDI48;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI55_tag GPDI55;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI54_tag GPDI54;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI53_tag GPDI53;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI52_tag GPDI52;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI59_tag GPDI59;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI58_tag GPDI58;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI57_tag GPDI57;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI56_tag GPDI56;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI63_tag GPDI63;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI62_tag GPDI62;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI61_tag GPDI61;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI60_tag GPDI60;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI67_tag GPDI67;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI66_tag GPDI66;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI65_tag GPDI65;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI64_tag GPDI64;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI71_tag GPDI71;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI70_tag GPDI70;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI69_tag GPDI69;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI68_tag GPDI68;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI75_tag GPDI75;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI74_tag GPDI74;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI73_tag GPDI73;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI72_tag GPDI72;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI79_tag GPDI79;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI78_tag GPDI78;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI77_tag GPDI77;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI76_tag GPDI76;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI83_tag GPDI83;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI82_tag GPDI82;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI81_tag GPDI81;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI80_tag GPDI80;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI87_tag GPDI87;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI86_tag GPDI86;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI85_tag GPDI85;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI84_tag GPDI84;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI91_tag GPDI91;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI90_tag GPDI90;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI89_tag GPDI89;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI88_tag GPDI88;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI95_tag GPDI95;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI94_tag GPDI94;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI93_tag GPDI93;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI92_tag GPDI92;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI99_tag GPDI99;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI98_tag GPDI98;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI97_tag GPDI97;           /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI96_tag GPDI96;           /* SIUL2 GPIO Pad Data Input Register */
  uint8_t SIUL2_0_reserved14[2];
  SIUL2_0_GPDI101_tag GPDI101;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_0_GPDI100_tag GPDI100;         /* SIUL2 GPIO Pad Data Input Register */
  uint8_t SIUL2_0_reserved15[408];
  SIUL2_0_PGPDO1_tag PGPDO1;           /* SIUL2 Parallel GPIO Pad Data Out Register */
  SIUL2_0_PGPDO0_tag PGPDO0;           /* SIUL2 Parallel GPIO Pad Data Out Register */
  SIUL2_0_PGPDO3_tag PGPDO3;           /* SIUL2 Parallel GPIO Pad Data Out Register */
  SIUL2_0_PGPDO2_tag PGPDO2;           /* SIUL2 Parallel GPIO Pad Data Out Register */
  SIUL2_0_PGPDO5_tag PGPDO5;           /* SIUL2 Parallel GPIO Pad Data Out Register */
  SIUL2_0_PGPDO4_tag PGPDO4;           /* SIUL2 Parallel GPIO Pad Data Out Register */
  uint8_t SIUL2_0_reserved16[2];
  SIUL2_0_PGPDO6_tag PGPDO6;           /* SIUL2 Parallel GPIO Pad Data Out Register */
  uint8_t SIUL2_0_reserved17[48];
  SIUL2_0_PGPDI1_tag PGPDI1;           /* SIUL2 Parallel GPIO Pad Data In Register */
  SIUL2_0_PGPDI0_tag PGPDI0;           /* SIUL2 Parallel GPIO Pad Data In Register */
  SIUL2_0_PGPDI3_tag PGPDI3;           /* SIUL2 Parallel GPIO Pad Data In Register */
  SIUL2_0_PGPDI2_tag PGPDI2;           /* SIUL2 Parallel GPIO Pad Data In Register */
  SIUL2_0_PGPDI5_tag PGPDI5;           /* SIUL2 Parallel GPIO Pad Data In Register */
  SIUL2_0_PGPDI4_tag PGPDI4;           /* SIUL2 Parallel GPIO Pad Data In Register */
  uint8_t SIUL2_0_reserved18[2];
  SIUL2_0_PGPDI6_tag PGPDI6;           /* SIUL2 Parallel GPIO Pad Data In Register */
  uint8_t SIUL2_0_reserved19[48];
  SIUL2_0_MPGPDO_tag MPGPDO[7];        /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
};


/* ============================================================================
   =============================== Module: SIUL2_1 ============================
   ============================================================================ */

typedef union SIUL2_1_MIDR1_union_tag { /* SIUL2 MCU ID Register #1 */
  vuint32_t R;
  struct {
    vuint32_t SYSTEM_RAM_SIZE:6;       /* System RAM Size */
    vuint32_t _unused_6:4;             /* Reserved */
    vuint32_t PART_NO_LETTER:6;        /* Part Number Letter */
    vuint32_t PRODUCT_FAMILY_NO:10;    /* Product Family Number */
    vuint32_t PRODUCT_FAMILY_LETTER:6; /* Product Family Letter */
  } B;
} SIUL2_1_MIDR1_tag;

typedef union SIUL2_1_MIDR2_union_tag { /* SIUL2 MCU ID Register #2 */
  vuint32_t R;
  struct {
    vuint32_t AE0:1;                   /* Application Extension 0 */
    vuint32_t AE1:1;                   /* Application Extension 1 */
    vuint32_t _unused_2:10;            /* Reserved */
    vuint32_t LAX:1;                   /* Linear Algebraic Accelerator */
    vuint32_t HPBF:1;                  /* High Performance Buffered Flash */
    vuint32_t OTA:1;                   /* Over The Air */
    vuint32_t SERDES:1;                /* SerDes subsystem */
    vuint32_t COMPUTE_DIE_PART_NUMBER:10; /* Compute Die Part Number */
    vuint32_t _unused_26:2;            /* Reserved */
    vuint32_t FLASH_CONFIG:2;          /* Flash Configuration */
    vuint32_t FLASH_VENDOR:2;          /* Flash Vendor */
  } B;
} SIUL2_1_MIDR2_tag;

typedef union SIUL2_1_DISR0_union_tag { /* SIUL2 DMA/Interrupt Status Flag Register0 */
  vuint32_t R;
  struct {
    vuint32_t EIFR0:1;                 /* External Interrupt Status Flag 0 */
    vuint32_t EIFR1:1;                 /* External Interrupt Status Flag 1 */
    vuint32_t EIFR2:1;                 /* External Interrupt Status Flag 2 */
    vuint32_t EIFR3:1;                 /* External Interrupt Status Flag 3 */
    vuint32_t EIFR4:1;                 /* External Interrupt Status Flag 4 */
    vuint32_t EIFR5:1;                 /* External Interrupt Status Flag 5 */
    vuint32_t EIFR6:1;                 /* External Interrupt Status Flag 6 */
    vuint32_t EIFR7:1;                 /* External Interrupt Status Flag 7 */
    vuint32_t EIFR8:1;                 /* External Interrupt Status Flag 8 */
    vuint32_t EIFR9:1;                 /* External Interrupt Status Flag 9 */
    vuint32_t EIFR10:1;                /* External Interrupt Status Flag 10 */
    vuint32_t EIFR11:1;                /* External Interrupt Status Flag 11 */
    vuint32_t EIFR12:1;                /* External Interrupt Status Flag 12 */
    vuint32_t EIFR13:1;                /* External Interrupt Status Flag 13 */
    vuint32_t EIFR14:1;                /* External Interrupt Status Flag 14 */
    vuint32_t EIFR15:1;                /* External Interrupt Status Flag 15 */
    vuint32_t EIFR16:1;                /* External Interrupt Status Flag 16 */
    vuint32_t EIFR17:1;                /* External Interrupt Status Flag 17 */
    vuint32_t EIFR18:1;                /* External Interrupt Status Flag 18 */
    vuint32_t EIFR19:1;                /* External Interrupt Status Flag 19 */
    vuint32_t EIFR20:1;                /* External Interrupt Status Flag 20 */
    vuint32_t EIFR21:1;                /* External Interrupt Status Flag 21 */
    vuint32_t EIFR22:1;                /* External Interrupt Status Flag 22 */
    vuint32_t EIFR23:1;                /* External Interrupt Status Flag 23 */
    vuint32_t EIFR24:1;                /* External Interrupt Status Flag 24 */
    vuint32_t EIFR25:1;                /* External Interrupt Status Flag 25 */
    vuint32_t EIFR26:1;                /* External Interrupt Status Flag 26 */
    vuint32_t EIFR27:1;                /* External Interrupt Status Flag 27 */
    vuint32_t EIFR28:1;                /* External Interrupt Status Flag 28 */
    vuint32_t EIFR29:1;                /* External Interrupt Status Flag 29 */
    vuint32_t EIFR30:1;                /* External Interrupt Status Flag 30 */
    vuint32_t EIFR31:1;                /* External Interrupt Status Flag 31 */
  } B;
} SIUL2_1_DISR0_tag;

typedef union SIUL2_1_DIRER0_union_tag { /* SIUL2 DMA/Interrupt Request Enable Register0 */
  vuint32_t R;
  struct {
    vuint32_t EIRE0:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE1:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE2:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE3:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE4:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE5:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE6:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE7:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE8:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE9:1;                 /* External Interrupt Request Enable */
    vuint32_t EIRE10:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE11:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE12:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE13:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE14:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE15:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE16:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE17:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE18:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE19:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE20:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE21:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE22:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE23:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE24:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE25:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE26:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE27:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE28:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE29:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE30:1;                /* External Interrupt Request Enable */
    vuint32_t EIRE31:1;                /* External Interrupt Request Enable */
  } B;
} SIUL2_1_DIRER0_tag;

typedef union SIUL2_1_DIRSR0_union_tag { /* SIUL2 DMA/Interrupt Request Select Register0 */
  vuint32_t R;
  struct {
    vuint32_t DIRSR0:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR1:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR2:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR3:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR4:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR5:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR6:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR7:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR8:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR9:1;                /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR10:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR11:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR12:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR13:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR14:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR15:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR16:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR17:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR18:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR19:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR20:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR21:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR22:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR23:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR24:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR25:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR26:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR27:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR28:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR29:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR30:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
    vuint32_t DIRSR31:1;               /* DMA/Interrupt Request Select Register-Selects between DMA request or external interrupt request when an edge-triggered event occurs on the corresponding pin. */
  } B;
} SIUL2_1_DIRSR0_tag;

typedef union SIUL2_1_IREER0_union_tag { /* SIUL2 Interrupt Rising-Edge Event Enable Register 0 */
  vuint32_t R;
  struct {
    vuint32_t IREE0:1;                 /* Enable rising-edge events to cause the IREE0 bit to be set. */
    vuint32_t IREE1:1;                 /* Enable rising-edge events to cause the IREE1 bit to be set. */
    vuint32_t IREE2:1;                 /* Enable rising-edge events to cause the IREE2 bit to be set. */
    vuint32_t IREE3:1;                 /* Enable rising-edge events to cause the IREE3 bit to be set. */
    vuint32_t IREE4:1;                 /* Enable rising-edge events to cause the IREE4 bit to be set. */
    vuint32_t IREE5:1;                 /* Enable rising-edge events to cause the IREE5 bit to be set. */
    vuint32_t IREE6:1;                 /* Enable rising-edge events to cause the IREE6 bit to be set. */
    vuint32_t IREE7:1;                 /* Enable rising-edge events to cause the IREE7 bit to be set. */
    vuint32_t IREE8:1;                 /* Enable rising-edge events to cause the IREE8 bit to be set. */
    vuint32_t IREE9:1;                 /* Enable rising-edge events to cause the IREE9 bit to be set. */
    vuint32_t IREE10:1;                /* Enable rising-edge events to cause the IREE10 bit to be set. */
    vuint32_t IREE11:1;                /* Enable rising-edge events to cause the IREE11 bit to be set. */
    vuint32_t IREE12:1;                /* Enable rising-edge events to cause the IREE12 bit to be set. */
    vuint32_t IREE13:1;                /* Enable rising-edge events to cause the IREE13 bit to be set. */
    vuint32_t IREE14:1;                /* Enable rising-edge events to cause the IREE14 bit to be set. */
    vuint32_t IREE15:1;                /* Enable rising-edge events to cause the IREE15 bit to be set. */
    vuint32_t IREE16:1;                /* Enable rising-edge events to cause the IREE16 bit to be set. */
    vuint32_t IREE17:1;                /* Enable rising-edge events to cause the IREE17 bit to be set. */
    vuint32_t IREE18:1;                /* Enable rising-edge events to cause the IREE18 bit to be set. */
    vuint32_t IREE19:1;                /* Enable rising-edge events to cause the IREE19 bit to be set. */
    vuint32_t IREE20:1;                /* Enable rising-edge events to cause the IREE20 bit to be set. */
    vuint32_t IREE21:1;                /* Enable rising-edge events to cause the IREE21 bit to be set. */
    vuint32_t IREE22:1;                /* Enable rising-edge events to cause the IREE22 bit to be set. */
    vuint32_t IREE23:1;                /* Enable rising-edge events to cause the IREE23 bit to be set. */
    vuint32_t IREE24:1;                /* Enable rising-edge events to cause the IREE24 bit to be set. */
    vuint32_t IREE25:1;                /* Enable rising-edge events to cause the IREE25 bit to be set. */
    vuint32_t IREE26:1;                /* Enable rising-edge events to cause the IREE26 bit to be set. */
    vuint32_t IREE27:1;                /* Enable rising-edge events to cause the IREE27 bit to be set. */
    vuint32_t IREE28:1;                /* Enable rising-edge events to cause the IREE28 bit to be set. */
    vuint32_t IREE29:1;                /* Enable rising-edge events to cause the IREE29 bit to be set. */
    vuint32_t IREE30:1;                /* Enable rising-edge events to cause the IREE30 bit to be set. */
    vuint32_t IREE31:1;                /* Enable rising-edge events to cause the IREE31 bit to be set. */
  } B;
} SIUL2_1_IREER0_tag;

typedef union SIUL2_1_IFEER0_union_tag { /* SIUL2 Interrupt Falling-Edge Event Enable Register 0 */
  vuint32_t R;
  struct {
    vuint32_t IFEE0:1;                 /* Enable falling-edge events to cause the IFEE0 bit to be set. */
    vuint32_t IFEE1:1;                 /* Enable falling-edge events to cause the IFEE1 bit to be set. */
    vuint32_t IFEE2:1;                 /* Enable falling-edge events to cause the IFEE2 bit to be set. */
    vuint32_t IFEE3:1;                 /* Enable falling-edge events to cause the IFEE3 bit to be set. */
    vuint32_t IFEE4:1;                 /* Enable falling-edge events to cause the IFEE4 bit to be set. */
    vuint32_t IFEE5:1;                 /* Enable falling-edge events to cause the IFEE5 bit to be set. */
    vuint32_t IFEE6:1;                 /* Enable falling-edge events to cause the IFEE6 bit to be set. */
    vuint32_t IFEE7:1;                 /* Enable falling-edge events to cause the IFEE7 bit to be set. */
    vuint32_t IFEE8:1;                 /* Enable falling-edge events to cause the IFEE8 bit to be set. */
    vuint32_t IFEE9:1;                 /* Enable falling-edge events to cause the IFEE9 bit to be set. */
    vuint32_t IFEE10:1;                /* Enable falling-edge events to cause the IFEE10 bit to be set. */
    vuint32_t IFEE11:1;                /* Enable falling-edge events to cause the IFEE11 bit to be set. */
    vuint32_t IFEE12:1;                /* Enable falling-edge events to cause the IFEE12 bit to be set. */
    vuint32_t IFEE13:1;                /* Enable falling-edge events to cause the IFEE13 bit to be set. */
    vuint32_t IFEE14:1;                /* Enable falling-edge events to cause the IFEE14 bit to be set. */
    vuint32_t IFEE15:1;                /* Enable falling-edge events to cause the IFEE15 bit to be set. */
    vuint32_t IFEE16:1;                /* Enable falling-edge events to cause the IFEE16 bit to be set. */
    vuint32_t IFEE17:1;                /* Enable falling-edge events to cause the IFEE17 bit to be set. */
    vuint32_t IFEE18:1;                /* Enable falling-edge events to cause the IFEE18 bit to be set. */
    vuint32_t IFEE19:1;                /* Enable falling-edge events to cause the IFEE19 bit to be set. */
    vuint32_t IFEE20:1;                /* Enable falling-edge events to cause the IFEE20 bit to be set. */
    vuint32_t IFEE21:1;                /* Enable falling-edge events to cause the IFEE21 bit to be set. */
    vuint32_t IFEE22:1;                /* Enable falling-edge events to cause the IFEE22 bit to be set. */
    vuint32_t IFEE23:1;                /* Enable falling-edge events to cause the IFEE23 bit to be set. */
    vuint32_t IFEE24:1;                /* Enable falling-edge events to cause the IFEE24 bit to be set. */
    vuint32_t IFEE25:1;                /* Enable falling-edge events to cause the IFEE25 bit to be set. */
    vuint32_t IFEE26:1;                /* Enable falling-edge events to cause the IFEE26 bit to be set. */
    vuint32_t IFEE27:1;                /* Enable falling-edge events to cause the IFEE27 bit to be set. */
    vuint32_t IFEE28:1;                /* Enable falling-edge events to cause the IFEE28 bit to be set. */
    vuint32_t IFEE29:1;                /* Enable falling-edge events to cause the IFEE29 bit to be set. */
    vuint32_t IFEE30:1;                /* Enable falling-edge events to cause the IFEE30 bit to be set. */
    vuint32_t IFEE31:1;                /* Enable falling-edge events to cause the IFEE31 bit to be set. */
  } B;
} SIUL2_1_IFEER0_tag;

typedef union SIUL2_1_IFER0_union_tag { /* SIUL2 Interrupt Filter Enable Register 0 */
  vuint32_t R;
  struct {
    vuint32_t IFE0:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE1:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE2:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE3:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE4:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE5:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE6:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE7:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE8:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE9:1;                  /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE10:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE11:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE12:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE13:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE14:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE15:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE16:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE17:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE18:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE19:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE20:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE21:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE22:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE23:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE24:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE25:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE26:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE27:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE28:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE29:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE30:1;                 /* Enable digital glitch filter on the interrupt pad input. */
    vuint32_t IFE31:1;                 /* Enable digital glitch filter on the interrupt pad input. */
  } B;
} SIUL2_1_IFER0_tag;

typedef union SIUL2_1_IFMCR_union_tag { /* SIUL2 Interrupt Filter Maximum Counter Register */
  vuint32_t R;
  struct {
    vuint32_t MAXCNT:4;                /* Maximum Interrupt Filter Counter setting */
    vuint32_t _unused_4:28;            /* Reserved */
  } B;
} SIUL2_1_IFMCR_tag;

typedef union SIUL2_1_IFCPR_union_tag { /* SIUL2 Interrupt Filter Clock Prescaler Register */
  vuint32_t R;
  struct {
    vuint32_t IFCP:4;                  /* Interrupt Filter Clock Prescaler setting */
    vuint32_t _unused_4:28;            /* Reserved */
  } B;
} SIUL2_1_IFCPR_tag;

typedef union SIUL2_1_MSCR_union_tag { /* SIUL2 Multiplexed Signal Configuration Register */
  vuint32_t R;
  struct {
    vuint32_t SSS:3;                   /* Source Signal Select */
    vuint32_t _unused_3:2;             /* Reserved */
    vuint32_t SMC:1;                   /* Safe Mode Control */
    vuint32_t _unused_6:4;             /* Reserved */
    vuint32_t RCVR:1;                  /* Receiver Select */
    vuint32_t _unused_11:1;            /* Reserved */
    vuint32_t PUS:1;                   /* Pull Select */
    vuint32_t PUE:1;                   /* Pull Enable */
    vuint32_t SRE:3;                   /* Slew Rate Control */
    vuint32_t INV:1;                   /* Invert */
    vuint32_t _unused_18:1;            /* Reserved */
    vuint32_t IBE:1;                   /* Input Buffer Enable */
    vuint32_t ODE:1;                   /* Open Drain Enable */
    vuint32_t OBE:1;                   /* GPIO Output Buffer Enable */
    vuint32_t _unused_22:10;           /* Reserved */
  } B;
} SIUL2_1_MSCR_tag;

typedef union SIUL2_1_IMCR_union_tag { /* SIUL2 Input Multiplexed Signal Configuration Register */
  vuint32_t R;
  struct {
    vuint32_t SSS:3;                   /* Source Signal Select */
    vuint32_t _unused_3:29;            /* Reserved */
  } B;
} SIUL2_1_IMCR_tag;

typedef union SIUL2_1_GPDO115_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO115_tag;

typedef union SIUL2_1_GPDO114_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO114_tag;

typedef union SIUL2_1_GPDO113_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO113_tag;

typedef union SIUL2_1_GPDO112_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO112_tag;

typedef union SIUL2_1_GPDO119_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO119_tag;

typedef union SIUL2_1_GPDO118_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO118_tag;

typedef union SIUL2_1_GPDO117_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO117_tag;

typedef union SIUL2_1_GPDO116_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO116_tag;

typedef union SIUL2_1_GPDO122_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO122_tag;

typedef union SIUL2_1_GPDO121_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO121_tag;

typedef union SIUL2_1_GPDO120_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO120_tag;

typedef union SIUL2_1_GPDO147_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO147_tag;

typedef union SIUL2_1_GPDO146_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO146_tag;

typedef union SIUL2_1_GPDO145_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO145_tag;

typedef union SIUL2_1_GPDO144_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO144_tag;

typedef union SIUL2_1_GPDO151_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO151_tag;

typedef union SIUL2_1_GPDO150_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO150_tag;

typedef union SIUL2_1_GPDO149_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO149_tag;

typedef union SIUL2_1_GPDO148_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO148_tag;

typedef union SIUL2_1_GPDO155_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO155_tag;

typedef union SIUL2_1_GPDO154_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO154_tag;

typedef union SIUL2_1_GPDO153_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO153_tag;

typedef union SIUL2_1_GPDO152_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO152_tag;

typedef union SIUL2_1_GPDO159_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO159_tag;

typedef union SIUL2_1_GPDO158_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO158_tag;

typedef union SIUL2_1_GPDO157_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO157_tag;

typedef union SIUL2_1_GPDO156_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO156_tag;

typedef union SIUL2_1_GPDO163_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO163_tag;

typedef union SIUL2_1_GPDO162_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO162_tag;

typedef union SIUL2_1_GPDO161_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO161_tag;

typedef union SIUL2_1_GPDO160_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO160_tag;

typedef union SIUL2_1_GPDO167_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO167_tag;

typedef union SIUL2_1_GPDO166_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO166_tag;

typedef union SIUL2_1_GPDO165_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO165_tag;

typedef union SIUL2_1_GPDO164_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO164_tag;

typedef union SIUL2_1_GPDO171_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO171_tag;

typedef union SIUL2_1_GPDO170_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO170_tag;

typedef union SIUL2_1_GPDO169_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO169_tag;

typedef union SIUL2_1_GPDO168_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO168_tag;

typedef union SIUL2_1_GPDO175_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO175_tag;

typedef union SIUL2_1_GPDO174_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO174_tag;

typedef union SIUL2_1_GPDO173_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO173_tag;

typedef union SIUL2_1_GPDO172_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO172_tag;

typedef union SIUL2_1_GPDO179_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO179_tag;

typedef union SIUL2_1_GPDO178_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO178_tag;

typedef union SIUL2_1_GPDO177_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO177_tag;

typedef union SIUL2_1_GPDO176_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO176_tag;

typedef union SIUL2_1_GPDO183_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO183_tag;

typedef union SIUL2_1_GPDO182_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO182_tag;

typedef union SIUL2_1_GPDO181_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO181_tag;

typedef union SIUL2_1_GPDO180_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO180_tag;

typedef union SIUL2_1_GPDO187_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO187_tag;

typedef union SIUL2_1_GPDO186_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO186_tag;

typedef union SIUL2_1_GPDO185_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO185_tag;

typedef union SIUL2_1_GPDO184_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO184_tag;

typedef union SIUL2_1_GPDO190_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO190_tag;

typedef union SIUL2_1_GPDO189_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO189_tag;

typedef union SIUL2_1_GPDO188_union_tag { /* SIUL2 GPIO Pad Data Output Register */
  vuint8_t R;
  struct {
    vuint8_t PDO_A:1;                  /* Pad Data Out */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDO188_tag;

typedef union SIUL2_1_GPDI115_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI115_tag;

typedef union SIUL2_1_GPDI114_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI114_tag;

typedef union SIUL2_1_GPDI113_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI113_tag;

typedef union SIUL2_1_GPDI112_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI112_tag;

typedef union SIUL2_1_GPDI119_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI119_tag;

typedef union SIUL2_1_GPDI118_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI118_tag;

typedef union SIUL2_1_GPDI117_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI117_tag;

typedef union SIUL2_1_GPDI116_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI116_tag;

typedef union SIUL2_1_GPDI122_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI122_tag;

typedef union SIUL2_1_GPDI121_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI121_tag;

typedef union SIUL2_1_GPDI120_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI120_tag;

typedef union SIUL2_1_GPDI147_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI147_tag;

typedef union SIUL2_1_GPDI146_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI146_tag;

typedef union SIUL2_1_GPDI145_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI145_tag;

typedef union SIUL2_1_GPDI144_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI144_tag;

typedef union SIUL2_1_GPDI151_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI151_tag;

typedef union SIUL2_1_GPDI150_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI150_tag;

typedef union SIUL2_1_GPDI149_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI149_tag;

typedef union SIUL2_1_GPDI148_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI148_tag;

typedef union SIUL2_1_GPDI155_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI155_tag;

typedef union SIUL2_1_GPDI154_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI154_tag;

typedef union SIUL2_1_GPDI153_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI153_tag;

typedef union SIUL2_1_GPDI152_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI152_tag;

typedef union SIUL2_1_GPDI159_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI159_tag;

typedef union SIUL2_1_GPDI158_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI158_tag;

typedef union SIUL2_1_GPDI157_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI157_tag;

typedef union SIUL2_1_GPDI156_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI156_tag;

typedef union SIUL2_1_GPDI163_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI163_tag;

typedef union SIUL2_1_GPDI162_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI162_tag;

typedef union SIUL2_1_GPDI161_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI161_tag;

typedef union SIUL2_1_GPDI160_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI160_tag;

typedef union SIUL2_1_GPDI167_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI167_tag;

typedef union SIUL2_1_GPDI166_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI166_tag;

typedef union SIUL2_1_GPDI165_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI165_tag;

typedef union SIUL2_1_GPDI164_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI164_tag;

typedef union SIUL2_1_GPDI171_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI171_tag;

typedef union SIUL2_1_GPDI170_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI170_tag;

typedef union SIUL2_1_GPDI169_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI169_tag;

typedef union SIUL2_1_GPDI168_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI168_tag;

typedef union SIUL2_1_GPDI175_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI175_tag;

typedef union SIUL2_1_GPDI174_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI174_tag;

typedef union SIUL2_1_GPDI173_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI173_tag;

typedef union SIUL2_1_GPDI172_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI172_tag;

typedef union SIUL2_1_GPDI179_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI179_tag;

typedef union SIUL2_1_GPDI178_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI178_tag;

typedef union SIUL2_1_GPDI177_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI177_tag;

typedef union SIUL2_1_GPDI176_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI176_tag;

typedef union SIUL2_1_GPDI183_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI183_tag;

typedef union SIUL2_1_GPDI182_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI182_tag;

typedef union SIUL2_1_GPDI181_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI181_tag;

typedef union SIUL2_1_GPDI180_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI180_tag;

typedef union SIUL2_1_GPDI187_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI187_tag;

typedef union SIUL2_1_GPDI186_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI186_tag;

typedef union SIUL2_1_GPDI185_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI185_tag;

typedef union SIUL2_1_GPDI184_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI184_tag;

typedef union SIUL2_1_GPDI190_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI190_tag;

typedef union SIUL2_1_GPDI189_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI189_tag;

typedef union SIUL2_1_GPDI188_union_tag { /* SIUL2 GPIO Pad Data Input Register */
  vuint8_t R;
  struct {
    vuint8_t PDI_A:1;                  /* Pad Data In */
    vuint8_t _unused_1:7;              /* Reserved */
  } B;
} SIUL2_1_GPDI188_tag;

typedef union SIUL2_1_PGPDO7_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t _unused_0:1;             /* Reserved */
    vuint16_t _unused_1:1;             /* Reserved */
    vuint16_t _unused_2:1;             /* Reserved */
    vuint16_t _unused_3:1;             /* Reserved */
    vuint16_t _unused_4:1;             /* Reserved */
    vuint16_t PPDO5:1;                 /* Parallel Pad Data Out 5 */
    vuint16_t PPDO6:1;                 /* Parallel Pad Data Out 6 */
    vuint16_t PPDO7:1;                 /* Parallel Pad Data Out 7 */
    vuint16_t PPDO8:1;                 /* Parallel Pad Data Out 8 */
    vuint16_t PPDO9:1;                 /* Parallel Pad Data Out 9 */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_1_PGPDO7_tag;

typedef union SIUL2_1_PGPDO9_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t PPDO0:1;                 /* Parallel Pad Data Out 0 */
    vuint16_t PPDO1:1;                 /* Parallel Pad Data Out 1 */
    vuint16_t PPDO2:1;                 /* Parallel Pad Data Out 2 */
    vuint16_t PPDO3:1;                 /* Parallel Pad Data Out 3 */
    vuint16_t PPDO4:1;                 /* Parallel Pad Data Out 4 */
    vuint16_t PPDO5:1;                 /* Parallel Pad Data Out 5 */
    vuint16_t PPDO6:1;                 /* Parallel Pad Data Out 6 */
    vuint16_t PPDO7:1;                 /* Parallel Pad Data Out 7 */
    vuint16_t PPDO8:1;                 /* Parallel Pad Data Out 8 */
    vuint16_t PPDO9:1;                 /* Parallel Pad Data Out 9 */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_1_PGPDO9_tag;

typedef union SIUL2_1_PGPDO11_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t _unused_0:1;             /* Reserved */
    vuint16_t PPDO1:1;                 /* Parallel Pad Data Out 1 */
    vuint16_t PPDO2:1;                 /* Parallel Pad Data Out 2 */
    vuint16_t PPDO3:1;                 /* Parallel Pad Data Out 3 */
    vuint16_t PPDO4:1;                 /* Parallel Pad Data Out 4 */
    vuint16_t PPDO5:1;                 /* Parallel Pad Data Out 5 */
    vuint16_t PPDO6:1;                 /* Parallel Pad Data Out 6 */
    vuint16_t PPDO7:1;                 /* Parallel Pad Data Out 7 */
    vuint16_t PPDO8:1;                 /* Parallel Pad Data Out 8 */
    vuint16_t PPDO9:1;                 /* Parallel Pad Data Out 9 */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_1_PGPDO11_tag;

typedef union SIUL2_1_PGPDO10_union_tag { /* SIUL2 Parallel GPIO Pad Data Out Register */
  vuint16_t R;
  struct {
    vuint16_t PPDO0:1;                 /* Parallel Pad Data Out 0 */
    vuint16_t PPDO1:1;                 /* Parallel Pad Data Out 1 */
    vuint16_t PPDO2:1;                 /* Parallel Pad Data Out 2 */
    vuint16_t PPDO3:1;                 /* Parallel Pad Data Out 3 */
    vuint16_t PPDO4:1;                 /* Parallel Pad Data Out 4 */
    vuint16_t PPDO5:1;                 /* Parallel Pad Data Out 5 */
    vuint16_t PPDO6:1;                 /* Parallel Pad Data Out 6 */
    vuint16_t PPDO7:1;                 /* Parallel Pad Data Out 7 */
    vuint16_t PPDO8:1;                 /* Parallel Pad Data Out 8 */
    vuint16_t PPDO9:1;                 /* Parallel Pad Data Out 9 */
    vuint16_t PPDO10:1;                /* Parallel Pad Data Out 10 */
    vuint16_t PPDO11:1;                /* Parallel Pad Data Out 11 */
    vuint16_t PPDO12:1;                /* Parallel Pad Data Out 12 */
    vuint16_t PPDO13:1;                /* Parallel Pad Data Out 13 */
    vuint16_t PPDO14:1;                /* Parallel Pad Data Out 14 */
    vuint16_t PPDO15:1;                /* Parallel Pad Data Out 15 */
  } B;
} SIUL2_1_PGPDO10_tag;

typedef union SIUL2_1_PGPDI7_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t _unused_0:1;             /* Reserved */
    vuint16_t _unused_1:1;             /* Reserved */
    vuint16_t _unused_2:1;             /* Reserved */
    vuint16_t _unused_3:1;             /* Reserved */
    vuint16_t _unused_4:1;             /* Reserved */
    vuint16_t PPDI5:1;                 /* Parallel Pad Data In 5 */
    vuint16_t PPDI6:1;                 /* Parallel Pad Data In 6 */
    vuint16_t PPDI7:1;                 /* Parallel Pad Data In 7 */
    vuint16_t PPDI8:1;                 /* Parallel Pad Data In 8 */
    vuint16_t PPDI9:1;                 /* Parallel Pad Data In 9 */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_1_PGPDI7_tag;

typedef union SIUL2_1_PGPDI9_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t PPDI0:1;                 /* Parallel Pad Data In 0 */
    vuint16_t PPDI1:1;                 /* Parallel Pad Data In 1 */
    vuint16_t PPDI2:1;                 /* Parallel Pad Data In 2 */
    vuint16_t PPDI3:1;                 /* Parallel Pad Data In 3 */
    vuint16_t PPDI4:1;                 /* Parallel Pad Data In 4 */
    vuint16_t PPDI5:1;                 /* Parallel Pad Data In 5 */
    vuint16_t PPDI6:1;                 /* Parallel Pad Data In 6 */
    vuint16_t PPDI7:1;                 /* Parallel Pad Data In 7 */
    vuint16_t PPDI8:1;                 /* Parallel Pad Data In 8 */
    vuint16_t PPDI9:1;                 /* Parallel Pad Data In 9 */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_1_PGPDI9_tag;

typedef union SIUL2_1_PGPDI11_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t _unused_0:1;             /* Reserved */
    vuint16_t PPDI1:1;                 /* Parallel Pad Data In 1 */
    vuint16_t PPDI2:1;                 /* Parallel Pad Data In 2 */
    vuint16_t PPDI3:1;                 /* Parallel Pad Data In 3 */
    vuint16_t PPDI4:1;                 /* Parallel Pad Data In 4 */
    vuint16_t PPDI5:1;                 /* Parallel Pad Data In 5 */
    vuint16_t PPDI6:1;                 /* Parallel Pad Data In 6 */
    vuint16_t PPDI7:1;                 /* Parallel Pad Data In 7 */
    vuint16_t PPDI8:1;                 /* Parallel Pad Data In 8 */
    vuint16_t PPDI9:1;                 /* Parallel Pad Data In 9 */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_1_PGPDI11_tag;

typedef union SIUL2_1_PGPDI10_union_tag { /* SIUL2 Parallel GPIO Pad Data In Register */
  vuint16_t R;
  struct {
    vuint16_t PPDI0:1;                 /* Parallel Pad Data In 0 */
    vuint16_t PPDI1:1;                 /* Parallel Pad Data In 1 */
    vuint16_t PPDI2:1;                 /* Parallel Pad Data In 2 */
    vuint16_t PPDI3:1;                 /* Parallel Pad Data In 3 */
    vuint16_t PPDI4:1;                 /* Parallel Pad Data In 4 */
    vuint16_t PPDI5:1;                 /* Parallel Pad Data In 5 */
    vuint16_t PPDI6:1;                 /* Parallel Pad Data In 6 */
    vuint16_t PPDI7:1;                 /* Parallel Pad Data In 7 */
    vuint16_t PPDI8:1;                 /* Parallel Pad Data In 8 */
    vuint16_t PPDI9:1;                 /* Parallel Pad Data In 9 */
    vuint16_t PPDI10:1;                /* Parallel Pad Data In 10 */
    vuint16_t PPDI11:1;                /* Parallel Pad Data In 11 */
    vuint16_t PPDI12:1;                /* Parallel Pad Data In 12 */
    vuint16_t PPDI13:1;                /* Parallel Pad Data In 13 */
    vuint16_t PPDI14:1;                /* Parallel Pad Data In 14 */
    vuint16_t PPDI15:1;                /* Parallel Pad Data In 15 */
  } B;
} SIUL2_1_PGPDI10_tag;

typedef union SIUL2_1_MPGPDO_union_tag { /* SIUL2 Masked Parallel GPIO Pad Data Out Register */
  vuint32_t R;
  struct {
    vuint32_t _unused_0:1;             /* Reserved */
    vuint32_t _unused_1:1;             /* Reserved */
    vuint32_t _unused_2:1;             /* Reserved */
    vuint32_t _unused_3:1;             /* Reserved */
    vuint32_t _unused_4:1;             /* Reserved */
    vuint32_t MPPDO5:1;                /* Masked Parallel Pad Data Out 5 */
    vuint32_t MPPDO6:1;                /* Masked Parallel Pad Data Out 6 */
    vuint32_t MPPDO7:1;                /* Masked Parallel Pad Data Out 7 */
    vuint32_t MPPDO8:1;                /* Masked Parallel Pad Data Out 8 */
    vuint32_t MPPDO9:1;                /* Masked Parallel Pad Data Out 9 */
    vuint32_t MPPDO10:1;               /* Masked Parallel Pad Data Out 10 */
    vuint32_t MPPDO11:1;               /* Masked Parallel Pad Data Out 11 */
    vuint32_t MPPDO12:1;               /* Masked Parallel Pad Data Out 12 */
    vuint32_t MPPDO13:1;               /* Masked Parallel Pad Data Out 13 */
    vuint32_t MPPDO14:1;               /* Masked Parallel Pad Data Out 14 */
    vuint32_t MPPDO15:1;               /* Masked Parallel Pad Data Out 15 */
    vuint32_t _unused_16:1;            /* Reserved */
    vuint32_t _unused_17:1;            /* Reserved */
    vuint32_t _unused_18:1;            /* Reserved */
    vuint32_t _unused_19:1;            /* Reserved */
    vuint32_t _unused_20:1;            /* Reserved */
    vuint32_t MASK5:1;                 /* Mask Field 5 */
    vuint32_t MASK6:1;                 /* Mask Field 6 */
    vuint32_t MASK7:1;                 /* Mask Field 7 */
    vuint32_t MASK8:1;                 /* Mask Field 8 */
    vuint32_t MASK9:1;                 /* Mask Field 9 */
    vuint32_t MASK10:1;                /* Mask Field 10 */
    vuint32_t MASK11:1;                /* Mask Field 11 */
    vuint32_t MASK12:1;                /* Mask Field 12 */
    vuint32_t MASK13:1;                /* Mask Field 13 */
    vuint32_t MASK14:1;                /* Mask Field 14 */
    vuint32_t MASK15:1;                /* Mask Field 15 */
  } B;
} SIUL2_1_MPGPDO_tag;

struct SIUL2_1_tag {
  uint8_t SIUL2_1_reserved0[4];
  SIUL2_1_MIDR1_tag MIDR1;             /* SIUL2 MCU ID Register #1 */
  SIUL2_1_MIDR2_tag MIDR2;             /* SIUL2 MCU ID Register #2 */
  uint8_t SIUL2_1_reserved1[4];
  SIUL2_1_DISR0_tag DISR0;             /* SIUL2 DMA/Interrupt Status Flag Register0 */
  uint8_t SIUL2_1_reserved2[4];
  SIUL2_1_DIRER0_tag DIRER0;           /* SIUL2 DMA/Interrupt Request Enable Register0 */
  uint8_t SIUL2_1_reserved3[4];
  SIUL2_1_DIRSR0_tag DIRSR0;           /* SIUL2 DMA/Interrupt Request Select Register0 */
  uint8_t SIUL2_1_reserved4[4];
  SIUL2_1_IREER0_tag IREER0;           /* SIUL2 Interrupt Rising-Edge Event Enable Register 0 */
  uint8_t SIUL2_1_reserved5[4];
  SIUL2_1_IFEER0_tag IFEER0;           /* SIUL2 Interrupt Falling-Edge Event Enable Register 0 */
  uint8_t SIUL2_1_reserved6[4];
  SIUL2_1_IFER0_tag IFER0;             /* SIUL2 Interrupt Filter Enable Register 0 */
  uint8_t SIUL2_1_reserved7[4];
  SIUL2_1_IFMCR_tag IFMCR[32];         /* SIUL2 Interrupt Filter Maximum Counter Register */
  SIUL2_1_IFCPR_tag IFCPR;             /* SIUL2 Interrupt Filter Clock Prescaler Register */
  uint8_t SIUL2_1_reserved8[380];
  SIUL2_1_MSCR_tag MSCR[191];          /* SIUL2 Multiplexed Signal Configuration Register; Valid array indices: 112-122, 144-190 */
  uint8_t SIUL2_1_reserved9[1284];
  SIUL2_1_IMCR_tag IMCR[496];          /* SIUL2 Input Multiplexed Signal Configuration Register; Valid array indices: 119-121, 128-129, 143-151, 153-161, 205-212, 224-225, 233-248, 273-274, 278-281, 283-286, 288-294, 296-302, 304-310, 312-314, 316, 318, 322-340, 343-360, 363-380, 383-393, 398-433, 467-470, 473-475, 478-480, 483-485, 488-490, 493-495 */
  uint8_t SIUL2_1_reserved10[368];
  SIUL2_1_GPDO115_tag GPDO115;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO114_tag GPDO114;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO113_tag GPDO113;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO112_tag GPDO112;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO119_tag GPDO119;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO118_tag GPDO118;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO117_tag GPDO117;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO116_tag GPDO116;         /* SIUL2 GPIO Pad Data Output Register */
  uint8_t SIUL2_1_reserved11[1];
  SIUL2_1_GPDO122_tag GPDO122;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO121_tag GPDO121;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO120_tag GPDO120;         /* SIUL2 GPIO Pad Data Output Register */
  uint8_t SIUL2_1_reserved12[20];
  SIUL2_1_GPDO147_tag GPDO147;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO146_tag GPDO146;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO145_tag GPDO145;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO144_tag GPDO144;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO151_tag GPDO151;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO150_tag GPDO150;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO149_tag GPDO149;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO148_tag GPDO148;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO155_tag GPDO155;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO154_tag GPDO154;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO153_tag GPDO153;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO152_tag GPDO152;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO159_tag GPDO159;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO158_tag GPDO158;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO157_tag GPDO157;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO156_tag GPDO156;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO163_tag GPDO163;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO162_tag GPDO162;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO161_tag GPDO161;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO160_tag GPDO160;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO167_tag GPDO167;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO166_tag GPDO166;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO165_tag GPDO165;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO164_tag GPDO164;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO171_tag GPDO171;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO170_tag GPDO170;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO169_tag GPDO169;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO168_tag GPDO168;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO175_tag GPDO175;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO174_tag GPDO174;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO173_tag GPDO173;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO172_tag GPDO172;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO179_tag GPDO179;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO178_tag GPDO178;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO177_tag GPDO177;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO176_tag GPDO176;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO183_tag GPDO183;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO182_tag GPDO182;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO181_tag GPDO181;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO180_tag GPDO180;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO187_tag GPDO187;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO186_tag GPDO186;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO185_tag GPDO185;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO184_tag GPDO184;         /* SIUL2 GPIO Pad Data Output Register */
  uint8_t SIUL2_1_reserved13[1];
  SIUL2_1_GPDO190_tag GPDO190;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO189_tag GPDO189;         /* SIUL2 GPIO Pad Data Output Register */
  SIUL2_1_GPDO188_tag GPDO188;         /* SIUL2 GPIO Pad Data Output Register */
  uint8_t SIUL2_1_reserved14[432];
  SIUL2_1_GPDI115_tag GPDI115;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI114_tag GPDI114;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI113_tag GPDI113;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI112_tag GPDI112;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI119_tag GPDI119;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI118_tag GPDI118;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI117_tag GPDI117;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI116_tag GPDI116;         /* SIUL2 GPIO Pad Data Input Register */
  uint8_t SIUL2_1_reserved15[1];
  SIUL2_1_GPDI122_tag GPDI122;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI121_tag GPDI121;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI120_tag GPDI120;         /* SIUL2 GPIO Pad Data Input Register */
  uint8_t SIUL2_1_reserved16[20];
  SIUL2_1_GPDI147_tag GPDI147;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI146_tag GPDI146;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI145_tag GPDI145;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI144_tag GPDI144;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI151_tag GPDI151;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI150_tag GPDI150;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI149_tag GPDI149;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI148_tag GPDI148;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI155_tag GPDI155;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI154_tag GPDI154;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI153_tag GPDI153;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI152_tag GPDI152;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI159_tag GPDI159;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI158_tag GPDI158;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI157_tag GPDI157;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI156_tag GPDI156;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI163_tag GPDI163;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI162_tag GPDI162;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI161_tag GPDI161;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI160_tag GPDI160;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI167_tag GPDI167;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI166_tag GPDI166;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI165_tag GPDI165;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI164_tag GPDI164;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI171_tag GPDI171;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI170_tag GPDI170;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI169_tag GPDI169;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI168_tag GPDI168;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI175_tag GPDI175;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI174_tag GPDI174;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI173_tag GPDI173;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI172_tag GPDI172;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI179_tag GPDI179;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI178_tag GPDI178;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI177_tag GPDI177;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI176_tag GPDI176;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI183_tag GPDI183;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI182_tag GPDI182;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI181_tag GPDI181;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI180_tag GPDI180;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI187_tag GPDI187;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI186_tag GPDI186;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI185_tag GPDI185;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI184_tag GPDI184;         /* SIUL2 GPIO Pad Data Input Register */
  uint8_t SIUL2_1_reserved17[1];
  SIUL2_1_GPDI190_tag GPDI190;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI189_tag GPDI189;         /* SIUL2 GPIO Pad Data Input Register */
  SIUL2_1_GPDI188_tag GPDI188;         /* SIUL2 GPIO Pad Data Input Register */
  uint8_t SIUL2_1_reserved18[332];
  SIUL2_1_PGPDO7_tag PGPDO7;           /* SIUL2 Parallel GPIO Pad Data Out Register */
  uint8_t SIUL2_1_reserved19[2];
  SIUL2_1_PGPDO9_tag PGPDO9;           /* SIUL2 Parallel GPIO Pad Data Out Register */
  uint8_t SIUL2_1_reserved20[2];
  SIUL2_1_PGPDO11_tag PGPDO11;         /* SIUL2 Parallel GPIO Pad Data Out Register */
  SIUL2_1_PGPDO10_tag PGPDO10;         /* SIUL2 Parallel GPIO Pad Data Out Register */
  uint8_t SIUL2_1_reserved21[52];
  SIUL2_1_PGPDI7_tag PGPDI7;           /* SIUL2 Parallel GPIO Pad Data In Register */
  uint8_t SIUL2_1_reserved22[2];
  SIUL2_1_PGPDI9_tag PGPDI9;           /* SIUL2 Parallel GPIO Pad Data In Register */
  uint8_t SIUL2_1_reserved23[2];
  SIUL2_1_PGPDI11_tag PGPDI11;         /* SIUL2 Parallel GPIO Pad Data In Register */
  SIUL2_1_PGPDI10_tag PGPDI10;         /* SIUL2 Parallel GPIO Pad Data In Register */
  uint8_t SIUL2_1_reserved24[40];
  SIUL2_1_MPGPDO_tag MPGPDO[12];       /* SIUL2 Masked Parallel GPIO Pad Data Out Register; Valid array indices: 7, 9-11 */
};

#define SIUL2_0_REG_BASE 0x4009C000U
#define SIUL2_0_REG_SIZE sizeof(struct SIUL2_0_tag)

#define SIUL2_1_REG_BASE 0x44010000U
#define SIUL2_1_REG_SIZE sizeof(struct SIUL2_1_tag)



