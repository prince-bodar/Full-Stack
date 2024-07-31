const http = require("http")
const server = http.createServer()

server.on("request" , (req,res)=>{res.end("<p>hello welcome for my own server 5</p>")})
server.listen("5050",()=> {console.log("fifth server on the http://localhost:5050");})