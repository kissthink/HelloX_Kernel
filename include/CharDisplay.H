//***********************************************************************/
//    Author                    : tywind
//    Original Date             : oct,13 2014
//    Module Name               : chardisplay.h
//    Module Funciton           : char display api
//                                
//    Last modified Author      : tywind
//    Last modified Date        : oct,11 2014
//***********************************************************************/

#ifndef __CHARDISPLAY_H__
#define __CHARDISPLAY_H__

#ifndef __TYPES_H__
#include "TYPES.H"
#endif

#ifndef __CONFIG_H__
#include "..\config\config.h"
#endif


#ifdef __cplusplus
extern "C" {
#endif

//��ʾģʽ
#define  DISPLAY_MODE_DEFAULT   0    //Ĭ����ʾģʽ 80*25

//ɾ��ģʽ
#define  DISPLAY_DELCHAR_PREV		 0		//ɾ�����ǰ��һ���ַ�
#define  DISPLAY_DELCHAR_CURR        1      //ɾ����굱ǰλ��һ���ַ�

//��ʼ����ʾ�豸
BOOL CD_InitDisplay(INT nDisplayMode);

//������ʾģʽ
BOOL CD_SetDisplayMode(INT nMode);

//�õ��к���
BOOL CD_GetDisPlayRang(WORD* pLines,WORD* pColums);

//����
BOOL CD_ChangeLine();

//�õ���ǰ���λ��
INT  CD_GetCursorPos(WORD* pCursorX,WORD* pCursorY);

//���õ�ǰ���λ��
INT  CD_SetCursorPos(WORD nCursorX,WORD nCursorY);

//��ӡ�ַ���,cl��ʾ�Ƿ���
BOOL CD_PrintString(LPSTR pStr,BOOL cl);

//��ӡһ���ַ�
BOOL CD_PrintChar(CHAR ch);

//��ָ��λ�õõ��ַ���
BOOL  CD_GetString(WORD nCursorX,WORD nCursorY,LPSTR pString,INT nBufLen);

//ɾ���ַ���
BOOL  CD_DelString(WORD nCursorX,WORD nCursorY,INT nDelLen);	

//ɾ���ַ�
BOOL  CD_DelChar(INT nDelMode);	

//����
BOOL  CD_Clear();

#ifdef __cplusplus
}
#endif

#endif    //cd.h