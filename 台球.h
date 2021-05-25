#ifndef _BALL___h____
#define _BALL___h____

/*
该模块名为BALL
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
数组      a
指针      p
结构体    st
枚举      en
函数      f
*/

typedef enum {
	
	BALL_FORWORD, BALL_BACKWORD
	
} BALL_Direction_E; /*朝x,y轴正向为FORWARD,负向为BACKWARD*/ 

typedef enum{
	
	
} BALL_Color_E;

typedef enum {
	
	BALL_GOAL_IN，BALL_GOAL_OUT 
	
} BALL_Goal_E; /*判断球是否进洞*/ 






struct Ball{
	
	float64_t d_position_x;
 	float64_t d_position_y;/*球的x,y坐标*/
 	float64_t d_speed_x;
 	float64_t d_speed_y;/*球的x,y上的速率*/
 	BALL_Direction_E l_direction_x;
 	BALL_Direction_E l_direction_y;/*球的速度对于x,y轴的方向*/
 
};

typedef struct Ball* BALL_pBall_s;



void Draw_Single_Ball (BALL_pBall_s BALL_ID);/*画出一个球*/


void dMove_Single_Ball (BALL_pBall_s BALL_ID);/*计算这一帧内的位移和摩擦对速度的变化*/


void Hit_Wall_Single_Ball (BALL_pBall_s BALL_ID);/*计算一次撞墙后速度的变化*/


BALL_Direction_E Direction_Change (BALL_Direction_E temp_direction);/*改变方向的正负*/ 


void Collided_Single_Ball (BALL_pBall_s BALL_ID_1, BALL_pBall_s BALL_ID_2);/*计算两球相撞后两个球的速度*/


#endif
