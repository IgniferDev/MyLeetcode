class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        if(bits[0]==0 && bits.size()==1)return true;
        do{
            if(bits[i]==0) i+=1;
            if(bits[i]==1) i+=2;
        }while(i<bits.size()-1);
        return i!=bits.size();
    }
};

/*
I M P O R T A N T E
Pues lo que me fije basicamente es que dependiendo el digito que pasara, iba sumando
al final nos dabamos cuenta de si era verdadero o falso, evaluando si nuestra iteracion
fue mayor al arreglo, o del tamaño del arreglo.

En el while se puso que no fuera <=, importante el igual porque eso justamente los
diferencia, entonces eso fue lo que conclui
*/