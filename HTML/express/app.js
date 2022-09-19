const express = require("express")
const path = require("path")

const app = express();
const port = 80;

app.use('/static',express.static('static')) // for serving static files

// PUG SPECIFIC STUFF
app.set('view engine','pug')          // set the template engine as pug 
app.set('views',path.join(__dirname,'views'))   // set the views directory


// our page demo endpoint
app.get("/demo", (req, res)=>{
    res.status(200).render('index',{title:'hey sanaya', message: 'hello there and thanks for telling me how to use it!'})
});


app.get("/",(req, res)=>{
    res.status(200).send("this is home page my first express app")

});
// app.get("/",(req, res)=>{
//     res.send("this is home page my first express app")

// });
app.get("/about",(req, res)=>{
    res.send("this is about page my first express app")

});
app.post("/about",(req, res)=>{
    res.send("this is a post request  about page my first express app")

});
app.get("/this",(req, res)=>{
    res.status(404).send("this page is not found")

});
app.listen(port,()=>{
    console.log(`the application started succesfully on port ${port}`)
})