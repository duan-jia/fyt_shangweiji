/*
    @SEASKY---2020/09/05

*/
#include "vSeaskyPort/Protocol/bsp_protocol.h"
#include "vSeaskyPort/Protocol/CRC_Protocol/bsp_crc8.h"
#include "vSeaskyPort/Protocol/CRC_Protocol/bsp_crc16.h"

uint8_t Get_CRC8_Check(uint8_t *pchMessage,uint16_t dwLength)
{
    return crc_8(pchMessage,dwLength);
}

bool CRC8_Check_Sum(uint8_t *pchMessage,uint16_t dwLength)
{
    uint8_t ucExpected = 0;
    if ((pchMessage == 0) || (dwLength <= 2)) return 0;
    ucExpected = Get_CRC8_Check(pchMessage, dwLength-1);
    return ( ucExpected == pchMessage[dwLength-1] );
}

uint16_t Get_CRC16_Check(uint8_t *pchMessage,uint32_t dwLength)
{
    return crc_16(pchMessage,dwLength);
}

bool CRC16_Check_Sum(uint8_t *pchMessage, uint32_t dwLength)
{
    uint16_t  wExpected = 0;
    if ((pchMessage == 0) || (dwLength <= 2))
        {
            return 0;
        }
    wExpected = Get_CRC16_Check ( pchMessage, dwLength - 2);
    return (((wExpected & 0xff) == pchMessage[dwLength - 2] )&& (((wExpected >> 8) & 0xff) == pchMessage[dwLength - 1]));
}

bool protocol_heade_Check(
    protocol *pro,
    uint8_t  *rx_buf,
    uint16_t *rx_pos)
{
    if(rx_buf[0] == PROTOCOL_CMD_ID)
        {
            pro->header.sof = rx_buf[0];
            if(CRC8_Check_Sum(&rx_buf[0],4))
                {
                    pro->header.data_length = (rx_buf[2]<<8) | rx_buf[1];
                    pro->header.crc_check = rx_buf[3];
                    pro->cmd_id = (rx_buf[5]<<8) | rx_buf[4];
                    return  true;
                }
        }
    else
        {
            *rx_pos = 0;
        }
    return false;
}

float float_protocol(uint8_t *dat_t)
{
    uint8_t f_data[4];
    f_data[0] = *(dat_t+0);
    f_data[1] = *(dat_t+1);
    f_data[2] = *(dat_t+2);
    f_data[3] = *(dat_t+3);
    return *(float*)f_data;
}

SerialProtocol::SerialProtocol()
{

    init_crc16_tab();
}


void SerialProtocol::get_protocol_send_data
(uint16_t send_id,
 uint16_t flags_register,
 float    *tx_data,
 uint8_t  float_length,
 uint8_t  *tx_buf,
 uint16_t *tx_buf_len)
{
    uint16_t crc16;
    uint16_t data_len;

    data_len = float_length*4+2;

    tx_buf[0] = PROTOCOL_CMD_ID;
    tx_buf[1] = data_len & 0xff;
    tx_buf[2] = (data_len >> 8) & 0xff;
    tx_buf[3] = Get_CRC8_Check(&tx_buf[0],3);


    tx_buf[4] = send_id & 0xff;
    tx_buf[5] = (send_id>>8) & 0xff;


    tx_buf[6] = flags_register & 0xff;
    tx_buf[7] = (flags_register>>8) & 0xff;


    for(int i=0; i<4*float_length; i++)
        {
            tx_buf[i+8]  = ((uint8_t*)(&tx_data[i/4]))[i%4];
        }


    crc16 = Get_CRC16_Check(&tx_buf[0],data_len+6);
    tx_buf[data_len+6] = crc16 & 0xff;
    tx_buf[data_len+7] = (crc16 >>8) & 0xff;

    *tx_buf_len = data_len+8;
}
bool SerialProtocol::get_protocol_len
(uint8_t  *rx_buf,
 uint16_t *rx_pos,
 uint16_t *thisdataLength)
{
    if(protocol_heade_Check(&rx_pro,rx_buf,rx_pos))
    {
        *thisdataLength = OFFSET_BYTE + rx_pro.header.data_length;
        return true;
    }
    return false;
}

bool SerialProtocol::get_protocol_info
(uint8_t  *rx_buf,
 uint16_t *rx_pos,
 uint16_t *flags_register,
 float    *rx_data)
{
    rx_date_length = OFFSET_BYTE + rx_pro.header.data_length;
    while(CRC16_Check_Sum(&rx_buf[0],rx_date_length))
    {
         *flags_register = (rx_buf[7]<<8) | rx_buf[6];
         for(int i=0; i<(rx_pro.header.data_length-2)/4; i++)
         {
              rx_data[i] = float_protocol(&rx_buf[8+4*i]);
         }
//         for(int i=0; i<rx_date_length; i++)
//         {
//               rx_buf[i] = 0;
//         }
         *rx_pos = 0;
         return true;
       }
    return false;
}
