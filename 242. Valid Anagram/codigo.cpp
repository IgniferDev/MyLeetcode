class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int count[26] = {0};

        for (char c : s) count[c - 'a']++;
        for (char c : t) count[c - 'a']--;

        for (int i = 0; i < 26; i++)
            if (count[i] != 0) return false;

        return true;
    }
};

/*
I M P O R T A N T E
- Existen muchos metodos para resolver este problema.
1. Mio propio era comparar si existia y eliminar caracteres de una cadena en la otra.
usaba el find() y el erase(), pero eso tardaba mucho y era poco optimo
2. Ordenar ambas cadenas y compararlas. al ordenarlas quedan como aaabbbccddffnn
y asi si son diferentes != sale la respuesta
3. La que aparece en el codigo, contar la cantidad de apariciones de cada letra
    en un arreglo de 26 posiciones (una por letra) y luego restar las apariciones
    de la segunda cadena. Si al final todas las posiciones quedan en 0, son anagramas.
*/