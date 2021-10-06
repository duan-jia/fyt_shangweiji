/**
  ******************************************************************************
  * @file  
  * @author duan
  * @brief seaskyͨѶЭ���ļ�
  * @date     
  ******************************************************************************
  * @attention
  *
  * Copyright (c) CSU_RM_FYT.
  * All rights reserved.
  *
  ******************************************************************************
  */
	
/* includes ------------------------------------------------------------------*/
#include "CRC.h"

/* variables -----------------------------------------------------------------*/

static uint8_t          crc_tab16_init = 0;
static uint16_t         crc_tab16[256];
/* function ------------------------------------------------------------------*/

/* function bsp_crc8------------------------------------------------------------*/
/*
 * static uint8_t sht75_crc_table[];
 *
 * The SHT75 humidity sensor is capable of calculating an 8 bit CRC checksum to
 * ensure data integrity. The lookup table crc_table[] is used to recalculate
 * the CRC.
 */
static uint8_t sht75_crc_table[] =
{
    0,   49,  98,  83,  196, 245, 166, 151, 185, 136, 219, 234, 125, 76,  31,  46,
    67,  114, 33,  16,  135, 182, 229, 212, 250, 203, 152, 169, 62,  15,  92,  109,
    134, 183, 228, 213, 66,  115, 32,  17,  63,  14,  93,  108, 251, 202, 153, 168,
    197, 244, 167, 150, 1,   48,  99,  82,  124, 77,  30,  47,  184, 137, 218, 235,
    61,  12,  95,  110, 249, 200, 155, 170, 132, 181, 230, 215, 64,  113, 34,  19,
    126, 79,  28,  45,  186, 139, 216, 233, 199, 246, 165, 148, 3,   50,  97,  80,
    187, 138, 217, 232, 127, 78,  29,  44,  2,   51,  96,  81,  198, 247, 164, 149,
    248, 201, 154, 171, 60,  13,  94,  111, 65,  112, 35,  18,  133, 180, 231, 214,
    122, 75,  24,  41,  190, 143, 220, 237, 195, 242, 161, 144, 7,   54,  101, 84,
    57,  8,   91,  106, 253, 204, 159, 174, 128, 177, 226, 211, 68,  117, 38,  23,
    252, 205, 158, 175, 56,  9,   90,  107, 69,  116, 39,  22,  129, 176, 227, 210,
    191, 142, 221, 236, 123, 74,  25,  40,  6,   55,  100, 85,  194, 243, 160, 145,
    71,  118, 37,  20,  131, 178, 225, 208, 254, 207, 156, 173, 58,  11,  88,  105,
    4,   53,  102, 87,  192, 241, 162, 147, 189, 140, 223, 238, 121, 72,  27,  42,
    193, 240, 163, 146, 5,   52,  103, 86,  120, 73,  26,  43,  188, 141, 222, 239,
    130, 179, 224, 209, 70,  119, 36,  21,  59,  10,  89,  104, 255, 206, 157, 172
};
/*
 * uint8_t crc_8( const unsigned char *input_str, size_t num_bytes );
 *
 *����crc_8()���������ַ�����8λ��crc
 *�������ȡ�
 */
uint8_t crc_8( const uint8_t *input_str,uint16_t num_bytes)
{
    uint16_t a;
    uint8_t crc;
    const uint8_t *ptr;

    crc = CRC_START_8;
    ptr = input_str;
    if ( ptr != NULL ) for (a=0; a<num_bytes; a++)
            {
                crc = sht75_crc_table[(*ptr++) ^ crc];
            }
    return crc;
}
/*
 * uint8_t update_crc_8( unsigned char crc, unsigned char val );
 *
 *����һ�������ֽں�ѭ������У��ֵ��ǰһ��ֵ
 *update_crc_8()���㲢�������ݵ��µ�ʵ��crcֵ
 */
uint8_t update_crc_8(uint8_t crc, uint8_t val )
{
    return sht75_crc_table[val ^ crc];
}
/* function bsp_crc16------------------------------------------------------------*/
/*
 * uint16_t crc_16( const unsigned char *input_str, size_t num_bytes );
 *
 *����crc_16()һ�μ���һ���ֽڵ�16λCRC16
 *�俪ͷ�Ѵ��ݸ��������ַ�����������
 *Ҫ�����ֽ�Ҳ��һ���������ַ����е��ֽ���Ϊ
 *�ܺ㶨��С���ֵ�����ơ�
 */
uint16_t crc_16(const uint8_t *input_str,uint16_t num_bytes )
{
    uint16_t crc;
    const uint8_t *ptr;
    uint16_t a;
    if (!crc_tab16_init)init_crc16_tab();
    crc = CRC_START_16;
    ptr = input_str;
    if ( ptr != NULL ) for (a=0; a<num_bytes; a++)
            {
                crc = (crc >> 8) ^ crc_tab16[ (crc ^ (uint16_t) *ptr++) & 0x00FF ];
            }
    return crc;
}

/*
 * uint16_t crc_modbus( const unsigned char *input_str, size_t num_bytes );
 *
 *����crc_modbus()һ�μ���16λmodbusѭ������У��
 *һ���ֽ��ַ������俪ͷ�ѱ����ݸ���������
 *Ҫ�����ֽ���Ҳ��һ��������
 */

uint16_t crc_modbus(const uint8_t *input_str, uint16_t num_bytes )
{
    uint16_t crc;
    const uint8_t *ptr;
    uint16_t a;

    if ( ! crc_tab16_init ) init_crc16_tab();

    crc = CRC_START_MODBUS;
    ptr = input_str;
    if ( ptr != NULL ) for (a=0; a<num_bytes; a++)
            {

                crc = (crc >> 8) ^ crc_tab16[ (crc ^ (uint16_t) *ptr++) & 0x00FF ];
            }
    return crc;
}

/*
 * uint16_t update_crc_16( uint16_t crc, unsigned char c );
 *
 *����update_crc_16()����
 *ǰһ��ѭ������У��ֵ����һ��Ҫ���������ֽڡ�
 */
uint16_t update_crc_16(uint16_t crc,uint8_t c )
{
    if ( ! crc_tab16_init ) init_crc16_tab();
    return (crc >> 8) ^ crc_tab16[ (crc ^ (uint16_t) c) & 0x00FF ];
}

/*
 * static void init_crc16_tab( void );
 *
 *Ϊ�˻��������ܣ�ʹ��CRC16���̲��Ҵ���ֵ�ı�
 *����ֱ��������㷨��ʹ�õ��㷨��
 *���ұ��״���init_crc16_tab()���̼���
 *����ѭ������У�麯����
 */
void init_crc16_tab(void)
{
    uint16_t i;
    uint16_t j;
    uint16_t crc;
    uint16_t c;
    for (i=0; i<256; i++)
        {
            crc = 0;
            c   = i;
            for (j=0; j<8; j++)
                {
                    if ( (crc ^ c) & 0x0001 ) crc = ( crc >> 1 ) ^ CRC_POLY_16;
                    else                      crc =   crc >> 1;
                    c = c >> 1;
                }
            crc_tab16[i] = crc;
        }
    crc_tab16_init = 1;
}
