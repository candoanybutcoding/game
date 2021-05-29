#ifndef _BALL___h____
#define _BALL___h____





#define BALL_DRAWARC_LINEWIDTH 0.002
#define BALL_DRAWARC_RADIUS_CHANGE 0.0005
#define BALL_ACCELERATION  0.0005
#define BALL_BROWN_R 0.35
#define BALL_BROWN_G 0.20
#define BALL_BROWN_B 0.05
#define BALL_PINK_R 1
#define BALL_PINK_G 0.6
#define BALL_PINK_B 0.8



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


typedef enum {
 BALL_FORWARD = 1, BALL_BACKWARD = -1
} BALL_Direction_E; 

typedef enum{
 BALL_RED, BALL_YELLOW, BALL_GREEN, BALL_BROWN, BALL_BLUE,
 BALL_PINK, BALL_BLACK, BALL_WHITE, BALL_GRAY
} BALL_Color_E;

typedef enum {
 BALL_GOAL_IN = 0, BALL_GOAL_OUT = 1
} BALL_Goal_E; 






struct BALL_Ball_S{
 float64_t d_radius;
   float64_t d_position_x;
   float64_t d_position_y;
   float64_t d_speed_x;
   float64_t d_speed_y;
   BALL_Direction_E l_direction_x;
   BALL_Direction_E l_direction_y;
  BALL_Goal_E l_ifgoal;
  BALL_Color_E l_color;
};

typedef struct BALL_Ball_S* BALL_Ball_PS;


void Draw_Single_Ball (BALL_Ball_PS pst_BALL_ID);


void dMove_Single_Ball (BALL_Ball_PS pst_BALL_ID);


void Hit_Wall_Single_Ball (BALL_Ball_PS pst_BALL_ID);


BALL_Direction_E Direction_Change (BALL_Direction_E temp_direction);


void Collided_Single_Ball (BALL_Ball_PS pst_BALL_ID_1, BALL_Ball_PS pst_BALL_ID_2);


void Check_Goal_Ball(BALL_Ball_PS pst_BALL_ID);


void Reset_Ball_Position(BALL_Ball_PS pst_BALL_ID);


float64_t Distance_TowPoints(float64_t d_x1, float64_t d_y1, float64_t d_x2, float64_t d_y2);



#endif
