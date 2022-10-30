var groupAnagrams = function(strs) {
    if(strs == "") return [[""]];
    if(strs.length == 1) return [strs]; 
    let valSort = [];
    strs.map((val, i) => {
        valSort[i] = val.split("").sort().join("");
    });
    let list = valSort.filter((x, i, a) => a.indexOf(x) === i);
    let ans = [];
    for (let e of list) {
        let a = [];
        valSort.filter((val, ind) => {
            if (val == e) {
                a.push(strs[ind])
            }
        });
        ans.push(a);
    }
    return ans;    
};

//Calling function 
let strs = ["eat", "tea", "tan", "ate", "nat", "bat"];
console.log(groupAnagrams(strs)); //Output: [ [ 'eat', 'tea', 'ate' ], [ 'tan', 'nat' ], [ 'bat' ] ]

