// 2136. Earliest Possible Day of Full Bloom (Hard)

var earliestFullBloom = function (plantTime, growTime) {
    let umap = []; //obj of array
    for (let i = 0; i < growTime.length; i++) {
        let temp = {};
        temp.plantTime = plantTime[i];
        temp.growTime = growTime[i];
        umap.push(temp);
    }
    umap.sort((a, b) => b.growTime - a.growTime);
    // console.log(umap);
    let sum = 0;
    let len = umap.length;
    let highBloomTime = -100;
    for (let i = 0; i < len; i++) {
        sum += umap[i].plantTime;
        const eachTotalTime = sum + umap[i].growTime;
        if (eachTotalTime > highBloomTime) highBloomTime = eachTotalTime;
    }
    // console.log(highBloomTime);
    return highBloomTime;
}
//Calling Function
let plantTime = [1, 2, 3, 2], growTime = [2, 1, 2, 10];
console.log(earliestFullBloom(plantTime,growTime));