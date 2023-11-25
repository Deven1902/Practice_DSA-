//{ Driver Code Starts
//Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function readLine() {
    return inputString[currentLine++];
}


function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let n = parseInt(readLine());
        let arr = readLine().trim().split(" ").map((x) => parseInt(x));
        let obj = new Solution();
        obj.shuffleArray(arr, n);
        let s = "";
        for (let it of arr) {
            s += it;
            s += " ";
        }
        console.log(s);

    }
}

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} n
 */

class Solution {
    shuffleArray(arr, n) {
        //code here
        
        var s1 = 0;
        var s2 = n/2;
        var MOD = 1024;
        
        for(var i=0; i<n; i++) {
            let x = 0;
            if(i%2==0) {
                x = arr[s1++] % MOD;
            } else {
                x = arr[s2++] % MOD;
            }
            arr[i] = arr[i] + x * MOD;
        }
        
        for(var i=0; i<n; i++) {
            arr[i] = Math.floor(arr[i] / MOD);
        }
    }
}