//167. Two Sum II - Input Array Is Sorted
var twoSum = function(numbers, target) {
    let number = [];
    let umap = {};
    for(let i = 0; i < numbers.length; i++){
        umap[numbers[i]] = i;
    }
    for(let i = 0; i < numbers.length; i++){
        let temp = target - numbers[i];
        let ind = umap[temp];
        if(ind != undefined){
            number.push(i+1,ind+1);
            break
        }
    }
    return number;
};
let numbers = [2,7,11,15], target = 9;
console.log(twoSum(numbers,target));