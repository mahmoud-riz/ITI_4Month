#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define SET_BIT(VAR,BITN)     VAR|=(1<<BITN)
#define CLEAR_BIT(VAR,BITN)     VAR&=~(1<<BITN)
#define  GET_BIT(VAR,BITN)     ((VAR>>BITN)&1)
#define  TOGGLE_BIT(VAR,BITN)    VAR^=(1<<BITN)
#endif /* BIT_MATH_H_ */