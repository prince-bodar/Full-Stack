const http = require("http");
const fs = require("fs");
const url = require("url");

const server = http.createServer((req, res) => {
  if (req.url === "/favicon.ico") return res.end();

  const log = `${Date.now()}: ${req.method} : ${req.url} : new req recive\n`;
  const myurl = url.parse(req.url, true);

  fs.appendFile("log.text", log, (err, data) => {

    switch (myurl.pathname) {
      case "/":
          if(req.method == "GET")  res.end("<h1>Hello this is home page</h1>");
        break;

      case "/signup" :
        if(req.method == "GET")
          res.end("this is sign up from")
        else if(req.method == "POST")
           res.end("Success")
        break

      case "/about":
        const username = myurl.query.myname;
        const usr_id = myurl.query.userid;
        res.end(`<h1>Your name is  ${username} and Your user id is ${usr_id}</h1>`);
        break;

      case "/search":
        const search = myurl.query.search_query;
        res.end("<p>Here your result search for </p>" + search);
        break
      default:res.end("<h1>404 Your page is not Found</h1>");
    }
  });
});

server.listen(9090, () => {
  console.log("your server is started on port http://localhost:9090");
});
