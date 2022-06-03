class LinkedList{
	public:

		LinkedList(); //Constructor vacio
		~LinkedList(); // Destructor para el manejo de memoria dinamica
		int getFront() const; // Nos devolvera el dato del 1er nodo
		int getBack() const; // Nos devolvera el dato del ultimo nodo
		void addFront(int dt); // Agregar dato al inicio de la lista
		void addBack(int dt); // Agregar dato al final de la lista
		void removeFront(); // Eliminar datos del 1er Nodo
		void removeBack(); // Eliminar datos del ultimo Nodo
		void printReverse(); //Imprimir datos desde el ultimo al inicio
		void printForward(); //Imprimir datos desde el inicio al ultimo
		void buscar();//Buscamos dato en la lista
	private:
		Node *header; //Nodo centinela inicial
		Node *trailer; //Nodo centinela final	
};

