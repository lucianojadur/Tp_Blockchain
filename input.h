
#ifndef INPUT_H
#define INPUT_H 

struct outpoint{
	hash_t tx_id;
	int idx;
};

typedef struct outpoint outpoint_t;

class Input{	
private:
	outpoint_t outpoint; //Como el outpoint es algo propio del input, no abstraigo sus campos de la interfaz del input
	hash_t addr;
public:
	Input(hash_t id, int index, hash_t adress);
	~Input();
	
	/*
	getters
	*/

};

Input *obtenerInput(std::string data);
	//devuelve un puntero a input a partir de de una cadena de texto (data) con los parámetros del input.
	//En caso de la cadena ser errónea devuelve puntero a NULL.
	//


#endif	//INPUT_H
