/*
 * Copyright 2024 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"


void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

void BOARD_InitPins(void)
{
    CLOCK_EnableClock(kCLOCK_PortA);
    CLOCK_EnableClock(kCLOCK_PortB);
    CLOCK_EnableClock(kCLOCK_PortC);
    CLOCK_EnableClock(kCLOCK_PortD);
    CLOCK_EnableClock(kCLOCK_PortE);

    PORT_SetPinMux(PORTA, 4, kPORT_MuxAsGpio);   /* NMI */

    PORT_SetPinMux(PORTA, 1, kPORT_MuxAlt2);   /* LPUART0_RX */
    PORT_SetPinMux(PORTA, 2, kPORT_MuxAlt2);   /* LPUART0_TX */

    PORT_SetPinMux(PORTE, 0, kPORT_MuxAlt3);   /* LPUART1_TX */
    PORT_SetPinMux(PORTE, 1, kPORT_MuxAlt3);   /* LPUART1_RX */

    SIM->SOPT5 = 0;
}
