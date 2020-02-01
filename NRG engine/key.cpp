#include <sstream>

enum Key
{
	 Unknown = -1,
	 A = 0,B, C, D, E, F, G,
	 H,I,J,K,L,M,N,O,P, Q,R,
	 S, T, U, V, W, X, Y, Z,
	 
	 /*Escape, //хз мб пригодятся
	 L_Control,
	 L_Shift,
	 L_Alt,
	 R_Control,
	 R_Shift,
	 R_Alt,*/
	
	  Left,
	  Right,
	  Up,
	  Down,
	
};
     static bool isKeyPressed(Key key);
