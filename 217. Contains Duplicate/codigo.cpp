class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1])return true;
        }
        return false;
    }
};

/*
I M P O R T A N T E
Revisar bien a que quieres acceder, porque por ejemplo me marcaba error, hay que
tener cuidado con los for y accesos a la variable
"heap-buffer-overflow" (desbordamiento de búfer de pila) porque intentas acceder
a un elemento que está fuera de los límites del vector nums.
por ejemplo array tiene 1 elemento y quiero acceder al 4, pues no existe.
*/