
const fs = require('fs')



const text = fs.readFileSync("dele.txt","utf-8")
let text = fs.readFileSync("dele.txt","utf-8")
console.log("the content of the file is ")
text=text.replace("shanaya","zaheda")
console.log(text)

console.log("Creating a new file ...")
fs.writeFileSync("abc.txt",text)


