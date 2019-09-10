#ifndef __SYS_PARAM_H__
#define __SYS_PARAM_H__
#include "main.h"


/* ͨ���ֽ��������ʽ */
#define COMM_TRANSMISSION_FORMAT			1 //0�����ֽ��ȴ���1�����ֽ��ȴ�
#define CRC_TRANSMISSION_FORMAT				0 //0�����ֽ��ȴ���1�����ֽ��ȴ�

/* ϵͳ�����洢�� */
#define SYS_PARAM_FLASH_PAGE_ADDR			ADDR_FLASH_PAGE_80 //ϵͳ�����洢��ַ

/* �������ò��� */
#define SYS_PARAM_BLE_DEV_NAME				"TEO_WI_X" //�豸����
#define SYS_PARAM_BLE_TX_POWER				6 //�������书��[0:-40dBm,1:-20dBm,2:-16dBm,3:-12dBm,4:-8dBm,5:-4dBm,6:0dBm,7:+3dBm,8:+4dBm]
#define SYS_PARAM_BLE_ADV_INTERVAL			100 //�����㲥���[20~10240ms]
#define SYS_PARAM_BLE_ADV_TIME				15 //�����㲥ʱ��[1~65535s,0:���޹㲥]
#define SYS_PARAM_BLE_MIN_CONN_INTERVAL		900 //����������С���[15~4000ms]
#define SYS_PARAM_BLE_MAX_CONN_INTERVAL		1100 //�������������[15~4000ms]
#define SYS_PARAM_BLE_SLAVE_LATENCY			0 //�����ӻ����Ժ��Ե��¼���[0~499]
#define SYS_PARAM_BLE_CONN_TIMEOUT			4000 //�������ӳ�ʱʱ�䣬��ʱʱ������Ӧ���ڴӻ���ʱ*���������[100~32000ms]

/* LORA���ò��� */
#define SYS_PARAM_LORA_FREQ					470 //LORAƵ��[410~800MHz]
#define SYS_PARAM_LORA_POWER				(int8_t)20 //LORA���书��[-9~22]
#define SYS_PARAM_LORA_BW					8 /* LORA����[0:7.81KHz ,1:10.24KHz,2:15.63KHz,3:20.83KHz,
												 4:31.25KHz,5:41.67KHz,6:62.50KHz,7:125KHz,8:250KHz,9:500KHz] */
#define SYS_PARAM_LORA_SF					7 //LORA��Ƶ����[5~12]
#define SYS_PARAM_LORA_CODE_RATE			1 //LORA������[1:CR4_5,2:CR4_6,3:CR4_7,4:CR4_8]
#define SYS_PARAM_LORA_PREAMBLE				14 //LORAǰ����[5~255]
#define SYS_PARAM_LORA_HEADER				0 //LORA��ͷ,SFΪ6ʱֻ��ʹ����ʽ��ͷ[0:��ʽ��ͷ,1:��ʽ��ͷ]
#define SYS_PARAM_LORA_CRC					1 //LORAУ��[0:��,1:��]

/* �豸���ò��� */
#define SYS_PARAM_DEV_GATEWAY_ADDR			{0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08} //���ص�ַ
#define SYS_PARAM_DEV_LONG_ADDR				{0x08,0x07,0x06,0x05,0x04,0x03,0x02,0x01} //��㳤��ַ
#define SYS_PARAM_DEV_SHORT_ADDR			{0x01,0x01} //���̵�ַ

/* IOT���ò��� */
#define SYS_PARAM_IOT_MODE					0 //���ݲ���ģʽ[0:����ģʽ,1:�����ֵģʽ,2:������ֵģʽ]
#define SYS_PARAM_IOT_SAMPLE_INTERVAL		8 //3600 //���ݲ����������λs
#define SYS_PARAM_IOT_X_ANGLE_THRESHOLD		(float)8.8 //��ֵģʽ�µ�X��Ƕ���ֵ
#define SYS_PARAM_IOT_Y_ANGLE_THRESHOLD		(float)6.6 //��ֵģʽ�µ�Y��Ƕ���ֵ

/* LORA������� */
#define SWT_LORA_TIME_SLICE_TIME			30*1000u //LORA���ݷ���ʱ��Ƭʱ��
#define LORA_RX_TIMEOUT_BASE				200u //LORA���ݽ��ճ�ʱʱ�����
#define LORA_TX_MAX_DELAY_TIME				5*1000u //LORA���ݷ���ʧ�������ʱʱ��
#define LORA_TX_MAX_FIAL_TIMES				~0u //LORA���ݷ���ʧ��������
#define LORA_DELAY_BASE_TIME				200u //LORA���ݷ���ʧ����ʱ����
#define LORA_RANDOME_DELAY_UPPER			100u //LORA���ݷ���ʧ�������ʱʱ������
#define LORA_RANDOME_DELAY_LOWER			10u //LORA���ݷ���ʧ�������ʱʱ������

/* ����/Ӳ����⹦�ܿ��� */
#define SIGNAL_DET_SW						0 //�����źż�⿪��
#define SIGNAL_DET_HW						1 //Ӳ���źż�⿪��
#define BAT_SOC_DET_SW						0 //������ص�����⿪��
#define BAT_SOC_DET_HW						0 //Ӳ����ص�����⿪�� 

/* �����źż��������� */
#define SIGNAL_DET_TIME_SLICE				30*1000u /* �źż��ʱ��Ƭ */

/* �豸����ID���� */
#define LORA_TASK_ID						1 //LORA����ID
#define BLE_TASK_ID							2 //BLE����ID
#define SLP_TASK_ID							3 //ϵͳ�͹�������ID
#define INCLINOMETER_TASK_ID				4 //�������ID
#define SIGNAL_DET_TASK_ID					5 //�źż������ID
#define BAT_SOC_TASK_ID						6 //��ص�������ID

typedef struct {
	uint8_t update_flag;
	
	uint8_t ble_tx_power;
	uint16_t ble_adv_interval;
	uint16_t ble_adv_time;
	uint16_t ble_min_conn_interval;
	uint16_t ble_max_conn_interval;
	uint16_t ble_slave_latency;
	uint16_t ble_conn_timeout;
	
	uint16_t lora_freq;
	uint8_t lora_power;
	uint8_t lora_bw;
	uint8_t lora_sf;
	uint8_t lora_code_rate;
	uint8_t lora_preamble;
	uint8_t lora_header;
	uint8_t lora_crc;
	
	uint8_t dev_gateway_addr[8];
	uint8_t dev_long_addr[8];
	uint8_t dev_short_addr[2];
	
	uint8_t iot_mode;
	uint32_t iot_sample_interval;
	float iot_x_angle_threshold;
	float iot_y_angle_threshold;
	
	uint8_t (*save_param_to_flash)(void);
} sys_param_t;

void sys_param_init(void);
uint8_t sys_save_param_to_flash(void);
sys_param_t* sys_param_get_handle(void);
void sys_param_set(uint8_t* param, uint8_t* value, uint8_t len);


#endif







