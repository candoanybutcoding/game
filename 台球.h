#ifndef _BALL___h____
#define _BALL___h____

/*
��ģ����ΪBALL
*/ 


#define BALL_RADIUS 0.3
#define BALL_DRAWBALL_STARTING_POSITION 0 
#define BALL_DRAWBALL_ENDING_POSITION 360
#define BALL_GOAL_IN 1 
#define BALL_GOAL_OUT -1
#define BALL_FORWORD 1
#define BALL_BACKWORD -1


typedef char char_t; 
typedef signed char int8_t;
typedef unsigned char uint8_t;  
typedef signed short int int16_t; 
typedef unsigned short int uint16_t; 
typedef signed int int32_t;
typedef unsigned int uint32_t; 
typedef signed long int int64_t; 
typedef unsigned long int uint64_t; 
typedef float float32_t; 
typedef double float64_t; 
typedef long double float128_t; 

/*
unsigned  u
char_t     c
int16_t    s
int32_t    l
int64_t    ll
bool_t     b
float32_t  fl
float64_t  d
float128_t ld
����      a
ָ��      p
�ṹ��    st
ö��      en
����      f
*/

typedef enum {
	
	BALL_FORWORD, BALL_BACKWORD
	
} BALL_Direction_E; /*��x,y������ΪFORWARD,����ΪBACKWARD*/ 

typedef enum{
	
	
} BALL_Color_E;

typedef enum {
	
	BALL_GOAL_IN��BALL_GOAL_OUT 
	
} BALL_Goal_E; /*�ж����Ƿ����*/ 






struct Ball{
	
	float64_t d_position_x;
 	float64_t d_position_y;/*���x,y����*/
 	float64_t d_speed_x;
 	float64_t d_speed_y;/*���x,y�ϵ�����*/
 	BALL_Direction_E l_direction_x;
 	BALL_Direction_E l_direction_y;/*����ٶȶ���x,y��ķ���*/
 
};

typedef struct Ball* BALL_pBall_s;



void Draw_Single_Ball (BALL_pBall_s BALL_ID);/*����һ����*/


void dMove_Single_Ball (BALL_pBall_s BALL_ID);/*������һ֡�ڵ�λ�ƺ�Ħ�����ٶȵı仯*/


void Hit_Wall_Single_Ball (BALL_pBall_s BALL_ID);/*����һ��ײǽ���ٶȵı仯*/


BALL_Direction_E Direction_Change (BALL_Direction_E temp_direction);/*�ı䷽�������*/ 


void Collided_Single_Ball (BALL_pBall_s BALL_ID_1, BALL_pBall_s BALL_ID_2);/*����������ײ����������ٶ�*/


#endif
