// parimitives data type  
// n = null 
// n = number 
// s = string
// s = Symbol
// b = bulean 
// b = bigint 
// u = undefined


let a = null
let b = 129
let c = "prince"
let d = Symbol("i am nice symbol")
let e = BigInt("555") + BigInt("5")
let f
console.log(a,b,c,d,e,f)
console.log(typeof d)

// object
const students = {
    "prince": true,
    "jenil" : 100,
    "meet"  : 200
}
console.log(students["meet"])