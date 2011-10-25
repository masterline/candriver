#ifndef CANIF_CFG_H_
#define CANIF_CFG_H_


/// Max number of dynamic tx L-PDUs
#define CANIF_NUMBER_OF_DYNAMIC_CANTXPDUIDS	0

/// Enables the  CanIf_ReadRxPduData function
#define CANIF_PUBLIC_READRXPDU_DATA_API		STD_ON
/// Enables the CanIf_CancelTransmit function
#define CANIF_CANCEL_TRANSMIT_SUPPORT		STD_ON
/// Enables the CanIf_ReadTxNotifStatus function
#define CANIF_PUBLIC_READTXPDU_NOTIFY_STATUS_API	STD_ON
/// Enables the CanIf_ReadRxNotifStatus function
#define CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API	STD_ON
/// Enables the CanIf_GetTxConfirmationState function
#define CANIF_PUBLIC_TXCONFIRM_POLLING_SUPPORT      STD_ON

#define CANIF_VERSION_INFO_API              STD_ON
#define CANIF_DEV_ERROR_DETECT			    STD_OFF
#define CANIF_DLC_CHECK                     STD_ON
#define CANIF_ARC_RUNTIME_PDU_CONFIGURATION	STD_OFF
#define CANIF_MULITPLE_DRIVER_SUPPORT       STD_OFF  // Not supported
#define CANIF_READRXPDU_NOTIFY_STATUS_API	STD_OFF  // Not supported
#define CANIF_SETDYNAMICTXID_API            STD_OFF  // Not supported
#define CANIF_WAKEUP_EVENT_API			    STD_OFF  // Not supported
#define CANIF_TRANSCEIVER_API               STD_OFF  // Not supported
#define CANIF_TRANSMIT_CANCELLATION         STD_OFF  // Not supported

typedef enum {
	CANIF_RX_LPDU_ID_CanDB_Message_1,
	CANIF_RX_LPDU_ID_CanDB_Message_2,
	CANIF_NUM_RX_LPDU_ID
} CanIf_Arc_RxLPduIdType;

typedef enum {
	CANIF_TX_LPDU_ID_CanDB_Message_1,
	CANIF_TX_LPDU_ID_CanDB_Message_2,
	CANIF_TX_LPDU_ID_CanDB_Message_3,
	CANIF_NUM_DYNAMIC_TX_LPDU_ID
} CanIf_Arc_DynamicTxLPduIdType;

typedef enum {
	CANIF_TX_LPDU_ID_CanDB_Message_4 = CANIF_NUM_DYNAMIC_TX_LPDU_ID,
	CANIF_NUM_TX_LPDU_ID
} CanIf_Arc_StaticTxLPduIdType;

typedef enum {
	CANIF_Controller_A,
	CANIF_CHANNEL_CNT
} CanIf_Arc_ChannelIdType;

#endif //CANIF_CFG_H_